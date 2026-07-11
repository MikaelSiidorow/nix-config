# Shared launcher configuration for Raycast on macOS and Vicinae on Linux.
{
  config,
  hostname ? null,
  isDarwin ? false,
  lib,
  pkgs,
  ...
}:
let
  isLinux = !isDarwin;
  isGenericLinux = config.targets.genericLinux.enable or false;

  launcherKeybindingPath =
    "/org/gnome/settings-daemon/plugins/media-keys/custom-keybindings/launcher/";

  buildNodeExtension =
    {
      name,
      src,
      installPhase,
      npmDepsHash ? null,
    }:
    pkgs.buildNpmPackage (
      {
        inherit name src installPhase;
      }
      // (
        if npmDepsHash != null then
          { inherit npmDepsHash; }
        else
          {
            inherit (pkgs.importNpmLock) npmConfigHook;
            npmDeps = pkgs.importNpmLock { npmRoot = src; };
          }
      )
    );

  mkRaycastExtension =
    {
      name,
      src ? null,
      rev ? null,
      sha256 ? null,
      npmDepsHash ? null,
    }:
    let
      resolvedSrc =
        if src != null then
          src
        else
          pkgs.fetchgit {
            inherit rev sha256;
            url = "https://github.com/raycast/extensions";
            sparseCheckout = [ "/extensions/${name}" ];
          }
          + "/extensions/${name}";
    in
    buildNodeExtension {
      inherit name npmDepsHash;
      src = resolvedSrc;
      installPhase = ''
        runHook preInstall

        mkdir -p $out
        cp -r /build/.config/raycast/extensions/${name}/* $out/

        runHook postInstall
      '';
    };

  mkVicinaeExtension =
    {
      name,
      src,
      npmDepsHash ? null,
    }:
    buildNodeExtension {
      inherit name src npmDepsHash;
      installPhase = ''
        runHook preInstall

        mkdir -p $out
        cp -r /build/.local/share/vicinae/extensions/${name}/* $out/

        runHook postInstall
      '';
    };

  machines = {
    pop-os = {
      linux.vicinae.enableGnomeExtension = false;
      darwin.raycast.linkLocalExtensions = false;
    };

    nixos-laptop = {
      # The locked NixOS package set has GNOME Shell 50.1, which is compatible
      # with pkgs.gnomeExtensions.vicinae. Keep this false until GNOME is
      # actually enabled on the NixOS host.
      linux.vicinae.enableGnomeExtension = false;
    };

    MacBook-Air = { };
    MacBook-Pro = { };
  };

  machine = lib.recursiveUpdate {
    linux.vicinae.enableGnomeExtension = false;
    darwin.raycast = {
      defaults = { };
      linkLocalExtensions = false;
    };
  } (machines.${hostname} or { });

  shared = {
    hotkeys = {
      linux = "<Super>space";
      raycast = "Option Space";
    };

    extensions = {
      # Add Raycast Store extensions here once pinned. Vicinae can consume
      # these directly; Raycast linking is kept opt-in below because Raycast's
      # installed-extension registry is private app state.
      #
      # raycast = [
      #   {
      #     name = "google-translate";
      #     rev = "raycast/extensions commit";
      #     sha256 = lib.fakeHash;
      #     npmDepsHash = lib.fakeHash;
      #   }
      # ];
      raycast = [ ];

      # Add native Vicinae extensions here if needed.
      vicinae = [ ];
    };

    settings = {
      activate_on_single_click = false;
      close_on_focus_loss = false;
      escape_key_behavior = "navigate_back";
      favicon_service = "twenty";
      pop_on_backspace = true;
      pop_to_root_on_close = false;
      search_files_in_root = false;

      favorites = [
        "clipboard:history"
      ];

      fallbacks = [
        "files:search"
      ];

      font = {
        rendering = "qt";
        normal = {
          family = "auto";
          size = 10.5;
        };
      };

      keybinds = {
        open-search-filter = "control+P";
        open-settings = "control+,";
        toggle-action-panel = "control+B";

        "action.copy" = "control+shift+C";
        "action.copy-name" = "control+shift+.";
        "action.copy-path" = "control+shift+,";
        "action.dangerous-remove" = "control+shift+X";
        "action.duplicate" = "control+D";
        "action.edit" = "control+E";
        "action.edit-secondary" = "control+shift+E";
        "action.move-down" = "control+shift+ARROWDOWN";
        "action.move-up" = "control+shift+ARROWUP";
        "action.new" = "control+N";
        "action.open" = "control+O";
        "action.pin" = "control+shift+P";
        "action.refresh" = "control+R";
        "action.remove" = "control+X";
        "action.save" = "control+S";
      };

      theme = {
        light = {
          name = "vicinae-light";
          icon_theme = "auto";
        };
        dark = {
          name = "vicinae-dark";
          icon_theme = "auto";
        };
      };
    };
  };

  linux = {
    vicinae = {
      package = if isGenericLinux then config.lib.nixGL.wrap pkgs.vicinae else pkgs.vicinae;
      extensions =
        (map mkRaycastExtension shared.extensions.raycast)
        ++ (map mkVicinaeExtension shared.extensions.vicinae);
      settings = shared.settings // {
        "$schema" = "https://vicinae.com/schemas/config.json";
        telemetry.system_info = false;
        input_server.enabled = true;
        consider_preedit = false;
        keybinding = "default";
        pixmap_cache_mb = 50;
        providers = { };

        launcher_window = {
          opacity = 1.0;
          blur.enabled = true;
          client_side_decorations = {
            enabled = true;
            rounding = 10;
            border_width = 1;
            shadow_size = 12;
          };
          compact_mode.enabled = false;
          size = {
            width = 770;
            height = 480;
          };
          screen = "auto";
          layer_shell = {
            enabled = true;
            keyboard_interactivity = "exclusive";
            layer = "top";
          };
        };
      };
    };
  };

  darwin = {
    raycast = {
      defaults = machine.darwin.raycast.defaults or { };
      manifest = {
        managed_by = "home/launcher.nix";
        inherit hostname shared;
        note = "Raycast does not expose a stable declarative settings module; add known-safe defaults under machines.<host>.darwin.raycast.defaults.";
      };
    };
  };

  raycastExtensionFiles = builtins.listToAttrs (
    map (extension: {
      name = ".config/raycast/extensions/${extension.name}";
      value.source = mkRaycastExtension extension;
    }) shared.extensions.raycast
  );
in
{
  programs.vicinae = lib.mkIf isLinux {
    enable = true;
    package = linux.vicinae.package;
    systemd = {
      enable = true;
      autoStart = true;
    };
    extensions = linux.vicinae.extensions;
    settings = linux.vicinae.settings;
  };

  dconf.settings = lib.mkIf isLinux {
    "org/gnome/settings-daemon/plugins/media-keys" = {
      custom-keybindings = lib.mkAfter [ launcherKeybindingPath ];
    };

    "org/gnome/settings-daemon/plugins/media-keys/custom-keybindings/launcher" = {
      name = "Vicinae";
      command = "vicinae toggle";
      binding = shared.hotkeys.linux;
    };

    "org/gnome/shell" = lib.mkIf machine.linux.vicinae.enableGnomeExtension {
      enabled-extensions = lib.mkAfter [ "vicinae@dagimg-dot" ];
    };
  };

  home.packages = lib.optionals (
    isLinux && machine.linux.vicinae.enableGnomeExtension
  ) [ pkgs.gnomeExtensions.vicinae ];

  home.file =
    lib.optionalAttrs isDarwin {
      "Library/Application Support/Raycast/nix/launcher.json".text =
        builtins.toJSON darwin.raycast.manifest;
    }
    // lib.optionalAttrs (isDarwin && machine.darwin.raycast.linkLocalExtensions) raycastExtensionFiles;

  targets.darwin.defaults = lib.mkIf (isDarwin && darwin.raycast.defaults != { }) {
    "com.raycast.macos" = darwin.raycast.defaults;
  };
}

# Linux-specific desktop applications
{
  pkgs,
  pkgs-unstable ? pkgs,
  config,
  lib,
  isNixOS ? false,
  ...
}:
let
  # NixOS provides graphics drivers natively; generic Linux needs nixGL.
  wrapGraphics = package: if isNixOS then package else config.lib.nixGL.wrap package;

  # Launches the apt/Steam-installed Godot so playtime is tracked on Pop!_OS.
  # Steam appid 404790 = Godot Engine.
  godot-steam = pkgs.writeShellScriptBin "godot-steam" ''
    exec env PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games" \
      LD_LIBRARY_PATH="" \
      /usr/games/steam -applaunch 404790 "$@"
  '';
in
{
  home.packages =
    (with pkgs; [
      # Communication
      pkgs-unstable.vesktop
      # telegram-desktop - using flatpak instead due to graphics driver issues

      # bitwarden-desktop is temporarily omitted: nixos-26.05 packages it with
      # Electron 39, which nixpkgs marks as EOL/insecure.

      # Game development
      (wrapGraphics pkgs-unstable.godot_4)

      # Productivity
      obsidian
      (wrapGraphics sweethome3d.application)

      # Cloud
      azure-cli
      stripe-cli

      # Document processing
      texliveFull
      inkscape

      # Screenshot
      flameshot

      # Terminal
      (wrapGraphics ghostty)
    ])
    ++ lib.optionals (!isNixOS) [
      godot-steam
    ];

  # Steam is installed via apt on Pop!_OS and by NixOS at the system level.
  xdg.desktopEntries = lib.mkIf (!isNixOS) {
    steam = {
      name = "Steam";
      comment = "Application for managing and playing games on Steam";
      exec = ''env -u LD_LIBRARY_PATH -u LIBGL_DRIVERS_PATH -u LIBVA_DRIVERS_PATH -u __EGL_VENDOR_LIBRARY_FILENAMES -u GBM_BACKENDS_PATH -u VK_ICD_FILENAMES -u GIO_EXTRA_MODULES PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games" /usr/games/steam %U'';
      icon = "steam";
      terminal = false;
      type = "Application";
      categories = [
        "Game"
        "Network"
      ];
      mimeType = [
        "x-scheme-handler/steam"
        "x-scheme-handler/steamlink"
      ];
    };
  };
}

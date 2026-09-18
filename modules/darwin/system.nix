# macOS system defaults
{
  pkgs,
  pkgs-unstable,
  username,
  ...
}:
let
  # Herdr is a terminal UI; give the Dock an app that launches it in Ghostty.
  # Avoid -e: Ghostty 1.3.1 on macOS also opens its path arguments as files.
  herdrLauncher = pkgs.writeShellScript "herdr-launcher" ''
    exec /usr/bin/open -na /Applications/Ghostty.app --args \
      --working-directory="$HOME" --quit-after-last-window-closed=true \
      --initial-command="/bin/zsh -lc 'exec ${pkgs-unstable.herdr}/bin/herdr'"
  '';
  herdrApp = pkgs.runCommand "herdr-app" { } ''
    mkdir -p "$out/Applications/Herdr.app/Contents/MacOS"
    mkdir -p "$out/Applications/Herdr.app/Contents/Resources"
    # Official assets/logo.png from herdrdev/herdr at 7df919d00e5bf8f6ed43a1781e81340cc0bbce8d, converted to ICNS.
    cp ${./icons/herdr.icns} "$out/Applications/Herdr.app/Contents/Resources/herdr.icns"
    ln -s ${herdrLauncher} "$out/Applications/Herdr.app/Contents/MacOS/Herdr"
    cat > "$out/Applications/Herdr.app/Contents/Info.plist" <<'EOF'
    <?xml version="1.0" encoding="UTF-8"?>
    <!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
    <plist version="1.0">
    <dict>
      <key>CFBundleName</key><string>Herdr</string>
      <key>CFBundleIdentifier</key><string>local.herdr-launcher</string>
      <key>CFBundleExecutable</key><string>Herdr</string>
      <key>CFBundleIconFile</key><string>herdr.icns</string>
      <key>CFBundlePackageType</key><string>APPL</string>
      <key>LSUIElement</key><true/>
    </dict>
    </plist>
    EOF
  '';
in
{
  system.defaults = {
    NSGlobalDomain.AppleICUForce24HourTime = true;
    menuExtraClock.ShowSeconds = true;
    dock = {
      launchanim = false;
      tilesize = 48;
      autohide = true;
      show-recents = false;
      orientation = "bottom";
      persistent-apps = [
        {
          app = "/System/Library/CoreServices/Finder.app";
        }
        {
          app = "/System/Applications/Notes.app";
        }
        {
          app = "/System/Applications/System Settings.app";
        }
        {
          app = "/Applications/Microsoft Teams.app";
        }
        {
          app = "/Applications/1Password.app";
        }
        {
          app = "/Applications/Google Chrome.app";
        }
        {
          app = "/Applications/Ghostty.app";
        }
        {
          app = "/Applications/cmux.app";
        }
        {
          app = "${herdrApp}/Applications/Herdr.app";
        }
        {
          app = "${pkgs.zed-editor}/Applications/Zed.app";
        }
      ];
    };
    # Use CustomUserPreferences for persistent-others so we can set view
    # options. The typed `dock.persistent-others` only accepts paths.
    # arrangement: 1=name 2=date-added 3=date-modified 4=date-created 5=kind
    # displayas:   0=stack 1=folder
    # showas:      0=auto 1=fan 2=grid 3=list
    CustomUserPreferences = {
      # Keep natural scrolling on the trackpad, but reverse vertical scrolling
      # for external mouse wheels.
      "com.pilotmoon.scroll-reverser" = {
        InvertScrollingOn = true;
        ReverseX = false;
        ReverseY = true;
        ReverseTrackpad = false;
        ReverseMouse = true;
      };
      "com.apple.dock".persistent-others = [
        {
          tile-type = "directory-tile";
          tile-data = {
            file-label = "Downloads";
            file-type = 2;
            arrangement = 2;
            displayas = 0;
            showas = 1;
            file-data = {
              _CFURLString = "file:///Users/${username}/Downloads/";
              _CFURLStringType = 15;
            };
          };
        }
      ];
      # Keyboard input sources: only Finnish (drop the default Swedish layout),
      # keeping the character/emoji viewer.
      "com.apple.HIToolbox" = {
        AppleEnabledInputSources = [
          {
            InputSourceKind = "Keyboard Layout";
            "KeyboardLayout ID" = 17;
            "KeyboardLayout Name" = "Finnish";
          }
          {
            "Bundle ID" = "com.apple.CharacterPaletteIM";
            InputSourceKind = "Non Keyboard Input Method";
          }
        ];
        AppleSelectedInputSources = [
          {
            InputSourceKind = "Keyboard Layout";
            "KeyboardLayout ID" = 17;
            "KeyboardLayout Name" = "Finnish";
          }
        ];
      };
      # Rebind "Move focus to next window" (default ⌘`) to ⌘§ so the section key
      # left of 1 cycles windows of the active app (⌘⇧§ cycles backwards). This is
      # symbolic hotkey 27; parameters = (character, key code, modifier mask):
      #   167     = "§" character
      #   10      = key code of the § / ISO section key (left of 1)
      #   1048576 = ⌘ (Command) modifier
      "com.apple.symbolichotkeys".AppleSymbolicHotKeys."27" = {
        enabled = 1;
        value = {
          type = "standard";
          parameters = [
            167
            10
            1048576
          ];
        };
      };
    };
  };
}

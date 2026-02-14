# GNOME desktop settings for Linux
{ lib, ... }:
{
  dconf.settings = {
    # Disable default terminal keybinding
    "org/gnome/settings-daemon/plugins/media-keys" = {
      terminal = lib.gvariant.mkEmptyArray lib.gvariant.type.string;
    };

    # Custom keybindings list
    "org/gnome/settings-daemon/plugins/media-keys" = {
      custom-keybindings = [
        "/org/gnome/settings-daemon/plugins/media-keys/custom-keybindings/custom0/"
      ];
    };

    # Ghostty keybinding: Super+T
    "org/gnome/settings-daemon/plugins/media-keys/custom-keybindings/custom0" = {
      name = "Ghostty";
      command = "ghostty";
      binding = "<Super>t";
    };
  };
}

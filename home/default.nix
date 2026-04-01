# Home-manager configuration entry point
{
  lib,
  isDarwin ? false,
  isNixOS ? false,
  ...
}:
{
  imports =
    [
      ./packages.nix
      ./git.nix
      ./zsh.nix
      ./scripts.nix
      ./applications.nix
    ]
    ++ lib.optionals isDarwin [
      ./skhd.nix
    ]
    ++ lib.optionals (!isDarwin) [
      ./applications-linux.nix
    ]
    # GNOME config only on Pop!_OS (non-NixOS Linux)
    ++ lib.optionals (!isDarwin && !isNixOS) [
      ./gnome.nix
    ]
    # Hyprland + Waybar on NixOS
    ++ lib.optionals isNixOS [
      ./hyprland.nix
      ./waybar.nix
    ];

  home = {
    stateVersion = "25.11";
  };

  programs.home-manager.enable = true;
}

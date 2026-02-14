# Linux-specific desktop applications
{ pkgs, ... }:
{
  home.packages = with pkgs; [
    # Communication
    discord
    # telegram-desktop - using flatpak instead due to graphics driver issues

    # Gaming
    steam

    # Productivity
    obsidian

    # Additional Linux desktop tools
    # Add more as needed
  ];
}

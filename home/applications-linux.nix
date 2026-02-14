# Linux-specific desktop applications
{ pkgs, ... }:
{
  home.packages = with pkgs; [
    # Communication
    discord
    telegram-desktop

    # Gaming
    steam

    # Productivity
    obsidian

    # Additional Linux desktop tools
    # Add more as needed
  ];
}

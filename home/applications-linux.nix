# Linux-specific desktop applications
{ pkgs, ... }:
{
  home.packages = with pkgs; [
    # Communication
    discord
    telegram-desktop

    # Gaming
    steam

    # Additional Linux desktop tools
    # Add more as needed
  ];
}

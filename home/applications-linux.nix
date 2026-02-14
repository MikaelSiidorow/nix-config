# Linux-specific desktop applications
{ pkgs, ... }:
let
  # Wrap Ghostty with nixGL for OpenGL support
  ghostty-wrapped = pkgs.writeShellScriptBin "ghostty" ''
    exec ${pkgs.nixgl.nixGLIntel}/bin/nixGLIntel ${pkgs.ghostty}/bin/ghostty "$@"
  '';
in
{
  home.packages = with pkgs; [
    # Communication
    discord
    # telegram-desktop - using flatpak instead due to graphics driver issues

    # Gaming
    steam

    # Productivity
    obsidian

    # Terminal with nixGL wrapping
    ghostty-wrapped

    # Additional Linux desktop tools
    # Add more as needed
  ];
}

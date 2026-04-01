# Linux-specific desktop applications
{
  pkgs,
  config,
  lib,
  isNixOS ? false,
  ...
}:
let
  # On NixOS, graphics drivers are handled natively — no wrapping needed.
  # On non-NixOS (Pop!_OS), nixGL wraps apps to use system graphics drivers.
  wrapGraphics = pkg: if isNixOS then pkg else config.lib.nixGL.wrap pkg;
in
{
  home.packages = with pkgs; [
    # Communication
    vesktop

    # Productivity
    obsidian

    # Cloud
    azure-cli
    stripe-cli

    # Document processing
    texliveFull
    inkscape

    # Screenshot
    flameshot

    # Terminal with graphics wrapping (only needed on non-NixOS)
    (wrapGraphics ghostty)
  ];

  # Zed editor
  programs.zed-editor = {
    enable = true;
    package = wrapGraphics pkgs.zed-editor;
  };

  # Steam desktop entry — only needed on Pop!_OS where Steam is installed via apt.
  # On NixOS, Steam is managed via programs.steam in the system config.
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

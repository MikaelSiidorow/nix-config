# Desktop applications - platform-agnostic
{
  pkgs,
  isDarwin ? false,
  ...
}:
{
  programs = {
    # Ghostty: macOS uses programs.ghostty, Linux uses wrapped version
    ghostty = {
      enable = isDarwin;
    };

    vscode = {
      enable = true;
    };
  };
}

# Desktop applications - platform-agnostic
{ pkgs, ... }:
{
  programs = {
    ghostty = {
      enable = true;
    };

    vscode = {
      enable = true;
    };
  };
}

# Ghostty terminal configuration (Linux-only)
{ ... }:
{
  xdg.configFile."ghostty/config" = {
    force = true; # Allow overwriting existing config
    text = ''
      # Font configuration
      font-size = 11

      # Additional settings can be added here
    '';
  };
}

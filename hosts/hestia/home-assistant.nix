{
  inputs,
  pkgs,
  ...
}:
let
  unstablePkgs = inputs.nixpkgs-unstable.legacyPackages.${pkgs.stdenv.hostPlatform.system};
in
{
  # Home Assistant moves faster than the NixOS stable release. Replace only
  # its stable module and package while keeping the rest of Hestia on stable.
  disabledModules = [ "services/home-automation/home-assistant.nix" ];
  imports = [
    "${inputs.nixpkgs-unstable}/nixos/modules/services/home-automation/home-assistant.nix"
  ];

  services.home-assistant = {
    enable = true;
    package = unstablePkgs.home-assistant.overrideAttrs (_: {
      doInstallCheck = false;
    });

    # Integrations added through the UI still need their Python dependencies
    # declared here. MQTT is the only additional integration needed initially.
    extraComponents = [ "mqtt" ];

    config = {
      default_config = { };
      homeassistant = {
        name = "Home";
        time_zone = "Europe/Helsinki";
        unit_system = "metric";
      };
    };
  };

  networking.firewall.interfaces.enp31s0.allowedTCPPorts = [ 8123 ];
}

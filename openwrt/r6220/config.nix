{ lib, ... }:
{
  openwrt.r6220 = {
    deploy = {
      # Use the initial OpenWrt address until local DNS is configured.
      host = "192.168.1.1";
      user = "root";
      rollbackTimeout = 90;
    };

    # OpenWrt 25.12 uses apk, while Dewclaw main still deploys packages with
    # opkg. The firmware image above is the sole owner of installed packages.
    deploySteps.packages = {
      copy = lib.mkForce "";
      apply = lib.mkForce "";
    };

    # Retain every hardware-sensitive package until the official image has
    # booted and its generated UCI state has been captured. Move packages from
    # this list into uci.settings only after filling in the TODOs below.
    uci.retain = [
      "dhcp"
      "dropbear"
      "firewall"
      "luci"
      "network"
      "rpcd"
      "system"
      "ubootenv"
      "uhttpd"
      "wireless"
    ];

    uci.settings = {
      # TODO: Translate the captured `uci show network` output. In particular,
      # preserve the R6220's generated DSA port names and MAC addresses.
      # network = { ... };

      # TODO: Translate the captured `uci show wireless` output. Preserve both
      # generated radio sections, their paths, bands, and country settings.
      # Put passwords in SOPS and use: key._secret = "openwrt_r6220_wifi";
      # wireless = { ... };

      # TODO: Add firewall and DHCP only after their complete generated state
      # has been translated. Partial ownership can remove required defaults.
      # firewall = { ... };
      # dhcp = { ... };
    };

    # TODO: After adding encrypted router secrets to secrets/secrets.yaml:
    # sopsSecrets = ../../secrets/secrets.yaml;
    # users.root.hashedPasswordSecret = "openwrt_r6220_root_password_hash";
  };
}

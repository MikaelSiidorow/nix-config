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

    # Keep configuration that we have not intentionally made declarative.
    uci.retain = [
      "attendedsysupgrade"
      "dhcp"
      "dropbear"
      "firewall"
      "luci"
      "rpcd"
      "system"
      "ubihealthd"
      "uhttpd"
    ];

    uci.settings = {
      # Captured from the official OpenWrt 25.12.5 first boot. The generated
      # DUID, ULA prefix, DSA port names, and radio paths belong to this device.
      network = {
        device = [
          {
            name = "br-lan";
            type = "bridge";
            ports = [
              "lan1"
              "lan2"
              "lan3"
              "lan4"
            ];
          }
        ];

        globals.globals = {
          dhcp_default_duid = "0004e494a05858a94c929460ea3e3f47fab9";
          ula_prefix = "fd4e:b7fd:9cf8::/48";
          packet_steering = "1";
        };

        interface = {
          loopback = {
            device = "lo";
            proto = "static";
            ipaddr = [ "127.0.0.1/8" ];
          };
          lan = {
            device = "br-lan";
            proto = "static";
            ipaddr = [ "192.168.1.1/24" ];
            ip6assign = "60";
          };
          wan = {
            device = "wan";
            proto = "dhcp";
          };
          wan6 = {
            device = "wan";
            proto = "dhcpv6";
          };
        };
      };

      wireless = {
        wifi-device = {
          radio0 = {
            type = "mac80211";
            path = "1e140000.pcie/pci0000:00/0000:00:02.0/0000:02:00.0";
            band = "2g";
            channel = "1";
            htmode = "HT20";
          };
          radio1 = {
            type = "mac80211";
            path = "1e140000.pcie/pci0000:00/0000:00:00.0/0000:01:00.0";
            band = "5g";
            channel = "36";
            htmode = "VHT80";
          };
        };

        wifi-iface = {
          default_radio0 = {
            device = "radio0";
            network = "lan";
            mode = "ap";
            ssid = "OpenWrt";
            encryption = "none";
            disabled = "1";
          };
          default_radio1 = {
            device = "radio1";
            network = "lan";
            mode = "ap";
            ssid = "OpenWrt";
            encryption = "none";
            disabled = "1";
          };
        };
      };
    };

    # TODO: After adding encrypted router secrets to secrets/secrets.yaml:
    # sopsSecrets = ../../secrets/secrets.yaml;
    # users.root.hashedPasswordSecret = "openwrt_r6220_root_password_hash";
  };
}

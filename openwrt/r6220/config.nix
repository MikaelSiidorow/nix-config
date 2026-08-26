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
      "luci"
      "rpcd"
      "system"
      "ubihealthd"
      "uhttpd"
    ];

    uci.settings = {
      # Captured from the working firewall after enabling hardware flow
      # offloading. Dewclaw replaces declared UCI packages in full.
      firewall = {
        defaults = [
          {
            input = "REJECT";
            output = "ACCEPT";
            forward = "REJECT";
            synflood_protect = "1";
            flow_offloading = "1";
            flow_offloading_hw = "1";
          }
        ];

        zone = [
          {
            name = "lan";
            network = [ "lan" ];
            input = "ACCEPT";
            output = "ACCEPT";
            forward = "ACCEPT";
          }
          {
            name = "wan";
            network = [
              "wan"
              "wan6"
            ];
            input = "REJECT";
            output = "ACCEPT";
            forward = "DROP";
            masq = "1";
            mtu_fix = "1";
          }
        ];

        forwarding = [
          {
            src = "lan";
            dest = "wan";
          }
        ];

        rule = [
          {
            name = "Allow-DHCP-Renew";
            src = "wan";
            proto = "udp";
            dest_port = "68";
            target = "ACCEPT";
            family = "ipv4";
          }
          {
            name = "Allow-Ping";
            src = "wan";
            proto = "icmp";
            icmp_type = "echo-request";
            family = "ipv4";
            target = "ACCEPT";
          }
          {
            name = "Allow-IGMP";
            src = "wan";
            proto = "igmp";
            family = "ipv4";
            target = "ACCEPT";
          }
          {
            name = "Allow-DHCPv6";
            src = "wan";
            proto = "udp";
            dest_port = "546";
            family = "ipv6";
            target = "ACCEPT";
          }
          {
            name = "Allow-MLD";
            src = "wan";
            proto = "icmp";
            src_ip = "fe80::/10";
            icmp_type = [
              "130/0"
              "131/0"
              "132/0"
              "143/0"
            ];
            family = "ipv6";
            target = "ACCEPT";
          }
          {
            name = "Allow-ICMPv6-Input";
            src = "wan";
            proto = "icmp";
            icmp_type = [
              "echo-request"
              "echo-reply"
              "destination-unreachable"
              "packet-too-big"
              "time-exceeded"
              "bad-header"
              "unknown-header-type"
              "router-solicitation"
              "neighbour-solicitation"
              "router-advertisement"
              "neighbour-advertisement"
            ];
            limit = "1000/sec";
            family = "ipv6";
            target = "ACCEPT";
          }
          {
            name = "Allow-ICMPv6-Forward";
            src = "wan";
            dest = "*";
            proto = "icmp";
            icmp_type = [
              "echo-request"
              "echo-reply"
              "destination-unreachable"
              "packet-too-big"
              "time-exceeded"
              "bad-header"
              "unknown-header-type"
            ];
            limit = "1000/sec";
            family = "ipv6";
            target = "ACCEPT";
          }
          {
            name = "Allow-IPSec-ESP";
            src = "wan";
            dest = "lan";
            proto = "esp";
            target = "ACCEPT";
          }
          {
            name = "Allow-ISAKMP";
            src = "wan";
            dest = "lan";
            dest_port = "500";
            proto = "udp";
            target = "ACCEPT";
          }
        ];
      };

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

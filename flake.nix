{
  description = "Mikael's multi-platform Nix configuration";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";

    # Darwin (macOS) support
    nix-darwin = {
      url = "github:LnL7/nix-darwin/master";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # Home-manager for user environment
    home-manager = {
      url = "github:nix-community/home-manager";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # OpenGL wrapper for non-NixOS Linux
    nixgl = {
      url = "github:nix-community/nixGL";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # Homebrew integration for macOS
    nix-homebrew.url = "github:zhaofengli-wip/nix-homebrew/main";
    homebrew-core = {
      url = "github:homebrew/homebrew-core";
      flake = false;
    };
    homebrew-cask = {
      url = "github:homebrew/homebrew-cask";
      flake = false;
    };
    homebrew-cmux = {
      url = "github:manaflow-ai/homebrew-cmux";
      flake = false;
    };

    # Claude Code with automatic updates
    claude-code-nix = {
      url = "github:sadjow/claude-code-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # OpenCode with automatic updates (for NixOS/Linux)
    opencode-nix = {
      url = "github:dan-online/opencode-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # Zap application launcher
    zap = {
      url = "github:mikaelsiidorow/zap";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # CachyOS kernel for NixOS (performance-tuned, BORE scheduler)
    nix-cachyos-kernel = {
      url = "github:xddxdd/nix-cachyos-kernel/release";
      inputs.nixpkgs.follows = "nixpkgs";
    };

  };

  outputs =
    {
      self,
      nixpkgs,
      nix-darwin,
      home-manager,
      nix-homebrew,
      homebrew-core,
      homebrew-cask,
      homebrew-cmux,
      claude-code-nix,
      opencode-nix,
      zap,
      nix-cachyos-kernel,
      ...
    }@inputs:
    let
      # User configuration - change this for different users
      username = "mikaelsiidorow";

      # Custom mergiraf with tree-sitter-po grammar for PO/gettext merge support
      mergirafOverlay = final: prev: {
        mergiraf = final.callPackage ./pkgs/mergiraf-custom { };
      };

      # Helper function to create a darwin system
      mkDarwinSystem =
        {
          system,
          hostname,
          extraModules ? [ ],
        }:
        nix-darwin.lib.darwinSystem {
          inherit system;
          specialArgs = {
            inherit
              self
              inputs
              username
              ;
          };
          modules = [
            # Custom package overlays
            { nixpkgs.overlays = [ mergirafOverlay ]; }

            # Host-specific configuration
            ./hosts/${hostname}

            # Homebrew integration
            nix-homebrew.darwinModules.nix-homebrew
            {
              nix-homebrew = {
                enable = true;
                user = username;
                taps = {
                  "homebrew/homebrew-core" = homebrew-core;
                  "homebrew/homebrew-cask" = homebrew-cask;
                  "manaflow-ai/homebrew-cmux" = homebrew-cmux;
                };
                mutableTaps = false;
                autoMigrate = true;
              };
            }

            # Home-manager integration
            home-manager.darwinModules.home-manager
            {
              home-manager = {
                useGlobalPkgs = true;
                useUserPackages = true;
                backupFileExtension = "backup";
                extraSpecialArgs = {
                  inherit inputs;
                  isDarwin = true;
                };
                users.${username} = import ./home;
              };
            }
          ]
          ++ extraModules;
        };

      # Helper function to create a NixOS system (for future use)
      mkNixosSystem =
        {
          system,
          hostname,
          extraModules ? [ ],
        }:
        nixpkgs.lib.nixosSystem {
          inherit system;
          specialArgs = {
            inherit
              self
              inputs
              username
              ;
          };
          modules = [
            # Custom package overlays
            {
              nixpkgs.overlays = [
                mergirafOverlay
                nix-cachyos-kernel.overlays.pinned
              ];
            }

            # Host-specific configuration
            ./hosts/${hostname}

            # Home-manager integration
            home-manager.nixosModules.home-manager
            {
              home-manager = {
                useGlobalPkgs = true;
                useUserPackages = true;
                backupFileExtension = "backup";
                extraSpecialArgs = {
                  inherit inputs;
                  isDarwin = false;
                  isNixOS = true;
                };
                users.${username} = import ./home;
              };
            }
          ]
          ++ extraModules;
        };

      # Helper function to create a home-manager standalone config
      mkHomeConfig =
        {
          system,
          hostname,
          extraModules ? [ ],
        }:
        home-manager.lib.homeManagerConfiguration {
          pkgs = nixpkgs.legacyPackages.${system};
          extraSpecialArgs = {
            inherit
              self
              inputs
              ;
            isDarwin = false;
            isNixOS = false;
          };
          modules = [
            ./hosts/${hostname}
            ./home
            {
              home = {
                inherit username;
                homeDirectory = "/home/${username}";
              };
            }
          ]
          ++ extraModules;
        };
    in
    {
      # Darwin (macOS) configurations
      darwinConfigurations = {
        "MacBook-Air" = mkDarwinSystem {
          system = "aarch64-darwin";
          hostname = "macbook-air";
        };
      };

      # Standalone package for testing: nix build .#packages.aarch64-darwin.mergiraf
      packages =
        let
          systems = [
            "aarch64-darwin"
            "x86_64-linux"
          ];
        in
        builtins.listToAttrs (
          map (system: {
            name = system;
            value = {
              mergiraf =
                let
                  pkgs = import nixpkgs { inherit system; };
                in
                pkgs.callPackage ./pkgs/mergiraf-custom { };
            };
          }) systems
        );

      # NixOS configurations
      nixosConfigurations = {
        "nixos-laptop" = mkNixosSystem {
          system = "x86_64-linux";
          hostname = "nixos-laptop";
        };

        # VM variant for testing — run: nix build .#nixosConfigurations.nixos-laptop-vm.config.system.build.vm
        # Then: ./result/bin/run-nixos-laptop-vm
        "nixos-laptop-vm" = mkNixosSystem {
          system = "x86_64-linux";
          hostname = "nixos-laptop";
          extraModules = [
            (
              { lib, pkgs, modulesPath, ... }:
              {
                imports = [ "${modulesPath}/virtualisation/qemu-vm.nix" ];

                # Skip real hardware config (LUKS, UUIDs) — VM handles its own
                disabledModules = [ ./hosts/nixos-laptop/hardware-configuration.nix ];

                # VM settings
                virtualisation = {
                  memorySize = 4096;
                  cores = 4;
                  diskSize = 8192;
                  resolution = {
                    x = 1920;
                    y = 1080;
                  };
                  qemu.options = [
                    "-display gtk"
                  ];
                };

                # Placeholder filesystems for evaluation (overridden by VM module)
                fileSystems."/" = lib.mkForce {
                  device = "/dev/disk/by-label/nixos";
                  fsType = "ext4";
                };

                # Set a password for VM login (password: "test")
                users.users.${username}.initialHashedPassword = "$y$j9T$63FtiwzFlRRMEGBFJ/QNd.$pXlcmADD4dqHv.3/k.78sBE9oBKFp75p9HPmRfoRcT.";

                # Auto-login in VM for convenience
                services.greetd.settings.default_session = lib.mkForce {
                  command = "uwsm start hyprland-uwsm.desktop";
                  user = username;
                };
              }
            )
          ];
        };
      };

      # Home-manager standalone configurations (for non-NixOS systems)
      homeConfigurations = {
        "mikaelsiidorow@pop-os" = mkHomeConfig {
          system = "x86_64-linux";
          hostname = "pop-os";
        };
      };

      # Formatter configuration for `nix fmt`
      formatter = {
        aarch64-darwin = nixpkgs.legacyPackages.aarch64-darwin.nixfmt-tree;
        x86_64-linux = nixpkgs.legacyPackages.x86_64-linux.nixfmt-tree;
      };
    };
}

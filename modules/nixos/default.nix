# NixOS system configuration
{ pkgs, ... }:
{
  # Boot
  boot.loader.systemd-boot.enable = true;
  boot.loader.efi.canTouchEfiVariables = true;
  boot.kernelPackages = pkgs.cachyosKernels.linuxPackages-cachyos-latest;

  # Locale
  time.timeZone = "Europe/Helsinki";
  i18n.defaultLocale = "en_US.UTF-8";
  i18n.extraLocaleSettings = {
    LC_TIME = "fi_FI.UTF-8";
    LC_MONETARY = "fi_FI.UTF-8";
  };

  # Networking
  networking.networkmanager.enable = true;
  networking.nameservers = [
    "1.1.1.1"
    "8.8.8.8"
  ];

  # Bluetooth
  hardware.bluetooth = {
    enable = true;
    powerOnBoot = true;
  };
  services.blueman.enable = true;

  # Audio (PipeWire)
  services.pipewire = {
    enable = true;
    alsa.enable = true;
    alsa.support32Bit = true;
    pulse.enable = true;
  };

  # GPU (Intel Iris Xe)
  hardware.graphics = {
    enable = true;
    enable32Bit = true;
  };

  # Hyprland with UWSM (systemd integration)
  programs.hyprland = {
    enable = true;
    withUWSM = true;
  };

  # Login manager
  services.greetd = {
    enable = true;
    settings = {
      default_session = {
        command = "${pkgs.tuigreet}/bin/tuigreet --time --cmd 'uwsm start hyprland-uwsm.desktop'";
        user = "greeter";
      };
    };
  };

  # Input method (Chinese Pinyin)
  i18n.inputMethod = {
    enable = true;
    type = "fcitx5";
    fcitx5.addons = with pkgs; [
      qt6Packages.fcitx5-chinese-addons
    ];
  };

  # Power management
  services.thermald.enable = true;
  services.auto-cpufreq = {
    enable = true;
    settings = {
      battery = {
        governor = "powersave";
        turbo = "never";
      };
      charger = {
        governor = "performance";
        turbo = "auto";
      };
    };
  };

  # Docker
  virtualisation.docker.enable = true;

  # Security
  security.polkit.enable = true;
  security.rtkit.enable = true; # for PipeWire

  # Fonts
  fonts.packages = with pkgs; [
    inter
    roboto-mono
    noto-fonts
    noto-fonts-cjk-sans
    nerd-fonts.symbols-only
  ];

  # XDG portal for screen sharing, file pickers, etc.
  xdg.portal = {
    enable = true;
    extraPortals = [ pkgs.xdg-desktop-portal-gtk ];
  };

  # System packages
  environment.systemPackages = with pkgs; [
    vim
    wget
    git
    gnumake
    wl-clipboard
    brightnessctl
    playerctl
  ];

  # Enable zsh system-wide (needed for user shell)
  programs.zsh.enable = true;

  # Steam
  programs.steam = {
    enable = true;
    remotePlay.openFirewall = true;
  };

  # Allow unfree
  nixpkgs.config.allowUnfree = true;

  # Nix settings
  nix.settings = {
    experimental-features = [
      "nix-command"
      "flakes"
    ];
    # CachyOS kernel binary cache
    substituters = [ "https://attic.xuyh0120.win/lantian" ];
    trusted-public-keys = [ "lantian:EeAUQ+W+6r7EtwnmYjeVwx5kOGEBpjlBfPlzGlTNvHc=" ];
  };
}

# Nix Configuration

[![CI](https://github.com/MikaelSiidorow/nix-darwin/actions/workflows/ci.yml/badge.svg)](https://github.com/MikaelSiidorow/nix-darwin/actions/workflows/ci.yml)

Multi-platform Nix configuration supporting both macOS (nix-darwin) and Linux (home-manager standalone).

## Features

- **Cross-platform**: Same configuration for macOS and Linux
- **Declarative**: All packages and configs in version control
- **Modular**: Separate host and platform-specific configurations
- **CI/CD**: Automated validation via GitHub Actions
- **Easy updates**: Simple Makefile commands

## Supported Systems

- **macOS** (nix-darwin): MacBook Air (aarch64-darwin)
- **Linux** (home-manager): Pop!_OS (x86_64-linux)

## Quick Start

### macOS (nix-darwin)

```bash
# Clone the repository
git clone https://github.com/MikaelSiidorow/nix-darwin.git
cd nix-darwin

# Build and activate
make switch
```

### Linux (home-manager standalone)

```bash
# Install Nix package manager
curl --proto '=https' --tlsv1.2 -sSf -L https://install.determinate.systems/nix | sh -s -- install

# Enable flakes
mkdir -p ~/.config/nix
echo "experimental-features = nix-command flakes" >> ~/.config/nix/nix.conf

# Clone and activate
git clone https://github.com/MikaelSiidorow/nix-darwin.git ~/nix-darwin
cd ~/nix-darwin
nix run home-manager/master -- switch --flake .#mikaelsiidorow@pop-os

# Future updates
make switch
```

## Common Commands

```bash
make switch       # Build and activate configuration
make check        # Validate flake
make fmt          # Format all .nix files
make update       # Update flake inputs
make upgrade      # Update inputs and switch
make diff         # Preview changes
make clean        # Garbage collection
make history      # Show generations
make rollback     # Undo last change
```

See `make help` for all available commands.

## Repository Structure

```
.
├── flake.nix              # Main flake configuration
├── Makefile               # Build commands
├── hosts/                 # Host-specific configurations
│   ├── macbook-air/       # macOS host
│   └── pop-os/            # Pop!_OS host
├── modules/               # System-level modules
│   ├── darwin/            # macOS system configuration
│   ├── nixos/             # NixOS configuration (future)
│   └── common/            # Shared system configuration
└── home/                  # Home-manager configuration
    ├── default.nix        # Entry point
    ├── packages.nix       # CLI tools and packages
    ├── git.nix            # Git configuration
    ├── zsh.nix            # Zsh configuration
    ├── applications.nix   # Cross-platform apps (VSCode)
    ├── applications-linux.nix  # Linux-specific apps
    └── skhd.nix           # macOS window manager hotkeys
```

## Configuration

### Adding Packages

Edit `home/packages.nix`:

```nix
home.packages = with pkgs; [
  your-package-here
];
```

### Platform-Specific Apps

- **macOS**: Edit `modules/darwin/homebrew.nix`
- **Linux**: Edit `home/applications-linux.nix`

### Adding a New Host

1. Create `hosts/your-hostname/default.nix`
2. Add configuration to `flake.nix` outputs
3. Update `Makefile` hostname detection

## CI/CD

GitHub Actions automatically validates:

- ✅ Flake syntax (`nix flake check`)
- ✅ Code formatting (`nix fmt`)
- ✅ macOS configuration builds
- ✅ Linux configuration builds

## Future Enhancements

- [ ] Full NixOS installation support
- [ ] Secrets management (sops-nix or agenix)
- [ ] Pre-commit hooks
- [ ] Additional host configurations

## License

MIT

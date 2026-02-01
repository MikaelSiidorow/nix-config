# Claude Worktree Workflow

## Quick Start

Use the `claude-worktree` command (alias: `cwt`) to quickly set up a new git worktree for Claude work:

```bash
# Create a new worktree and open in Ghostty
claude-worktree my-feature

# Or use the short alias
cwt my-feature

# Create without opening a new window
cwt my-feature --no-open
```

This will:
1. Create a git worktree in `.claude/worktrees/my-feature` from `origin/main`
2. Copy your `.env` file to the new worktree (if it exists)
3. Auto-detect your package manager and run the appropriate install command:
   - `bun install` for bun.lockb
   - `pnpm install` for pnpm-lock.yaml
   - `yarn install` for yarn.lock
   - `npm install` for package-lock.json or package.json
   - `cargo build` for Cargo.lock
   - `go mod download` for go.mod
   - `pip install -r requirements.txt` for requirements.txt
   - `pipenv install` for Pipfile.lock
4. **Open a new Ghostty window** in the worktree directory (unless `--no-open` is specified)

### Options

- `--no-open` - Skip opening a new Ghostty window (useful for scripting or if Ghostty isn't available)

## Clean Up Worktrees

To remove a worktree when you're done:

```bash
# Remove the worktree
git worktree remove .claude/worktrees/my-feature

# Or remove and clean up even if there are changes
git worktree remove --force .claude/worktrees/my-feature
```

To list all worktrees:

```bash
git worktree list
```

## Claude Code Installation

This configuration supports Claude Code on both macOS and NixOS/Linux:

### macOS Installation

Claude Code is installed via Homebrew Cask (defined in `modules/darwin/homebrew.nix:33`):

```nix
casks = [
  # ...
  "claude-code"
];
```

Benefits:
- Automatic updates via Homebrew
- Official distribution method from Anthropic
- Native macOS integration

### NixOS/Linux Installation

Claude Code is installed via the [sadjow/claude-code-nix](https://github.com/sadjow/claude-code-nix) flake for automatic updates.

Configuration in `flake.nix`:
```nix
inputs = {
  claude-code-nix = {
    url = "github:sadjow/claude-code-nix";
    inputs.nixpkgs.follows = "nixpkgs";
  };
};
```

Usage in `home/packages.nix`:
```nix
home.packages = with pkgs; [
  # ...
]
++ lib.optionals (!isDarwin) [
  claude-code-nix.packages.${pkgs.system}.default
];
```

Benefits:
- **Hourly automatic updates** - New releases available within ~1 hour
- Uses native binary (self-contained, no runtime dependencies)
- Declarative installation
- Reproducible across machines
- Alternative variants available: Node.js and Bun versions

To use a different variant (Node.js or Bun), change `default` to `nodejs` or `bun`:
```nix
claude-code-nix.packages.${pkgs.system}.nodejs  # Node.js version
claude-code-nix.packages.${pkgs.system}.bun     # Bun version
```

### Ghostty Terminal Installation

Ghostty is installed on both platforms for the integrated workflow:

**macOS**: Installed via Homebrew Cask (`modules/darwin/homebrew.nix:24`)
```nix
casks = [
  "ghostty"
];
```

**NixOS/Linux**: Installed via nixpkgs (`home/packages.nix`)
```nix
++ lib.optionals (!isDarwin) [
  ghostty
];
```

The worktree script automatically:
- Detects if Ghostty is available
- Opens a new Ghostty window in the worktree directory
- Falls back gracefully if Ghostty isn't installed

### Development Installation

The worktree script is installed as a Nix package in `home/scripts.nix`, making it:
- Available in your PATH automatically
- Reproducible across machines
- Managed declaratively with your other packages

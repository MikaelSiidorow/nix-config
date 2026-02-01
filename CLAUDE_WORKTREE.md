# Claude Worktree Workflow

## Quick Start

Use the `claude-worktree` command (alias: `cwt`) to quickly set up a new git worktree for Claude work:

```bash
# Create a new worktree
claude-worktree my-feature

# Or use the short alias
cwt my-feature
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

### Development Installation

The worktree script is installed as a Nix package in `home/scripts.nix`, making it:
- Available in your PATH automatically
- Reproducible across machines
- Managed declaratively with your other packages

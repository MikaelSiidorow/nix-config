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

### Current Setup (macOS)

Claude Code is currently installed via Homebrew Cask (defined in `modules/darwin/homebrew.nix`):

```nix
casks = [
  # ...
  "claude-code"
];
```

This is the recommended approach for macOS as it:
- Gets automatic updates via Homebrew
- Uses the official distribution method
- Integrates well with macOS

### Alternative: Nix Package (Linux)

For NixOS or Linux systems, you can install Claude Code via nixpkgs by adding it to `home/packages.nix`:

```nix
home.packages = with pkgs; [
  # ...
  # Note: Check if claude-code is available in nixpkgs
  # If not, you may need to build from source or use the official installer
];
```

Currently, Claude Code may not be in nixpkgs, so you might need to:
1. Use the official installer from Anthropic
2. Create a custom derivation
3. Stick with Homebrew on macOS (recommended)

### Development Installation

The worktree script is installed as a Nix package in `home/scripts.nix`, making it:
- Available in your PATH automatically
- Reproducible across machines
- Managed declaratively with your other packages

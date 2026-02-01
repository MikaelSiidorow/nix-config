#!/usr/bin/env bash
# Claude worktree workflow script
# Creates a git worktree from origin/main, copies .env, and runs package install

set -euo pipefail

# Color output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

usage() {
    echo "Usage: claude-worktree <name> [--no-open]"
    echo "Creates a git worktree in .claude/worktrees/<name> from origin/main"
    echo "Copies .env file and runs appropriate package install based on lockfile"
    echo ""
    echo "Options:"
    echo "  --no-open    Don't open a new Ghostty window after creation"
    exit 1
}

log_info() {
    echo -e "${GREEN}[INFO]${NC} $1"
}

log_warn() {
    echo -e "${YELLOW}[WARN]${NC} $1"
}

log_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Parse arguments
WORKTREE_NAME=""
OPEN_GHOSTTY=true

while [[ $# -gt 0 ]]; do
    case $1 in
        --no-open)
            OPEN_GHOSTTY=false
            shift
            ;;
        -*)
            echo "Unknown option: $1"
            usage
            ;;
        *)
            if [ -z "$WORKTREE_NAME" ]; then
                WORKTREE_NAME="$1"
            else
                echo "Too many arguments"
                usage
            fi
            shift
            ;;
    esac
done

# Check if worktree name was provided
if [ -z "$WORKTREE_NAME" ]; then
    usage
fi
REPO_ROOT=$(git rev-parse --show-toplevel 2>/dev/null || true)

if [ -z "$REPO_ROOT" ]; then
    log_error "Not in a git repository"
    exit 1
fi

WORKTREE_DIR="$REPO_ROOT/.claude/worktrees/$WORKTREE_NAME"

# Check if worktree already exists
if [ -d "$WORKTREE_DIR" ]; then
    log_error "Worktree directory already exists: $WORKTREE_DIR"
    exit 1
fi

# Create .claude/worktrees directory if it doesn't exist
log_info "Creating .claude/worktrees directory..."
mkdir -p "$REPO_ROOT/.claude/worktrees"

# Fetch latest changes from origin
log_info "Fetching latest changes from origin..."
git fetch origin main || log_warn "Failed to fetch origin/main, continuing anyway..."

# Create the worktree
log_info "Creating worktree from origin/main..."
git worktree add "$WORKTREE_DIR" origin/main

# Copy .env file if it exists
if [ -f "$REPO_ROOT/.env" ]; then
    log_info "Copying .env file..."
    cp "$REPO_ROOT/.env" "$WORKTREE_DIR/"
else
    log_warn "No .env file found in repository root"
fi

# Change to worktree directory
cd "$WORKTREE_DIR"

# Detect lockfile and run appropriate install command
log_info "Detecting package manager..."

if [ -f "bun.lockb" ]; then
    log_info "Found bun.lockb, running bun install..."
    bun install
elif [ -f "pnpm-lock.yaml" ]; then
    log_info "Found pnpm-lock.yaml, running pnpm install..."
    pnpm install
elif [ -f "yarn.lock" ]; then
    log_info "Found yarn.lock, running yarn install..."
    yarn install
elif [ -f "package-lock.json" ]; then
    log_info "Found package-lock.json, running npm install..."
    npm install
elif [ -f "package.json" ]; then
    log_warn "Found package.json but no lockfile, running npm install..."
    npm install
elif [ -f "Cargo.lock" ]; then
    log_info "Found Cargo.lock, running cargo build..."
    cargo build
elif [ -f "go.mod" ]; then
    log_info "Found go.mod, running go mod download..."
    go mod download
elif [ -f "requirements.txt" ]; then
    log_info "Found requirements.txt, running pip install..."
    pip install -r requirements.txt
elif [ -f "Pipfile.lock" ]; then
    log_info "Found Pipfile.lock, running pipenv install..."
    pipenv install
else
    log_warn "No recognized package manager lockfile found"
fi

echo ""
log_info "Worktree created successfully!"
echo -e "${GREEN}Location:${NC} $WORKTREE_DIR"

# Open Ghostty window if requested and available
if [ "$OPEN_GHOSTTY" = true ]; then
    if command -v ghostty &> /dev/null; then
        log_info "Opening new Ghostty window..."
        # Detect OS for appropriate Ghostty invocation
        if [[ "$OSTYPE" == "darwin"* ]]; then
            # macOS: Use open command to launch Ghostty
            open -na Ghostty --args --working-directory="$WORKTREE_DIR"
        else
            # Linux: Launch Ghostty directly in background
            nohup ghostty --working-directory="$WORKTREE_DIR" &>/dev/null &
        fi
        echo -e "${GREEN}New Ghostty window opened${NC}"
    else
        log_warn "Ghostty not found, skipping window open"
        echo -e "${GREEN}Command to enter:${NC} cd $WORKTREE_DIR"
    fi
else
    echo -e "${GREEN}Command to enter:${NC} cd $WORKTREE_DIR"
fi

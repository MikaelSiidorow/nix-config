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
    echo "Usage: claude-worktree <name>"
    echo "Creates a git worktree in .claude/worktrees/<name> from origin/main"
    echo "Copies .env file and runs appropriate package install based on lockfile"
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

# Check arguments
if [ $# -ne 1 ]; then
    usage
fi

WORKTREE_NAME="$1"
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
echo -e "${GREEN}Command to enter:${NC} cd $WORKTREE_DIR"

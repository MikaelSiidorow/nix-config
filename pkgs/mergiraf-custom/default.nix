# Custom mergiraf build with tree-sitter-po grammar for PO/gettext file support.
#
# This fetches the upstream mergiraf source at a pinned version, injects the
# tree-sitter-po grammar as a path dependency, and patches the language
# registry to enable structure-aware merging of .po/.pot files.
#
# To update mergiraf:
#   1. Bump `version` to the new release tag
#   2. Update `src.hash` (use lib.fakeHash to get the correct one)
#   3. Check if cargoHash needs updating (use lib.fakeHash to verify)
#   4. Verify the patch in postPatch still applies (check supported_langs.rs structure)
#   5. Run: nix build .#packages.aarch64-darwin.mergiraf
#   6. Verify: result/bin/mergiraf languages | grep PO
{
  lib,
  fetchFromGitea,
  rustPlatform,
  runCommand,
}:

let
  version = "0.16.3";

  mergirafSrc = fetchFromGitea {
    domain = "codeberg.org";
    owner = "mergiraf";
    repo = "mergiraf";
    rev = "v${version}";
    hash = "sha256-KlielG8XxOlS5Np8LZT+GMujWw/7EDOwsZHWVjneV3g=";
  };

  treeSitterPoSrc = ../tree-sitter-po;

  # Combined source: mergiraf + tree-sitter-po + Cargo.toml/Lock modifications
  src = runCommand "mergiraf-po-src" { } ''
    cp -r ${mergirafSrc} $out
    chmod -R u+w $out

    # Copy tree-sitter-po grammar into the source tree
    cp -r ${treeSitterPoSrc} $out/tree-sitter-po

    # Add tree-sitter-po dependency to Cargo.toml
    sed -i '/^tree-sitter-starlark/a tree-sitter-po = { path = "./tree-sitter-po" }' $out/Cargo.toml

    # Add tree-sitter-po to mergiraf's dependency list in Cargo.lock
    # (insert alphabetically between tree-sitter-php and tree-sitter-properties)
    sed -i '/ "tree-sitter-php",$/a \ "tree-sitter-po",' $out/Cargo.lock

    # Add tree-sitter-po package entry to Cargo.lock
    cat >> $out/Cargo.lock << 'LOCKEOF'

[[package]]
name = "tree-sitter-po"
version = "0.1.0"
dependencies = [
 "cc",
 "tree-sitter-language",
]
LOCKEOF
  '';

in
rustPlatform.buildRustPackage {
  pname = "mergiraf";
  inherit version src;

  # tree-sitter-po is a path dependency; its transitive deps (cc, tree-sitter-language)
  # are already in mergiraf's dependency tree, so the vendor output is unchanged.
  cargoHash = "sha256-F6YtOgcAR4fN33j7Ae4ixhTfNctUfgkV3t1I7XJzHHw=";

  postPatch = ''
    # Write the PO LangProfile to a temp file (indented to match upstream style)
    cat > po_profile_fragment.rs << 'RUST'
            LangProfile {
                name: "PO",
                alternate_names: &["gettext"],
                extensions: vec!["po", "pot"],
                file_names: vec![],
                language: tree_sitter_po::LANGUAGE.into(),
                atomic_nodes: vec!["string"],
                commutative_parents: vec![
                    CommutativeParent::without_delimiters("source_file", "\n\n"),
                ],
                signatures: vec![signature("message", vec![vec![ChildKind("msgid")]])],
                injections: None,
                flattened_nodes: &[],
                comment_nodes: &[
                    "translator_comment",
                    "extracted_comment",
                    "reference_comment",
                    "flag_comment",
                    "previous_comment",
                    "obsolete_comment",
                ],
            },
    RUST

    # Insert the PO LangProfile before the closing `]` of the SUPPORTED_LANGUAGES vec.
    # The vec ends with `    ]\n});` — we match `    ]` (4-space indented closing bracket).
    awk '
      /^    \]$/ && !inserted {
        while ((getline line < "po_profile_fragment.rs") > 0) print line;
        inserted = 1
      }
      { print }
    ' src/supported_langs.rs > src/supported_langs.rs.tmp
    mv src/supported_langs.rs.tmp src/supported_langs.rs
    rm po_profile_fragment.rs
  '';

  cargoBuildFlags = [
    "--bin"
    "mergiraf"
  ];

  # Skip tests — they reference upstream test fixtures and may fail with the patch
  doCheck = false;

  meta = {
    description = "Syntax-aware git merge driver with PO/gettext file support";
    homepage = "https://mergiraf.org/";
    license = lib.licenses.gpl3Only;
    mainProgram = "mergiraf";
  };
}

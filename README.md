# Blue Dragon: Awakened Shadow decompilation (GER)

Nintendo DS, game code `YBUD`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`██░░░░░░░░░░░░░░░░░░` **8.81%** of the code matched · data 0.00% · 3364/11801 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3267 | 3267/3267 | 8.05% |
| Reused from other decompilations, not merged into files yet | 97 | 97/97 | 0.76% |

*Updated 2026-10-15 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py ger
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

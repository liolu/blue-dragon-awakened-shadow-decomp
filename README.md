# Blue Dragon: Awakened Shadow decompilation (GER)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/blue-dragon-awakened-shadow-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/blue-dragon-awakened-shadow-decomp) [![Data](https://bytematch.dev/liolu/blue-dragon-awakened-shadow-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/blue-dragon-awakened-shadow-decomp) [![Functions](https://bytematch.dev/liolu/blue-dragon-awakened-shadow-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/blue-dragon-awakened-shadow-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `YBUD`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`███░░░░░░░░░░░░░░░░░` **15.38%** of the code matched · data 0.00% · 4173/11801 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3659 | 3659/3659 | 10.45% |
| Reused from other decompilations, not merged into files yet | 514 | 514/514 | 4.92% |

*Updated 2026-10-21 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py ger
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

# Heroes of Mana decompilation (EU)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/heroes-of-mana-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/heroes-of-mana-decomp) [![Data](https://bytematch.dev/liolu/heroes-of-mana-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/heroes-of-mana-decomp) [![Functions](https://bytematch.dev/liolu/heroes-of-mana-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/heroes-of-mana-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `AHEP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████░░░░░░░░░░░░░░░░` **18.87%** of the code matched · data 0.24% · 4654/9265 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3886 | 3886/3886 | 14.81% |
| Reused from other decompilations, not merged into files yet | 229 | 229/229 | 1.91% |
| NitroSDK (Nintendo's system library) | 303 | 455/455 | 1.82% |
| NitroSystem (Nintendo's middleware) | 39 | 52/52 | 0.13% |
| MSL (C standard library) | 21 | 23/23 | 0.13% |
| Other libraries | 9 | 9/9 | 0.08% |

*Updated 2026-10-17 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

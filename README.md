# Heroes of Mana decompilation (EU)

Nintendo DS, game code `AHEP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`█░░░░░░░░░░░░░░░░░░░` **4.44%** of the code matched · data 0.00% · 962/9265 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| NitroSDK (Nintendo's system library) | 303 | 455/455 | 1.82% |
| Reused from other decompilations, not merged into files yet | 226 | 226/226 | 1.81% |
| Auto-matched (raw m2c output, to clean up) | 197 | 197/197 | 0.48% |
| NitroSystem (Nintendo's middleware) | 39 | 52/52 | 0.13% |
| MSL (C standard library) | 21 | 23/23 | 0.13% |
| Other libraries | 9 | 9/9 | 0.08% |

*Updated 2026-10-16 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

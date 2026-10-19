
## -profile records (.data padding) and the verify exception
Overlay functions built with mwccarm `-profile` own a `.data` record (their name, len+1 bytes, byte-aligned) that the
original linker padded to 4 bytes. `tools/profpad.py` adds `end4` (padded end, only where the ROM padding is zero) to
`build/profnames.json`; workbench delinks the record as `[start, end4)` (this links byte-identically; an unpadded
range leaves a 1-3 byte gap object that shifts everything after it). objdiff then sees 15 bytes against 16 and reports
the `.data` section at 2n/(n+m) (96.77% for 15/16). `match.py verify` (PROFILE PADDING) accepts exactly that value for
units of a profile record and nothing else: same size, same fuzzy value => every record byte equal, only the padding
missing; code sections must still be 100% and the ROM byte-identical. Pipeline: `profpad.py` -> `profhook.py build/drafts D1`
-> `profmap.py D1 D2` -> `AUTO_EXTRA_PROFILES='1.2/sp3 -profile,2.0/sp1p5 -profile' fj.py D2 --ov --max 20000` ->
`workbench.py submit-many D2` -> `commit`.

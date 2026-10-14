/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_HBlankIntr from https://github.com/Yotona/twewy libs/nitro/src/gx/gx.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern s32 func_0200955c(BOOL enabled);
s32 func_0200955c(BOOL enabled) {
    s32 prev = (*(vu16 *) 0x04000004) & 0x10;
    if (enabled) {
        (*(vu16 *) 0x04000004) |= 0x10;
    } else {
        (*(vu16 *) 0x04000004) &= ~0x10;
    }
    return prev;
}

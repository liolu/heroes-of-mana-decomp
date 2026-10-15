/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern s32 GX_HBlankIntr(BOOL enabled);

/* GX_HBlankIntr from https://github.com/Yotona/twewy libs/nitro/src/gx/gx.c (license: CC0-1.0), reused by tools/donor_match.py
 */
s32 GX_HBlankIntr(BOOL enabled) {
    s32 prev = (*(vu16 *) 0x04000004) & 0x10;
    if (enabled) {
        (*(vu16 *) 0x04000004) |= 0x10;
    } else {
        (*(vu16 *) 0x04000004) &= ~0x10;
    }
    return prev;
}

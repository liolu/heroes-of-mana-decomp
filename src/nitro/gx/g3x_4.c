/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;

/* func_02004c78 from projets/blue-dragon-awakened-shadow/src/donor/func_02004c78.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void G3X_SetFog(BOOL enable, s32 fogMode, s32 fogSlope, s32 fogOffset) {
    if (enable) {
        (*(vu16 *) 0x0400035c) = fogOffset;
        (*(vu16 *) 0x04000060) = ((*(vu16 *) 0x04000060) & ~0x3f40) | ((fogSlope << 8) | (fogMode << 6) | 0x80);
    } else {
        (*(vu16 *) 0x04000060) &= (u16) ~0x3080;
    }
}

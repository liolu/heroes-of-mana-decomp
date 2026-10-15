/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
extern u16 sIsDispOn;
extern u16 sDispMode;
extern u16 sIsDispOn;
extern u16 sDispMode;

/* func_020031e8 from projets/blue-dragon-awakened-shadow/src/donor/func_020031e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_DispOn(void) {
    sIsDispOn = 1;
    if (sDispMode != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (sDispMode << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}

/* func_02003230 from projets/blue-dragon-awakened-shadow/src/donor/func_02003230.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_SetGraphicsMode(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    sDispMode = dispMode;
    if (!sIsDispOn) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (sDispMode == 0) {
        sIsDispOn = 0;
    }
}

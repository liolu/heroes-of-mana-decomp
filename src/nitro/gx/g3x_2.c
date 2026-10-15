/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern void G3X_ResetMtxStack(void);
extern void G3X_ResetMtxStack(void);

/* func_02004abc from projets/blue-dragon-awakened-shadow/src/donor/func_02004abc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void G3X_Reset(void) {
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
    (*(vu32 *) 0x04000600) |= 0x8000;
    (*(vu16 *) 0x04000060) |= 0x2000;
    (*(vu16 *) 0x04000060) |= 0x1000;
    G3X_ResetMtxStack();
    (*(vu32 *) 0x040004a4) = 0x1f0080;
    (*(vu32 *) 0x040004a8) = 0;
    (*(vu32 *) 0x040004ac) = 0;
}

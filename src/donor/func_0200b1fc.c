/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004e24 from projets/blue-dragon-awakened-shadow/src/donor/func_02004e24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern s32 func_0200b1fc(s32 *level);
s32 func_0200b1fc(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x1f00) >> 8;
    return 0;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02065544 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
s32 func_0200b25c(s32 *in) {
    if ((*(vu32 *) 0x04000600) & 1) {
        return -1;
    }
    *in = (*(vu32 *) 0x04000600) & 2;
    return 0;
}

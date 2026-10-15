/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern s32 G3X_GetMtxStackLevelPV(s32 *level);
extern s32 G3X_GetMtxStackLevelPJ(s32 *level);

/* func_02004e24 from projets/blue-dragon-awakened-shadow/src/donor/func_02004e24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 G3X_GetMtxStackLevelPV(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x1f00) >> 8;
    return 0;
}

/* func_02004e54 from projets/blue-dragon-awakened-shadow/src/donor/func_02004e54.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 G3X_GetMtxStackLevelPJ(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x2000) >> 13;
    return 0;
}

/* func_02065544 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
s32 G3X_GetBoxTestResult(s32 *in) {
    if ((*(vu32 *) 0x04000600) & 1) {
        return -1;
    }
    *in = (*(vu32 *) 0x04000600) & 2;
    return 0;
}

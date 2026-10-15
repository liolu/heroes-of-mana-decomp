/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern void G3X_InitMtxStack(void);
extern s32 G3X_GetMtxStackLevelPV(s32 *level);
extern s32 G3X_GetMtxStackLevelPJ(s32 *level);
extern s32 G3X_GetMtxStackLevelPV(s32 *level);
extern s32 G3X_GetMtxStackLevelPJ(s32 *level);
extern void G3X_ResetMtxStack(void);

/* func_02004b50 from projets/blue-dragon-awakened-shadow/src/donor/func_02004b50.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void G3X_InitMtxStack(void) {
    s32 pvLevel, pjLevel;

    (*(vu32 *) 0x04000600) |= 0x8000;
    while (G3X_GetMtxStackLevelPV(&pvLevel)) {
    }
    while (G3X_GetMtxStackLevelPJ(&pjLevel)) {
    }
    (*(vu32 *) 0x04000440) = 3;
    (*(vu32 *) 0x04000454) = 0;
    (*(vu32 *) 0x04000440) = 0;
    if (pjLevel != 0) {
        (*(vu32 *) 0x04000448) = pjLevel;
    }
    (*(vu32 *) 0x04000454) = 0;
    (*(vu32 *) 0x04000440) = 2;
    (*(vu32 *) 0x04000448) = pvLevel;
    (*(vu32 *) 0x04000454) = 0;
}

/* func_02004be8 from projets/blue-dragon-awakened-shadow/src/donor/func_02004be8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void G3X_ResetMtxStack(void) {
    s32 pvLevel, pjLevel;

    (*(vu32 *) 0x04000600) |= 0x8000;
    while (G3X_GetMtxStackLevelPV(&pvLevel)) {
    }
    while (G3X_GetMtxStackLevelPJ(&pjLevel)) {
    }
    (*(vu32 *) 0x04000440) = 3;
    (*(vu32 *) 0x04000454) = 0;
    (*(vu32 *) 0x04000440) = 0;
    if (pjLevel != 0) {
        (*(vu32 *) 0x04000448) = pjLevel;
    }
    (*(vu32 *) 0x04000440) = 2;
    (*(vu32 *) 0x04000448) = pvLevel;
    (*(vu32 *) 0x04000454) = 0;
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0 : 3;
    u32 y : 1;
    u32 pad1 : 16;
    u32 x : 7;
    u32 pad2 : 5;
} W4;

typedef struct {
    u32 c : 1;
    u32 pad0 : 27;
    u32 b : 1;
    u32 a : 1;
    u32 pad1 : 2;
} W10;

typedef struct {
    u32 lo : 2;
    u32 pad : 30;
} W18;

typedef struct {
    u8 pad0[4];
    W4 w4;
    u8 pad1[8];
    W10 w10;
    u8 pad2[4];
    W18 w18;
    u8 pad3[0x25E - 0x1C];
    u16 w25e;
} G;

extern void panelOpenRoutine(void);
extern void SetClearShipSortieTiming(void);
extern void func_0200229c(void);
extern void animationAllP_Obj(s32);
extern void AnimationAllMap_Object(s32);
extern void FlyArmAllAnime(void);
extern void MoveScriptAlphaChgAll(void);
extern void MoveActionAllP_Obj(void);
extern void MakeHouseAndUnitInShip(void);
extern void ObjConsiderAll(void);
extern u16 WM_GetLinkLevel(void);
extern s32 CallTrsForMainLoop(void);
extern void CallOtherPersonProgramOnStandAlone(s32, s32, s32);
extern void GoAikyoEffect(void);
extern void func_ov004_020cb564(s32);
extern void func_ov004_020cb4f4(s32);
extern G *data_ov000_02051548;

void MoveUnitAndAnime(s32 a, s32 b) {
    if (a != 0 && ((s32) (*(volatile u16 *) 0x27FFFA8 & 0x8000) >> 15) == 1) {
        panelOpenRoutine();
    }
    SetClearShipSortieTiming();
    func_0200229c();
    animationAllP_Obj(1);
    AnimationAllMap_Object(1);
    FlyArmAllAnime();
    MoveScriptAlphaChgAll();
    MoveActionAllP_Obj();
    MakeHouseAndUnitInShip();
    if (data_ov000_02051548->w10.a == 0 || data_ov000_02051548->w10.b == 0) {
        ObjConsiderAll();
    }
    if (data_ov000_02051548->w10.a != 0) {
        if (WM_GetLinkLevel() == 0) {
            data_ov000_02051548->w25e = data_ov000_02051548->w25e + 1;
            if (data_ov000_02051548->w25e >= 5) {
                data_ov000_02051548->w10.c = 1;
            }
        } else {
            data_ov000_02051548->w25e = 0;
        }
    }
    if (CallTrsForMainLoop() == 0) {
        data_ov000_02051548->w10.c = 1;
    }
    if (data_ov000_02051548->w4.x != 0 && data_ov000_02051548->w4.y == 0) {
        CallOtherPersonProgramOnStandAlone(data_ov000_02051548->w4.x, data_ov000_02051548->w18.lo, 1);
        data_ov000_02051548->w4.x = 0;
    }
    GoAikyoEffect();
    func_ov004_020cb564(b);
    func_ov004_020cb4f4(b);
}

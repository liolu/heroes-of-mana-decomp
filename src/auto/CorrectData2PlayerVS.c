/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad : 14;
    u32 f14 : 1;
    u32 rest : 17;
} W4;

typedef struct {
    u32 b0 : 1;
    u32 pad : 27;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 pad2 : 2;
} W10;

typedef struct {
    u32 pad : 8;
    u32 mode : 4;
    u32 rest : 20;
} W14;

typedef struct {
    u32 pad : 10;
    u32 f10 : 1;
    u32 rest : 21;
} W1c;

typedef struct {
    u32 w0;
    W4 w4;
    u32 w8;
    u32 wc;
    W10 w10;
    W14 w14;
    u32 w18;
    W1c w1c;
    u8 pad[0x1cc - 0x20];
    s32 f1cc;
    u8 pad2[0x680 - 0x1d0];
    s32 *f680;
    s32 *f684;
    s32 f688;
} GS;

typedef struct {
    u8 pad[0x10];
    void (*fn)(void);
} Obj;

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u32 pad : 8;
    u32 bt : 8;
    u32 rest : 16;
    u8 pad2[0xf44 - 0x10];
    Obj *obj;
} HS;

extern GS *data_ov000_02051548;
extern HS data_ov003_020b54e8;

void func_ov121_020f3294(s32 a, s32 b);
void ResetRequestTRS(s32 a);
void InitTrsCommand(void);
void SetTrsObjCommand(s32 a, s32 b, s32 c, s32 d);
void VBlankIntrWaitInGame(void);
s32 func_ov121_020ece28(void);
s32 CallTrsForLoop(void);
s32 EndTransCheck(void);
void func_ov121_020f34dc(s32 a);
void ReleaseTrsData(void);
void ana_InitDisplay3D(void);
s32 checkConnectParent(void);
void SetGameConditionForParent(void);
void ChangeCamera2MyKuniLeader(void);
void SetGetObjTrsDataOne(s32 a);
void TrsAnchorCondition(void);
void convertPlane1bitToFULL(void);

s32 CorrectData2PlayerVS(void) {
    func_ov121_020f3294(0x8000, 0x40000000);
    ResetRequestTRS(0);
    ResetRequestTRS(3);
    ResetRequestTRS(4);
    if (data_ov000_02051548->w10.b28 == 0) {
        InitTrsCommand();
        SetTrsObjCommand(10, 14, 0, 0);
        VBlankIntrWaitInGame();
        SetTrsObjCommand(10, 14, 0, 0);
        while (1) {
            if (func_ov121_020ece28() == 14) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (data_ov000_02051548->w10.b0 != 0) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->w10.b29 == 0) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (data_ov000_02051548->w4.f14 != 0 && EndTransCheck() == 1) {
                break;
            }
        }
        func_ov121_020f34dc(0x8000);
        ReleaseTrsData();
        ana_InitDisplay3D();
        data_ov000_02051548->w14.mode = 0;
        data_ov000_02051548->f1cc     = 1;
    } else {
        InitTrsCommand();
        SetTrsObjCommand(10, 14, 0, 0);
        VBlankIntrWaitInGame();
        SetTrsObjCommand(10, 14, 0, 0);
        data_ov003_020b54e8.bt = 1;
        while (1) {
            if (checkConnectParent() == 0) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (func_ov121_020ece28() == 14) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->w10.b29 == 0) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (data_ov000_02051548->w4.f14 != 0) {
                break;
            }
        }
        SetGameConditionForParent();
        while (1) {
            if (checkConnectParent() == 0) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (func_ov121_020ece28() == 14) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->w10.b29 == 0) {
                data_ov003_020b54e8.obj->fn();
                return 0;
            }
            if (EndTransCheck() == 1) {
                break;
            }
        }
        func_ov121_020f34dc(0x8000);
        ana_InitDisplay3D();
        data_ov000_02051548->w14.mode = 1;
        data_ov000_02051548->f1cc     = 1;
    }
    ChangeCamera2MyKuniLeader();
    data_ov003_020b54e8.bt = 10;
    InitTrsCommand();
    SetGetObjTrsDataOne(3);
    SetGetObjTrsDataOne(4);
    if (data_ov000_02051548->w10.b28 == 0) {
        TrsAnchorCondition();
    }
    data_ov000_02051548->w1c.f10 = 0;
    if (data_ov000_02051548->f680 != 0) {
        *data_ov000_02051548->f680 = 0;
    }
    if (data_ov000_02051548->f684 != 0) {
        *data_ov000_02051548->f684 = 0;
    }
    if (data_ov000_02051548->f688 != 0) {
        convertPlane1bitToFULL();
    }
    return 1;
}

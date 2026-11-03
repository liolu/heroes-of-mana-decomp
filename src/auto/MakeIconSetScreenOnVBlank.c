/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 CheckMoveWinBGscrol(u32, u32);
extern void CloseNowInputScMode(void);
extern void DeleteWirelessIcon(void);
extern void PutF_AllUnit(void);
extern void PutIconInit(s32, s32);
extern void PutK_UNITstatus(s32);
extern void PutWirelessLevel(void);
extern void VBlankIntrWaitInGame(void);
extern void changePutModeP_Obj(void *, s32);
extern void deleteSituationGageIcon(void);
extern void deleteTouchPosIcon(void);
extern void deleteUPDOWNIcon(void);

typedef struct {
    u32 rest : 18;
    u32 idx : 8;
    u32 b : 3;
    u32 wl : 1;
    u32 a : 2;
} W10;

typedef struct {
    u32 rest : 15;
    u32 m : 5;
    u32 a : 12;
} W14;

typedef struct {
    u32 rest : 9;
    u32 sub : 8;
    u32 a : 15;
} W18;

typedef struct {
    u32 rest : 8;
    u32 f : 1;
    u32 a : 23;
} W24;

typedef struct {
    u32 rest : 3;
    u32 lv : 3;
    u32 a : 26;
} W7A8;

typedef struct {
    u32 rest : 11;
    u32 bit : 1;
    u32 a : 20;
} W1C;

typedef struct {
    u8 pad0[0x10];
    W10 w10;
    W14 w14;
    W18 w18;
    W1C w1c;
    u8 pad1[4];
    W24 w24;
    u8 pad2[0x780];
    W7A8 w7a8;
    u16 w7ac;
} G;

typedef struct {
    u8 pad[0x54];
    struct {
        u32 c : 2;
        u32 a : 30;
    } w54;
    u8 pad1[0xCC];
    struct {
        u32 c : 2;
        u32 a : 30;
    } w124;
} H;

typedef struct {
    u32 flags;
    u8 pad[4];
    struct {
        u32 rest : 23;
        u32 hid : 1;
        u32 a : 8;
    } w8;
} Ptr8;

typedef struct {
    u32 flags : 1;
    u32 restf : 31;
    u8 pad[0x10C];
} Ent;

typedef struct {
    Ptr8 *obj;
    u8 pad[0x10C];
} Ent2;

extern G *data_ov000_02051548;
extern H *data_ov000_02051550;
extern Ent data_ov003_020b0cf0[];
extern Ent2 data_ov003_020b0dd8[];

void MakeIconSetScreenOnVBlank(void) {
    u32 m;
    u32 c;
    s32 r4;
    s32 idx;
    Ptr8 *p;

    m = data_ov000_02051548->w14.m;
    if (m == 0) {
        return;
    }
    if (data_ov000_02051548->w24.f != 0 && m != 1) {
        data_ov000_02051548->w14.m = 0;
        return;
    }
    c = data_ov000_02051550->w54.c;
    if (c != 0 || (c = data_ov000_02051550->w124.c) != 0) {
        if (m != 1 && CheckMoveWinBGscrol(m, c) == 0) {
            return;
        }
    }
    m  = data_ov000_02051548->w14.m;
    r4 = data_ov000_02051548->w18.sub;
    switch (m) {
        case 1:
            DeleteWirelessIcon();
            deleteSituationGageIcon();
            deleteUPDOWNIcon();
            CloseNowInputScMode();
            data_ov000_02051548->w7ac ^= 1;
            PutIconInit(data_ov000_02051548->w7ac != 0, 0);
            if (data_ov000_02051548->w10.wl != 0) {
                data_ov000_02051548->w7a8.lv = 0;
                PutWirelessLevel();
            }
            switch (r4) {
                case 1:
                    data_ov000_02051548->w14.m = 2;
                    MakeIconSetScreenOnVBlank();
                    break;
                case 2:
                    data_ov000_02051548->w14.m = 2;
                    MakeIconSetScreenOnVBlank();
                    PutK_UNITstatus(0);
                    data_ov000_02051548->w18.sub = 2;
                    break;
            }
            data_ov000_02051548->w14.m   = 1;
            data_ov000_02051548->w1c.bit = 1;
            break;
        case 2:
            CloseNowInputScMode();
            PutF_AllUnit();
            break;
        case 3:
            CloseNowInputScMode();
            PutF_AllUnit();
            idx = data_ov000_02051548->w10.idx;
            if (data_ov003_020b0cf0[idx].flags != 0 && (p = data_ov003_020b0dd8[idx].obj) != 0 && p->w8.hid == 0) {
                changePutModeP_Obj(&data_ov003_020b0cf0[idx], 1);
                PutK_UNITstatus(0);
                data_ov000_02051548->w18.sub = 2;
            }
            break;
    }
    if (data_ov000_02051548->w14.m == 1) {
        VBlankIntrWaitInGame();
        *(u16 *) 0x04000304 = (u16) ((*(u16 *) 0x04000304 & ~0x8000) | ((data_ov000_02051548->w7ac != 0) << 15));
        deleteTouchPosIcon();
    }
    data_ov000_02051548->w14.m = 0;
}

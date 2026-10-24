#include "m2c.h"

typedef struct {
    u8 pad[0xa0];
    s32 song;
} G;

typedef struct {
    u8 pad[0x22];
    u16 f0 : 1;
    u16 f1 : 1;
    u16 f2 : 14;
} H;

typedef struct {
    u8 pad[0x858];
    u32 a0 : 8;
    u32 a1 : 8;
    u32 a2 : 16;
    u32 b0 : 17;
    u32 f17 : 1;
    u32 b18 : 4;
    u32 b22 : 2;
    u32 b24 : 8;
} K;

typedef struct {
    u8 pad[0x2c];
    u8 *p2c;
} M0;

typedef struct {
    u32 a : 13;
    u32 b : 8;
    u32 c : 8;
    u32 d : 3;
} Mw;

void BGM_Fade(s32);
void func_02003948(s32, s32);
void func_020038ac(s32);
void func_ov115_020e188c(void);
void func_ov115_020e1958(void);
s32 func_ov115_020e24b0(void);
void func_ov115_020e2718(void);
void func_ov115_020e1cd8(void);
void func_ov115_020e2358(void);
s32 func_ov115_020e78a4(void);
void func_ov115_020e5870(void);
void func_ov115_020e57e4(void);
void func_ov115_020e590c(void);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov115_020e3db0(s32, s32, s32);
void func_ov115_020e27c4(s32, s32);
s32 func_ov115_020e2a80(void);
void func_ov115_020e2868(s32, s32);
void func_ov115_020e24f8(void);
void GX_SetBankForBG(s32);
void func_02000f44(s32);
void func_ov119_020e9a60(s32);
void func_02000f78(s32);

extern G *data_0203678c;
extern H data_ov115_020e913c;
extern u16 data_ov115_020e99d8[2];
extern u16 data_ov115_020e99dc[4];
extern u8 data_ov115_020e99f0[];
extern u8 data_ov115_020e9148[];
extern K data_ov115_020e9160;
extern s32 data_ov115_020e99d4;
extern M0 *data_0203673c;

s32 func_ov115_020e1500(u32 a, u16 *p) {
    s32 song;
    s32 i;
    s32 flag;
    s32 r;
    Mw *m;

    song                   = data_0203678c->song;
    data_ov115_020e913c.f1 = 0;
    for (i = 0; i < 2; i++) {
        data_ov115_020e99d8[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        data_ov115_020e99dc[i] = 0;
    }
    if (p != 0) {
        for (i = 0; i < 2; i++) {
            data_ov115_020e99d8[i] = p[i];
        }
        for (i = 0; i < 4; i++) {
            data_ov115_020e99dc[i] = p[i + 2];
        }
    }
    flag = 0;
    if (data_0203678c->song != 0x26) {
        BGM_Fade(1);
        func_02003948(0x26, flag);
        func_020038ac(0x26);
        BGM_Fade(flag);
    }
    while (1) {
        func_ov115_020e188c();
        func_ov115_020e1958();
        if (func_ov115_020e24b0() != 1) {
            return 1;
        }
        data_ov115_020e9160.b22 = a;
        func_ov115_020e2718();
        func_ov115_020e1cd8();
        func_ov115_020e2358();
        if (func_ov115_020e78a4() == 0) {
            return 1;
        }
        func_ov115_020e5870();
        func_ov115_020e57e4();
        if (flag != 0) {
            data_ov115_020e9160.a1 = 0x40;
            func_ov115_020e590c();
            MIi_CpuCopy16(data_ov115_020e99f0, data_ov115_020e9148, 0x14);
            func_ov115_020e3db0(1, 0, 0);
        }
        func_ov115_020e27c4(-16, 3);
        data_ov115_020e9160.f17 = 1;
        r                       = func_ov115_020e2a80();
        func_ov115_020e2868(-16, 3);
        func_ov115_020e24f8();
        func_ov115_020e188c();
        GX_SetBankForBG(1);
        if (r != 1) {
            break;
        }
        MIi_CpuCopy16(data_ov115_020e9148, data_ov115_020e99f0, 0x14);
        func_02000f44(0xe);
        func_ov119_020e9a60(data_ov115_020e99d4);
        func_02000f78(0xe);
        flag = 1;
        if (data_0203678c->song != 0x26) {
            BGM_Fade(1);
            func_02003948(0x26, 0);
            func_020038ac(0x26);
            BGM_Fade(0);
        }
    }
    if (data_0203678c->song != song) {
        BGM_Fade(1);
        func_02003948(song, 0);
        func_020038ac(song);
        BGM_Fade(0);
    }
    if (data_ov115_020e913c.f1 != 0) {
        m    = (Mw *) (data_0203673c->p2c + 0x1000 + 0x8c);
        m->c = m->b;
    }
    return 0;
}

#include "m2c.h"

typedef struct Ent {
    u32 lo : 8;
    u32 hi : 24;
    u16 h24;
    u8 pad[0x12];
} Ent;
typedef struct S {
    u8 pad0[0x20];
    Ent e[8];
    u8 padE[0x10];
    s32 cur;
    u8 pad1[0x4f8 - 0xf4];
    u16 sav;
    u8 pad2[2];
} S;
typedef struct A {
    u16 n;
    u16 pad;
    S *p;
} A;
typedef struct G2 {
    S *s;
    u8 pad[0xc];
    s32 flag;
} G2;
typedef struct W {
    u8 pad[0x34];
    u32 lo : 19;
    u32 b19 : 1;
    u32 rest : 12;
} W;

extern A data_ov119_020f2750;
extern G2 data_ov119_020f2f68;
extern s32 data_ov119_020f1e98[];
extern s32 data_ov119_020f1e60[];
extern W data_ov119_020f2258;
extern u8 *data_0203678c;

u16 func_ov119_020ede90(s32, s32);
void func_ov119_020f09e4(s32);
void func_ov119_020f05b0(void);
void func_ov119_020f12a0(void);
void VBlankIntrWaitInGame(void);
void func_ov119_020eb238(void);
void func_ov119_020e9f30(s32, s32, s32);
void func_ov119_020eb2f0(void);
s32 func_02004510(u32);
void func_02003948(s32, s32);
void func_020038ac(s32);

void func_ov119_020f0b28(void) {
    s32 i;
    s32 j;
    u32 min;
    S *s;

    for (i = 0; i < data_ov119_020f2750.n; i++) {
        data_ov119_020f2f68.s = data_ov119_020f2750.p + i;
        min                   = 0xf;
        for (j = 0; j < 8; j++) {
            u32 v = data_ov119_020f2f68.s->e[j].lo;
            if (min >= v) {
                data_ov119_020f2f68.s->cur = j;
                min                        = v;
            }
        }
        if (min == 0xf) {
            data_ov119_020f2f68.s->e[0].h24 = func_ov119_020ede90(i, 1);
            data_ov119_020f2f68.s->e[0].lo  = 7;
            data_ov119_020f2f68.s->cur      = 0;
        }
        s      = data_ov119_020f2f68.s;
        s->sav = s->e[s->cur].h24;
        func_ov119_020f09e4(0xff);
        s                = data_ov119_020f2f68.s;
        s->e[s->cur].h24 = s->sav;
    }
    func_ov119_020f05b0();
    if (data_ov119_020f2f68.flag != 0) {
        func_ov119_020f12a0();
        VBlankIntrWaitInGame();
        func_ov119_020eb238();
        func_ov119_020e9f30(0, data_ov119_020f1e98[5] + data_ov119_020f1e60[5],
                            data_ov119_020f1e98[6] + data_ov119_020f1e60[6]);
        VBlankIntrWaitInGame();
        func_ov119_020eb2f0();
        func_ov119_020e9f30(1, data_ov119_020f1e98[14] + data_ov119_020f1e60[12],
                            data_ov119_020f1e98[15] + data_ov119_020f1e60[13]);
        data_ov119_020f2f68.flag = 0;
    }
    if (data_ov119_020f2258.b19 == 0) {
        return;
    }
    if (func_02004510(*(u32 *) (data_0203678c + 0xa0)) != 0) {
        return;
    }
    func_02003948(*(s32 *) (data_0203678c + 0xa0), 0);
    func_020038ac(*(s32 *) (data_0203678c + 0xa0));
}

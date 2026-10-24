#include "m2c.h"
typedef struct Rec {
    u32 a : 2;
    u32 c : 10;
    u32 b : 10;
    u32 a2 : 10;
    u32 t;
    u32 pad8;
    u32 d : 14;
    u32 e : 14;
    u32 pe : 4;
    u32 f : 14;
    u32 g : 8;
    u32 pg : 10;
} Rec;
typedef struct G {
    u8 pad[0x16];
    s16 h16;
} G;
extern G data_ov120_020f4210;
extern u32 data_ov120_020f46dc[];
Rec *func_ov120_020ee13c(s32);
u8 *func_ov120_020ee178(s32);
void func_ov120_020ee350(s32, s32, u32, u32, u32, s32);
void func_ov120_020ed39c(s32, s32, s32, s32, s32, s32, s32);
void func_ov120_020ee414(s32, s32, s32, s32, s32);

void func_ov120_020ee8ec(s32 x, s32 fl) {
    Rec *r;
    u8 *p;
    r                      = func_ov120_020ee13c(data_ov120_020f4210.h16);
    p                      = func_ov120_020ee178(data_ov120_020f4210.h16);
    data_ov120_020f46dc[3] = 0x5C8;
    func_ov120_020ee350(0x10, x + 6, r->t / 3600 / 60, r->t / 3600 % 60, r->t / 60 % 60, fl);
    func_ov120_020ed39c(r->a2, 0x15, x + 9, 3, 1, fl, 0x380);
    func_ov120_020ed39c(r->b, 0x15, x + 0xC, 3, 1, fl, 0x380);
    func_ov120_020ed39c(r->c, 0x15, x + 0xF, 3, 1, fl, 0x380);
    func_ov120_020ed39c(r->e, 0x14, x + 0x12, 4, 1, fl, 0x380);
    func_ov120_020ed39c(r->d, 0x14, x + 0x15, 4, 1, fl, 0x380);
    func_ov120_020ed39c(r->g, 0x15, x + 0x18, 3, 1, fl, 0x380);
    func_ov120_020ed39c(r->f, 0x14, x + 0x1B, 4, 1, fl, 0x380);
    func_ov120_020ee414(0x19, x + 6, p[0], 0, fl);
    func_ov120_020ee414(0x19, x + 9, p[4], 0, fl);
    func_ov120_020ee414(0x19, x + 0xC, p[1], 0, fl);
    func_ov120_020ee414(0x19, x + 0xF, p[6], 0, fl);
    func_ov120_020ee414(0x19, x + 0x12, p[5], 0, fl);
    func_ov120_020ee414(0x19, x + 0x15, p[2], 0, fl);
    func_ov120_020ee414(0x19, x + 0x18, p[3], 0, fl);
    func_ov120_020ee414(0x19, x + 0x1B, p[8], 0, fl);
}

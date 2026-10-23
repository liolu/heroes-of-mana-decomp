/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 p0 : 2;
    u32 b2 : 1;
    u32 p1 : 15;
    u32 b18 : 1;
    u32 b19 : 1;
    u32 p2 : 12;
} F4;
typedef struct {
    u32 p0 : 29;
    u32 b29 : 1;
    u32 p1 : 2;
} F10;
typedef struct {
    u32 p0 : 12;
    u32 b12 : 1;
    u32 p1 : 19;
} FD0;
typedef struct {
    u32 p0 : 16;
    u32 b16 : 1;
    u32 p1 : 15;
} FD4;
typedef struct {
    s32 s0;
    F4 f4;
    u8 pad0[8];
    F10 f10;
    u8 pad1[0xd0 - 0x14];
    FD0 fd0;
    FD4 fd4;
    u8 pad2[4];
    u32 sdc;
    u8 pad3[0x1a0 - 0xe0];
    u32 s1a0;
    s32 s1a4;
} A;
typedef struct {
    u8 pad[0xaf4];
    u32 s_af4;
    u32 s_af8;
} B;
typedef struct {
    u16 h0;
    A *a;
    B *b;
} H;
typedef struct {
    u32 lv : 3;
    u32 pad : 29;
} L;
typedef struct {
    u8 pad[4];
    u32 s4;
} P;
typedef struct {
    u8 pad[0x2c];
    u8 *p2c;
    P *p30;
} G;

extern H data_ov000_02051544;
extern G *data_0203673c;
extern u8 *data_0203678c;

s32 CallTrsForLoopVBlank(void);
u32 _u32_div_f(u32, u32);
void func_0200fb08(void);
M2C_UNK VBlankIntrWait();
void NNS_SndMain(void);

void VBlankIntrWaitInGame(void) {
    u32 q, x, n;

    data_ov000_02051544.b->s_af4 = data_ov000_02051544.h0;
    data_ov000_02051544.h0       = 0;
    if (data_ov000_02051544.a != NULL) {
        data_ov000_02051544.a->s1a0 += data_ov000_02051544.b->s_af4;
        if (data_ov000_02051544.a->s1a0 >= 0x14996c4) {
            data_ov000_02051544.a->s1a0 = 0x14996c4;
        }
        if (data_ov000_02051544.a->f4.b2) {
            data_ov000_02051544.a->s0 = CallTrsForLoopVBlank();
        }
        if (!data_ov000_02051544.a->f10.b29) {
            if (*(u16 *) (data_ov000_02051544.b->pad + 0x148 - 0xaf4 + 0xaf4 - 0) & 2) {
                data_ov000_02051544.b->s_af4 <<= 1;
            }
        }
        if (!data_ov000_02051544.a->f4.b18) {
            B *b     = data_ov000_02051544.b;
            x        = b->s_af8 + b->s_af4;
            n        = ((L *) (data_0203673c->p2c + 0x1000 + 0x8c))->lv + 1;
            q        = (x * n) / 3;
            b->s_af8 = x - _u32_div_f(q * 3, n);
            data_ov000_02051544.a->s1a4 += q;
            if (data_ov000_02051544.a->fd0.b12) {
                if (data_0203673c->p30 != NULL) {
                    data_0203673c->p30->s4 += q;
                    if (data_0203673c->p30->s4 >= 0x14996c4) {
                        data_0203673c->p30->s4 = 0x14996c4;
                    }
                }
            }
            if (data_ov000_02051544.a->fd4.b16) {
                data_ov000_02051544.a->sdc += q;
                if (data_ov000_02051544.a->sdc >= 0x14996c4) {
                    data_ov000_02051544.a->sdc = 0x14996c4;
                }
            }
        }
        if (data_ov000_02051544.a->f4.b19) {
            func_0200fb08();
        } else {
            VBlankIntrWait();
        }
    } else {
        VBlankIntrWait();
    }
    NNS_SndMain();
    *(s32 *) (data_0203678c + 0xa8) = 0;
}

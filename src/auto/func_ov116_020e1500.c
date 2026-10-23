#include "m2c.h"
typedef struct Rec {
    u32 w0;
    u8 pad[0xc];
    u32 w10;
} Rec;
typedef struct G {
    u8 pad[0x2c];
    u8 *recs;
} G;
extern u8 data_ov116_020e7194[];
extern G *data_0203673c;
extern void func_ov116_020e16dc(void);
extern void func_ov116_020e17a8(void);
extern s32 func_ov116_020e2088(void);
extern void MIi_CpuCopy16(void *, void *, s32);
extern void func_ov116_020e1ea4(void);
extern void func_ov116_020e1b30(void);
extern void func_ov116_020e3b10(void);
extern void func_ov116_020e3ad4(void);
extern void func_ov116_020e21d4(s32, s32);
extern void func_ov116_020e23d4(void);
extern void func_ov116_020e2278(s32, s32);
extern void func_ov116_020e2134(void);
extern void GX_SetBankForBG(s32);
typedef struct In {
    u8 pad[0x10];
    u32 pad2 : 22;
    u32 idx : 8;
    u32 rest : 2;
} In;
void func_ov116_020e1500(In *in) {
    u8 *base;
    Rec *r;
    s32 off;
    func_ov116_020e16dc();
    func_ov116_020e17a8();
    if (func_ov116_020e2088() != 1) {
        return;
    }
    MIi_CpuCopy16(in, data_ov116_020e7194, 0x14);
    func_ov116_020e1ea4();
    off  = in->idx * 0x14;
    base = data_0203673c->recs;
    r    = (Rec *) (base + off);
    MIi_CpuCopy16(data_ov116_020e7194, r, 0x14);
    *(u32 *) (base + off) = (*(u32 *) (base + off) & ~1) | 3;
    r->w10 &= ~0x40000000;
    func_ov116_020e1b30();
    func_ov116_020e3b10();
    func_ov116_020e3ad4();
    func_ov116_020e21d4(-16, 3);
    func_ov116_020e23d4();
    func_ov116_020e2278(-16, 3);
    func_ov116_020e2134();
    func_ov116_020e16dc();
    GX_SetBankForBG(1);
}

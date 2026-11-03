/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 f0;
    s32 f4;
    s8 b8;
    s8 b9;
    s8 ba;
    s8 bb;
    u32 b0 : 1;
    u32 b1 : 1;
    u32 pad2 : 2;
    u32 e4 : 1;
    u32 c5 : 5;
    u32 rnd : 10;
    u32 pad20 : 1;
    u32 q : 1;
    u32 k : 2;
    u32 rest : 8;
    u8 reg[0x54];
    s32 f64;
    u8 pad68[8];
    s16 f70;
    s16 pad72;
    s32 f74;
} Icon;
void AddIconPutSt(Icon *, s32);
void AddObjForCom(void *, u16, u16, s32, s32, u16);
s32 GetRnd(void);
void MIi_CpuClear16(s32, void *, s32);
Icon *func_0200ed38(s32, s32, s32);

Icon *SetStatusIcon(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j) {
    Icon *o;
    s32 m;
    s32 r;

    o = func_0200ed38(0, -1, 0x80);
    MIi_CpuClear16(0, o, 0x80);
    o->f0  = c;
    o->f4  = d;
    o->b8  = 0x10;
    o->b9  = 0x10;
    o->ba  = 0;
    o->bb  = 0;
    o->f70 = a;
    o->e4  = j;
    o->k   = 1;
    o->q   = 1;
    o->f74 = i;
    AddObjForCom(o->reg, (u16) e, (u16) b, o->f74, f, o->e4);
    o->b1 = 1;
    o->b0 = o->b1;
    o->c5 = g;
    r     = GetRnd();
    m     = 0xFFF003FF;
    {
        u32 sh                    = (u32) (r << 24);
        u32 fld                   = *(u32 *) ((u8 *) o + 0xC) & m;
        *(u32 *) ((u8 *) o + 0xC) = fld | (sh >> 14);
    }
    o->f64 = m >> 20;
    AddIconPutSt(o, h);
    return o;
}

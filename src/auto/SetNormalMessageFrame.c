/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s16 x;
    s16 y;
    s16 w;
    s16 h;
} Rect;
typedef struct {
    u8 p0[0x44];
    u32 q0 : 7;
    u32 b8 : 1;
    u32 b7 : 1;
    u32 q1 : 23;
    u8 p1[0x54 - 0x48];
    u8 sub[0x68];
    s32 f_bc;
    s16 f_c0;
} W;
typedef struct {
    u32 st : 2;
    u32 rest : 30;
} Sub;
extern u8 *data_ov000_02051550;
extern s32 MesWindowScrollIn(s32);
extern void MessageRectChange(Rect *, s32);
extern void MesFrameChrLoad(s32);
extern void putOneSomeFrame(s32, s32, s32, s32, s32);

s32 SetNormalMessageFrame(s32 a, s32 b) {
    Rect r;
    s32 ob;
    s32 oa;
    if (a == 0) {
        *(volatile s32 *) 0x04000014 = 0;
    } else {
        *(volatile s32 *) 0x04001014 = 0;
    }
    oa = a * 0xd0;
    if (((W *) (data_ov000_02051550 + oa))->b8 != 0) {
        return 1;
    }
    ob = b * 0x1c;
    if (((Sub *) (((W *) (data_ov000_02051550 + oa))->sub + ob))->st != 0) {
        return MesWindowScrollIn(a) != 0 ? 1 : 0;
    }
    r.x = 0;
    r.y = 0;
    r.w = 0x20;
    r.h = 8;
    MessageRectChange(&r, a);
    MesFrameChrLoad(a);
    if (((W *) (data_ov000_02051550 + oa))->b7 == 0) {
        putOneSomeFrame(0, ((W *) (data_ov000_02051550 + oa))->f_bc, 0, a, 1);
    } else {
        putOneSomeFrame(2, ((W *) (data_ov000_02051550 + oa))->f_bc, 0, a, 1);
    }
    {
        Sub *s = (Sub *) (((W *) (data_ov000_02051550 + oa))->sub + ob);
        s->st  = 1;
    }
    ((W *) (data_ov000_02051550 + oa))->f_c0 = 10;
    return 0;
}

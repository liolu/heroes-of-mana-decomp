/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x338];
    u16 : 5;
    u16 flag : 1;
} BaseA;

typedef struct {
    u8 pad[0x4C];
    u32 : 11;
    u32 sel : 1;
} ElemA;

s32 GetOneLineDot(s32, s32, s32);                   /* extern */
extern void *data_ov000_02051550;

void SetCenteringStr(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *base;
    s32 dot;
    s32 bit;
    s32 idx;
    s32 x;
    s32 v;

    base = data_ov000_02051550;
    if (((BaseA *) base)->flag) {
        idx = arg3 * 0xD0;
        dot = GetOneLineDot(arg1, arg2, arg0);
        idx = (s32) ((u8 *) base + idx);
        x = (s32) M2C_FIELD(idx + ((ElemA *) idx)->sel * 0x1C, s16 *, 0x6C) - (s32) M2C_FIELD(base, u16 *, 0x344);
        v = (x * 8) / 2 - dot / 2;
        M2C_FIELD(base, u16 *, 0x344) = (u16) (v / 8);
        M2C_FIELD(data_ov000_02051550, u16 *, 0x340) = (u16) (v & 7);
    }
}




#include "m2c.h"

extern void func_ov112_020e4944(s32, s32, u32, s32, s32, void *);
extern void func_ov112_020e9abc();
extern u32 data_ov112_020eca1c[];
extern s32 data_ov112_020ec588[];
extern u8 data_ov112_020ed634[];
extern u8 data_ov112_020ed754[];

void func_ov112_020e59bc(s32 arg0, s32 arg1, s32 arg2) {
    s32 idx;
    s32 k;
    u32 v;
    idx = M2C_FIELD(data_ov112_020eca1c, u8 *, 0xD52) + arg0;
    v   = data_ov112_020eca1c[idx] >> 16;
    if (v == 0xFFFF) {
        return;
    }
    k                      = idx % 6;
    data_ov112_020ec588[2] = k * 32 + 0x420;
    if (v == data_ov112_020ed754[k]) {
        return;
    }
    data_ov112_020ec588[2] = k * 32 + 0x420;
    data_ov112_020ed754[k] = v;
    idx                    = M2C_FIELD(data_ov112_020eca1c, u8 *, 0xD52) + arg0;
    func_ov112_020e4944(0, 0, v, 0, arg2, data_ov112_020ed634 + (idx % 6) * 0x30);
    if ((u32) (arg1 - 1) > 1U) {
        return;
    }
    func_ov112_020e9abc();
}

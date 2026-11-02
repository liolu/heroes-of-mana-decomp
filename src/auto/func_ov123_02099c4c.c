#include "m2c.h"

void MI_CpuFill8(s32, s32, s32);
void func_ov123_02099bd0(s32);
void func_ov123_02077534(s32);
extern u8 *data_ov123_020e172c;

void func_ov123_02099c4c(u8 *p, s32 b, s32 c, s32 d) {
    if (data_ov123_020e172c != NULL) {
        return;
    }
    MI_CpuFill8((s32) p, 0, 0xc);
    *(u16 *) (p + 0x8)  = (u16) b;
    *(u16 *) (p + 0xa)  = 1;
    *(u16 *) (p + 0x4)  = 1;
    *(u16 *) (p + 0x6)  = 0;
    data_ov123_020e172c = p;
    func_ov123_02099bd0(0);
    func_ov123_02077534(d);
}

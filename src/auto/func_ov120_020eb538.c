#include "m2c.h"
extern u32 data_ov120_020f46dc[];

void func_ov120_020ecab0(s32, s32, s32, s32, s32, s32);
void func_ov120_020ec734(s32, s32, s32, s32, s32, s32);
void func_ov120_020eb20c(void);

void func_ov120_020eb538(void) {
    data_ov120_020f46dc[0xa14 / 4] &= ~0x800000;
    data_ov120_020f46dc[1] = 1;
    func_ov120_020ecab0(2, 8, 0x1c, 6, 0, 1);
    func_ov120_020ec734(2, 8, 0x3d, 0, 1, 0);
    for (;;) {
        func_ov120_020eb20c();
    }
}

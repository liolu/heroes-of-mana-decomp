#include "m2c.h"

u16 func_ov111_020e5d98(s32);
s32 func_ov111_020e5d60(s32);
void func_ov111_020e5d24(s32, s16);
extern u8 data_02030644;
extern void *data_ov111_020f1bd8;

void func_ov111_020e6710(void) {
    s32 r4;

    r4 = func_ov111_020e5d98(3);
    func_ov111_020e5d24(func_ov111_020e5d60(1), *(s16 *) (&data_02030644 + ((s32) (u16) r4 >> 4) * 4));
    *(u16 *) ((u8 *) data_ov111_020f1bd8 + 0x50C) += 5;
}

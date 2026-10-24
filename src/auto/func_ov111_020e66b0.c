#include "m2c.h"

void func_ov111_020e5d24(s32, s16);
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);
extern s16 data_02030644[];
extern u8 *data_ov111_020f1bd8;

void func_ov111_020e66b0(void) {
    s32 t = func_ov111_020e5d98(3);
    func_ov111_020e5d24(func_ov111_020e5d60(1), data_02030644[(((u16) t) >> 4) * 2 + 1]);
    *(u16 *) (data_ov111_020f1bd8 + 0x50C) += 5;
}

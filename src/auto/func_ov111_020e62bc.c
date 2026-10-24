#include "m2c.h"
extern s32 func_0202d478(s32, s32);
extern void func_ov111_020e5d24(s32, s32);
extern s32 func_ov111_020e5d60(s32);
extern s32 func_ov111_020e5d98(s32);
extern u8 *data_ov111_020f1bd8;
void func_ov111_020e62bc(void) {
    s16 t = (s16) func_ov111_020e5d98(3);
    if (t != 0) {
        s32 r4 = func_ov111_020e5d60(1);
        func_ov111_020e5d24(r4, func_0202d478(func_ov111_020e5d98(1), t));
    }
    *(u16 *) (data_ov111_020f1bd8 + 0x50C) += 5;
}

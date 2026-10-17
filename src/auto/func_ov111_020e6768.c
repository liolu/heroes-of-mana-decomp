#include "m2c.h"

M2C_UNK func_ov111_020e34b8(s32, void *);           /* extern */
M2C_UNK func_ov111_020e3ac8(s32, void *);           /* extern */
s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov111_020ec3f4;
extern void *data_ov111_020f1bd8;

void func_ov111_020e6768(void) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r5 = func_ov111_020e5d98(1);
    temp_r6 = func_ov111_020e5d98(5);
    temp_r4 = temp_r5 * 0x50;
    func_ov111_020e3ac8(func_ov111_020e5d98(3), (u8 *) &data_ov111_020ec3f4 + temp_r4);
    if (temp_r6 != -1) {
        func_ov111_020e34b8(temp_r6, (u8 *) &data_ov111_020ec3f4 + temp_r4);
    }
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 7);
}

#include "m2c.h"

M2C_UNK func_ov111_020e1b48(s32, void *, M2C_UNK);  /* extern */
extern M2C_UNK data_ov111_020ec3f4;

void func_ov111_020e1be0(void) {
    s32 temp_r0;
    s32 var_r7;
    void *temp_r8;
    s32 temp_r9;
    s32 var_r10;
    s32 sp0;
    M2C_UNK *var_r11;

    var_r11 = &data_ov111_020ec3f4;
    sp0     = 0;
    do {
        if (((u32) (M2C_FIELD(var_r11, s32 *, 0) << 0x1E) >> 0x1F) != 0) {
            temp_r8 = M2C_FIELD(var_r11, void **, 0x4C);
            var_r7  = 0;
            if ((s32) M2C_FIELD(temp_r8, s32 *, 0x38) > 0) {
                var_r10 = 0;
                do {
                    temp_r9 = M2C_FIELD(temp_r8, s32 *, 0x3C) + var_r10;
                    func_ov111_020e1b48(temp_r9 + 0x28, temp_r8, 1);
                    func_ov111_020e1b48(temp_r9 + 0x34, temp_r8, 1);
                    func_ov111_020e1b48(temp_r9 + 0x40, temp_r8, 1);
                    var_r10 += 0x70;
                    var_r7 += 1;
                } while (var_r7 < (s32) M2C_FIELD(temp_r8, s32 *, 0x38));
            }
        }
        var_r11 = (void *) ((u8 *) (u8 *) var_r11 + 0x50);
        temp_r0 = sp0 + 1;
        sp0     = temp_r0;
    } while (temp_r0 < 8);
}

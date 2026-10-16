#include "m2c.h"

M2C_UNK func_ov117_020e7e78();                      /* extern */
M2C_UNK func_ov117_020e7ecc();                      /* extern */
M2C_UNK func_ov117_020e81a0();                      /* extern */
M2C_UNK func_ov117_020e85ec();                      /* extern */
M2C_UNK func_ov117_020e8828();                      /* extern */
M2C_UNK func_ov117_020e92e4();                      /* extern */
M2C_UNK func_ov117_020e958c();                      /* extern */
extern M2C_UNK data_ov117_020f1d18;
extern M2C_UNK data_ov117_020f237c;
extern M2C_UNK data_ov117_020f23e0;
extern M2C_UNK data_ov117_020f3d94;

void func_ov117_020e9d74(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xAB0) << 8) >> 0x10;
    switch (temp_r0) {                              /* irregular */
        case 0x7:
            func_ov117_020e7e78();
            return;
        case 0x1:
            func_ov117_020e85ec();
            return;
        case 0x2:
            func_ov117_020e81a0();
            return;
        case 0x4:
            func_ov117_020e7ecc();
            return;
        case 0x10:
        case 0x8:
            if (M2C_FIELD(&data_ov117_020f237c, s16 *, 0x60) == -1) {
                func_ov117_020e7e78();
                return;
            }
            func_ov117_020e8828();
            return;
        case 0x40:
        case 0x20:
            if (M2C_FIELD(&data_ov117_020f1d18, s16 *, 0x60) == -1) {
                func_ov117_020e7e78();
                return;
            }
            func_ov117_020e92e4();
            return;
        case 0x100:
        case 0x80:
            if (M2C_FIELD(&data_ov117_020f3d94, s16 *, 0x20) == -1) {
                func_ov117_020e7e78();
                return;
            }
            func_ov117_020e958c();
            return;
            return;
    }
}

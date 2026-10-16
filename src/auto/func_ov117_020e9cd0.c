#include "m2c.h"

M2C_UNK func_ov117_020e8758();                      /* extern */
M2C_UNK func_ov117_020e8cd4();                      /* extern */
M2C_UNK func_ov117_020e9468();                      /* extern */
M2C_UNK func_ov117_020e9bac();                      /* extern */
extern M2C_UNK data_ov117_020f23e0;

void func_ov117_020e9cd0(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xAB0) << 8) >> 0x10;
    switch (temp_r0) {                              /* irregular */
        case 0x1:
        case 0x2:
        case 0x4:
        case 0x7:
            func_ov117_020e8758();
            return;
        case 0x10:
        case 0x8:
            func_ov117_020e8cd4();
            return;
        case 0x40:
        case 0x20:
            func_ov117_020e9468();
            return;
        case 0x100:
        case 0x80:
            func_ov117_020e9bac();
            return;
            return;
    }
}

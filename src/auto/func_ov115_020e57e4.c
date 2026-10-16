#include "m2c.h"

M2C_UNK func_ov115_020e475c();                      /* extern */
M2C_UNK func_ov115_020e4b50();                      /* extern */
M2C_UNK func_ov115_020e4fc0();                      /* extern */
M2C_UNK func_ov115_020e50dc();                      /* extern */
extern M2C_UNK data_ov115_020e9160;

void func_ov115_020e57e4(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov115_020e9160, s32 *, 0x858) << 0x10) >> 0x18;
    switch (temp_r0) {                              /* irregular */
        case 0x1:
        case 0x2:
        /* fallthrough */
        case 0x80:
        case 0x20:
            func_ov115_020e475c();
            return;
        case 0x4:
            func_ov115_020e50dc();
            return;
        case 0x18:
            func_ov115_020e4b50();
            return;
        case 0x40:
            func_ov115_020e4fc0();
            return;
    }
}

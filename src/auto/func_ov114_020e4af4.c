#include "m2c.h"

M2C_UNK func_ov114_020e43e8();                      /* extern */
M2C_UNK func_ov114_020e4674();                      /* extern */
extern M2C_UNK data_ov114_020e6148;

void func_ov114_020e4af4(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov114_020e6148, s32 *, 0x514) << 0xB) >> 0x18;
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_ov114_020e43e8();
            return;
        case 2:
            func_ov114_020e43e8();
            return;
        case 4:
            func_ov114_020e4674();
            return;
    }
}

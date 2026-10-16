#include "m2c.h"

M2C_UNK func_ov113_020e2cc8();                      /* extern */
M2C_UNK func_ov113_020e2dfc();                      /* extern */
extern M2C_UNK data_ov113_020e4944;

void func_ov113_020e2ea0(void) {
    u32 temp_r0;

    temp_r0 = (u32) M2C_FIELD(&data_ov113_020e4944, u32 *, 0x410) >> 0x10;
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_ov113_020e2cc8();
            return;
        case 2:
            func_ov113_020e2dfc();
            return;
    }
}

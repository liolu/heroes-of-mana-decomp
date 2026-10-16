#include "m2c.h"

M2C_UNK func_ov114_020e465c();                      /* extern */
M2C_UNK func_ov114_020e468c();                      /* extern */
M2C_UNK func_ov114_020e4724();                      /* extern */
extern M2C_UNK data_ov114_020e6148;

void func_ov114_020e4aa8(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov114_020e6148, s32 *, 0x514) << 0xB) >> 0x18;
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_ov114_020e4724();
            return;
        case 2:
            func_ov114_020e468c();
            return;
        case 4:
            func_ov114_020e465c();
            return;
    }
}

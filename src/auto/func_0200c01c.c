#include "m2c.h"

s32 func_0200a4c8();                                /* extern */
extern M2C_UNK data_0203859c;

void func_0200c01c(void) {
    s32 temp_r0;

    temp_r0                             = func_0200a4c8();
    M2C_FIELD(&data_0203859c, s32 *, 8) = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            M2C_FIELD(&data_0203859c, s32 *, 4) = 0x06894000;
            return;
        case 0x20:
            M2C_FIELD(&data_0203859c, s32 *, 4) = 0x06890000;
            return;
    }
}

#include "m2c.h"

s32 func_ov003_0209fb2c();                          /* extern */
extern void *data_ov000_02051548;

void func_ov025_020d0824(void) {
    s32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(data_ov000_02051548, s32 *, 0x6C) = 3;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x70) = 0x19;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x74) = 5;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x78) = 0xE;
            return;
        case 1:
            M2C_FIELD(data_ov000_02051548, s32 *, 0x6C) = 3;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x70) = 0x19;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x74) = 5;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x78) = 0xE;
            return;
    }
}

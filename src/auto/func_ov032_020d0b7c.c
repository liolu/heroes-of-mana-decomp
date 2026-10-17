#include "m2c.h"

M2C_UNK func_ov003_0209bca4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_0209c8f0(s32);                   /* extern */
s32 func_ov003_0209cb30(s32);                       /* extern */
extern s32 data_ov000_02051548;

void func_ov032_020d0b7c(s32 arg0) {
    u32 temp_r0;

    if ((func_ov003_0209cb30(arg0 + 0xEFB) != 2) && (func_ov003_0209cb30(arg0 + 0xEFB) != 3)) {
        return;
    }
    temp_r0 = M2C_FIELD((data_ov000_02051548 + (arg0 * 4)), u32 *, 0x40);
    switch (temp_r0) {
        case 0:
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xC, 0);
            func_ov003_0209c8f0(0x27A);
            func_ov003_0209bca4(arg0 + 0xEFB, 7, 0x15, 0x14);
            func_ov003_0209bca4(arg0 + 0xEFB, 3, 0, 0);
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 1:
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xC, 0);
            func_ov003_0209c8f0(0x27A);
            func_ov003_0209bca4(arg0 + 0xEFB, 7, 7, 0xB);
            func_ov003_0209bca4(arg0 + 0xEFB, 3, 4, 0);
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 2:
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xC, 0);
            func_ov003_0209c8f0(0x27A);
            func_ov003_0209bca4(arg0 + 0xEFB, 7, 0x1F, 0x1B);
            func_ov003_0209bca4(arg0 + 0xEFB, 3, 6, 0);
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 3:
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xC, 0);
            func_ov003_0209c8f0(0x27A);
            func_ov003_0209bca4(arg0 + 0xEFB, 7, 0x1E, 9);
            func_ov003_0209bca4(arg0 + 0xEFB, 3, 4, 0);
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 4:
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xC, 0);
            func_ov003_0209c8f0(0x27A);
            func_ov003_0209bca4(arg0 + 0xEFB, 7, 0xB, 0x1B);
            func_ov003_0209bca4(arg0 + 0xEFB, 3, 0, 0);
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 5:
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xC, 0);
            func_ov003_0209c8f0(0x27A);
            func_ov003_0209bca4(arg0 + 0xEFB, 7, 0x10, 0xB);
            func_ov003_0209bca4(arg0 + 0xEFB, 3, 4, 0);
            func_ov003_0209bca4(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        default:
            return;
    }
}

#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_ov123_020cca8c(s32, M2C_UNK, M2C_UNK); /* extern */
u32 func_ov123_020d26f0();                          /* extern */

void func_ov123_020d2a50(void) {
    M2C_UNK var_r1;
    M2C_UNK var_r2;
    s32 temp_r4;
    u32 temp_r0;

    temp_r4 = func_0200ed38(0, -1, 0x40000);
    temp_r0 = func_ov123_020d26f0();
    switch (temp_r0) {
        case 0:
            var_r1 = 0;
            var_r2 = 0x10;
            break;
        case 1:
            var_r1 = 1;
            var_r2 = 0;
            break;
        case 2:
            var_r1 = 2;
            var_r2 = 0;
            break;
        case 3:
            var_r1 = 3;
            var_r2 = 0;
            break;
        case 4:
            var_r1 = 4;
            var_r2 = 0;
            break;
        case 5:
            var_r1 = 5;
            var_r2 = 0;
            break;
        default:
            var_r1 = 0;
            var_r2 = 0x10;
            break;
    }
    func_ov123_020cca8c(temp_r4, var_r1, var_r2);
    OS_FreeToHeap(0, -1, temp_r4);
}

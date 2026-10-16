#include "m2c.h"

s32 func_ov122_02055af0();                          /* extern */
M2C_UNK func_ov122_0205ce60(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_0205db1c(M2C_UNK);               /* extern */
s32 func_ov123_020d3344();                          /* extern */

s32 func_ov122_0205fb64(void) {
    s32 temp_r0;

    func_ov122_0205ce60(0x400, 0x800);
loop_1:
    if (func_ov123_020d3344() == 0) {
        func_ov122_0205db1c(3);
        return 0;
    }
    temp_r0 = func_ov122_02055af0();
    if (temp_r0 != 6) {
        if (temp_r0 == 7) {
            func_ov122_0205ce60(0x400, 0x80000000);
        }
        goto loop_1;
    }
    return 1;
}

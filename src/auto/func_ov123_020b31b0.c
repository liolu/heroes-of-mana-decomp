/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020b2370();                          /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern M2C_UNK func_ov123_020b3a24;
extern M2C_UNK func_ov123_020bfb84;

void func_ov123_020b31b0(void) {
    s32 temp_r0;

    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    temp_r0 = func_ov123_020b2370();
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_ov123_020b23fc(0, 1);
            func_ov123_020b2410(&func_ov123_020b3a24);
            return;
        case 1:
            func_ov123_020b23fc(1, 1);
            func_ov123_020b2410(&func_ov123_020bfb84);
            return;
    }
}

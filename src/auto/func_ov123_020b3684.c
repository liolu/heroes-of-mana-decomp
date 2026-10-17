/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b346c();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020b316c;
extern M2C_UNK func_ov123_020b365c;

void func_ov123_020b3684(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_020ae120();
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_ov123_020c36bc(7);
            func_ov123_020b2410(&func_ov123_020b316c);
            return;
        case 1:
            func_ov123_020c36bc(6);
            func_ov123_020b346c();
            func_ov123_020b2410(&func_ov123_020b365c);
            return;
    }
}

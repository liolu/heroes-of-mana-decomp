/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae090();                      /* extern */
s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c536c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK func_ov123_020b3ad4;
extern M2C_UNK func_ov123_020b3c78;

void func_ov123_020b3ca0(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_020ae120();
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_ov123_020c36bc(7);
            func_ov123_020b2410(&func_ov123_020b3c78);
            return;
        case 1:
            func_ov123_020c36bc(6);
            func_ov123_020c536c(0x18, 0, 1, -1, 0);
            func_ov123_020ae090();
            func_ov123_020b2410(&func_ov123_020b3ad4);
            return;
    }
}

#include "m2c.h"

s32 func_ov123_020cca44();                          /* extern */
M2C_UNK func_ov123_020cca50();                      /* extern */
s32 func_ov123_020cca5c();                          /* extern */

s32 func_ov123_020d18e0(void *arg0) {
    s32 temp_r0;

    func_ov123_020cca50();
    if (func_ov123_020cca44() != 0) {
        temp_r0 = func_ov123_020cca5c();
        switch (temp_r0) {                          /* irregular */
            case 4:
                M2C_FIELD(arg0, s8 *, 0x10) = 1;
                return 1;
            case 7:
                return 3;
            case 8:
                return 3;
            default:
                return 3;
        }
    } else {
        return 0;
    }
}

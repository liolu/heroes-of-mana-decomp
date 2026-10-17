/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c52f0();                          /* extern */
extern M2C_UNK func_ov123_020b3c78;

void func_ov123_020b3aa8(void) {
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020b3c78);
}

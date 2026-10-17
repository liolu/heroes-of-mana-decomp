/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae0a8();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c239c();                      /* extern */
s32 func_ov123_020c52f0();                          /* extern */
extern M2C_UNK func_ov123_020b85c0;

void func_ov123_020b7384(void) {
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    func_ov123_020ae0a8();
    func_ov123_020c239c();
    func_ov123_020b2410(&func_ov123_020b85c0);
}

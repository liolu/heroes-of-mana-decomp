/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae0a8();                      /* extern */
s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c3c70();                          /* extern */
extern M2C_UNK func_ov123_020bf848;

void func_ov123_020bf864(void) {
    if (func_ov123_020ae120() == -2) {
        return;
    }
    if (func_ov123_020c3c70() == 1) {
        return;
    }
    func_ov123_020ae0a8();
    func_ov123_020b2410(&func_ov123_020bf848);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020b1d20();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern M2C_UNK func_ov123_020ba1a4;

void func_ov123_020ba1bc(void) {
    if (func_ov123_020b1d20() == 0x1F) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020ba1a4);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020bd47c();                      /* extern */
M2C_UNK func_ov123_020bd480();                      /* extern */
s32 func_ov123_020c52f0();                          /* extern */
extern M2C_UNK func_ov123_020bd438;

void func_ov123_020bd484(void) {
    func_ov123_020bd480();
    func_ov123_020bd47c();
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020bd438);
}

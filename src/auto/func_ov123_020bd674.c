/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c530c();                          /* extern */
M2C_UNK func_ov123_020c5320();                      /* extern */
extern M2C_UNK func_ov123_020bd648;

void func_ov123_020bd674(void) {
    if (func_ov123_020c530c() != 0) {
        return;
    }
    func_ov123_020c36bc(6);
    func_ov123_020c5320();
    func_ov123_020b2410(&func_ov123_020bd648);
}

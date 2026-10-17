/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b062c();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern M2C_UNK func_ov123_020b90fc;

void func_ov123_020b91d4(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    func_ov123_020b062c();
    func_ov123_020c36bc(0x15);
    func_ov123_020b2410(&func_ov123_020b90fc);
}

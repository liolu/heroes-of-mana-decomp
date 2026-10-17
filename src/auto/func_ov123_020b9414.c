/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020b0618();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern M2C_UNK func_ov123_020b93fc;

void func_ov123_020b9414(void) {
    if (func_ov123_020b0618() == 0xFF) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020b93fc);
}

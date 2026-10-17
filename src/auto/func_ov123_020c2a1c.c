/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ca4ec(s32, M2C_UNK);              /* extern */
extern s32 data_ov123_020e46cc;

void func_ov123_020c2a1c(void) {
    if (data_ov123_020e46cc != 0) {
        return;
    }
    data_ov123_020e46cc = func_ov123_020ca4ec(0x1E60, 0x20);
}

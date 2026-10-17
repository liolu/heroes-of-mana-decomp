/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ca49c(void **);               /* extern */
M2C_UNK func_ov123_020cb5ec(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e4750;

void func_ov123_020caeec(void) {
    func_ov123_020cb5ec(1, M2C_FIELD(data_ov123_020e4750, s32 *, 0x808));
    func_ov123_020ca49c(&data_ov123_020e4750);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ca49c(void **);               /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e46d4;

void func_ov123_020c36e0(void) {
    func_ov123_020cb5f8(0, M2C_FIELD(data_ov123_020e46d4, s32 *, 0x98));
    func_ov123_020ca49c(&data_ov123_020e46d4);
}

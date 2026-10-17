/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c8f8c(s32);                   /* extern */
M2C_UNK func_ov123_020ca49c(void **);               /* extern */
M2C_UNK func_ov123_020cb5ec(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e46c8;

void func_ov123_020c23e8(void) {
    func_ov123_020cb5ec(0, M2C_FIELD(data_ov123_020e46c8, s32 *, 0xC));
    func_ov123_020c8f8c(M2C_FIELD(data_ov123_020e46c8, s32 *, 0));
    func_ov123_020ca49c(&data_ov123_020e46c8);
}

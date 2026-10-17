/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ca49c(void **);               /* extern */
M2C_UNK func_ov123_020cae80(s32);                   /* extern */
M2C_UNK func_ov123_020cb5ec(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e4564;

void func_ov123_020ada60(void) {
    func_ov123_020cb5ec(1, M2C_FIELD(data_ov123_020e4564, s32 *, 0));
    func_ov123_020cae80(M2C_FIELD(data_ov123_020e4564, s32 *, 4));
    func_ov123_020ca49c(&data_ov123_020e4564);
}

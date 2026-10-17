/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ca49c(void **);               /* extern */
M2C_UNK func_ov123_020cae80(s32);                   /* extern */
M2C_UNK func_ov123_020cb5ec(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e45b8;

void func_ov123_020aeaa0(void) {
    if (data_ov123_020e45b8 == NULL) {
        return;
    }
    func_ov123_020cb5ec(0, M2C_FIELD(data_ov123_020e45b8, s32 *, 4));
    func_ov123_020cae80(M2C_FIELD(data_ov123_020e45b8, s32 *, 0));
    func_ov123_020ca49c(&data_ov123_020e45b8);
}

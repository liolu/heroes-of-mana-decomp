/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020a90a8();                      /* extern */
M2C_UNK func_ov123_020c2d7c(void *);                /* extern */
M2C_UNK func_ov123_020ca49c(void **);               /* extern */
extern u8 data_ov123_020e45c4;
extern void *data_ov123_020e45c8;

void func_ov123_020b2188(s32 arg0) {
    func_ov123_020a90a8();
    if ((arg0 != 0) && (M2C_FIELD(data_ov123_020e45c8, u8 *, 0x116) == 0) && (data_ov123_020e45c4 == 1)) {
        func_ov123_020c2d7c(data_ov123_020e45c8 + 0x117);
    }
    func_ov123_020ca49c(&data_ov123_020e45c8);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02095778();                      /* extern */
M2C_UNK func_ov123_020957d0();                      /* extern */
M2C_UNK func_ov123_02099778(M2C_UNK, s32, M2C_UNK); /* extern */
extern void *data_ov123_020e18d4;

void func_ov123_0209bc7c(void) {
    if (M2C_FIELD(data_ov123_020e18d4, s32 *, 0x24) != 0) {
        func_ov123_020957d0();
        func_ov123_02095778();
        func_ov123_02099778(0, M2C_FIELD(data_ov123_020e18d4, s32 *, 0x24), 0);
        M2C_FIELD(data_ov123_020e18d4, s32 *, 0x24) = 0;
    }
    data_ov123_020e18d4 = NULL;
}

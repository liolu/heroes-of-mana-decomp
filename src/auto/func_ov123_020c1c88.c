/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK DC_FlushRange(void *, M2C_UNK);             /* extern */
M2C_UNK func_0200bb64(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_ov123_020e46bc;

void func_ov123_020c1c88(void) {
    if (M2C_FIELD(data_ov123_020e46bc, u8 *, 0x604) == 0) {
        return;
    }
    DC_FlushRange(data_ov123_020e46bc + 4, 0x600);
    func_0200bb64(data_ov123_020e46bc + 4, 0, 0x600);
    M2C_FIELD(data_ov123_020e46bc, u8 *, 0x604) = 0U;
}

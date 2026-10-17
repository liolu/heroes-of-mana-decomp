/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MB_EndToIdle();                             /* extern */
extern void *data_ov123_020e46e8;

void func_ov123_020c5c38(void) {
    if (M2C_FIELD(data_ov123_020e46e8, u16 *, 0) != 4) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e46e8, u16 *, 2) != M2C_FIELD(data_ov123_020e46e8, u16 *, 0xC)) {
        return;
    }
    MB_EndToIdle();
}

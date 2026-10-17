/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern void *data_ov123_020e46dc;
extern M2C_UNK func_ov123_020c3bcc;

void func_ov123_020c3d78(void) {
    M2C_FIELD(data_ov123_020e46dc, s8 *, 0x18)  = 1;
    M2C_FIELD(data_ov123_020e46dc, s32 *, 0x14) = func_ov123_020cb6ac(0, &func_ov123_020c3bcc, 0, 0x78);
}

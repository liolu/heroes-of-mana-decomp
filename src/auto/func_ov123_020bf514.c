/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae134();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
void *func_ov123_020c35d4();                        /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern u8 data_ov123_020e4690;
extern void *data_ov123_020e4694;
extern M2C_UNK func_ov123_020bf354;

void func_ov123_020bf514(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if ((M2C_FIELD(data_ov123_020e4694, u8 *, 0x1D) == 1) &&
        ((data_ov123_020e4690 == 3) || (M2C_FIELD(func_ov123_020c35d4(), u8 *, 0xE7) != 0xFF))) {
        func_ov123_020ae134();
    }
    func_ov123_020c9740(3, 1, 1, 8);
    func_ov123_020c9740(3, 0, 0x14, 8);
    func_ov123_020b2410(&func_ov123_020bf354);
}

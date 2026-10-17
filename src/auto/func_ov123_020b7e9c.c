/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae090();                      /* extern */
M2C_UNK func_ov123_020ae134();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern void *data_ov123_020e4654;
extern M2C_UNK func_ov123_020b7c78;

void func_ov123_020b7e9c(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x54) != 0) {
        func_ov123_020ae134();
    } else {
        func_ov123_020ae090();
    }
    func_ov123_020c9740(3, 1, 1, 8);
    func_ov123_020c9740(3, 0, 0x1D, 8);
    func_ov123_020b2410(&func_ov123_020b7c78);
}

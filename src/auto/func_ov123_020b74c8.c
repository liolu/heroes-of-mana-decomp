/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;
extern M2C_UNK func_ov123_020b7824;

void func_ov123_020b74c8(void) {
    if (data_ov123_020e4650 == 0) {
        if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x59) != 0) {
            return;
        }
        func_ov123_020c36bc(9);
        M2C_FIELD(data_ov123_020e4654, u8 *, 0x59) = 1U;
        return;
    }
    func_ov123_020c36bc(0x13);
    M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020b7824, 0, 0x78);
}

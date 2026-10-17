/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020cb618(M2C_UNK, M2C_UNK *);    /* extern */
extern void *data_ov123_020e46e4;
extern M2C_UNK func_ov123_020c4c04;

void func_ov123_020c4c94(M2C_UNK arg0) {
    M2C_FIELD(data_ov123_020e46e4, u8 *, 0x1D) = (u8) (M2C_FIELD(data_ov123_020e46e4, u8 *, 0x1D) + 1);
    if ((u32) M2C_FIELD(data_ov123_020e46e4, u8 *, 0x1D) < 8U) {
        return;
    }
    func_ov123_020cb618(arg0, &func_ov123_020c4c04);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020cb618(M2C_UNK, M2C_UNK *);    /* extern */
extern void *data_ov123_020e4568;
extern M2C_UNK func_ov123_020add84;

void func_ov123_020adf14(M2C_UNK arg0) {
    M2C_FIELD(data_ov123_020e4568, s8 *, 0x16)  = -1;
    M2C_FIELD(data_ov123_020e4568, u16 *, 0x14) = (u16) (M2C_FIELD(data_ov123_020e4568, u16 *, 0x14) + 1);
    if ((u32) M2C_FIELD(data_ov123_020e4568, u16 *, 0x14) < 4U) {
        return;
    }
    M2C_FIELD(data_ov123_020e4568, u16 *, 0x14) = 0U;
    func_ov123_020cb618(arg0, &func_ov123_020add84);
}

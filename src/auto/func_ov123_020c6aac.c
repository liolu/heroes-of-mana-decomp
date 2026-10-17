/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
u16 func_ov123_020c69b4(u16);                       /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK data_ov123_020de5e8;
extern M2C_UNK (*data_ov123_020e4704)(M2C_UNK, M2C_UNK *, u16);
extern void *data_ov123_020e4708;

u16 func_ov123_020c6aac(void) {
    if (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) != 7) {
        func_0200fddc();
    }
    func_ov123_020c7738(1);
    M2C_FIELD(data_ov123_020e4708, u16 *, 0x5C) = func_ov123_020c69b4(M2C_FIELD(data_ov123_020e4708, u16 *, 0x60));
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de5e8, M2C_FIELD(data_ov123_020e4708, u16 *, 0x5C));
    }
    return M2C_FIELD(data_ov123_020e4708, u16 *, 0x5C);
}

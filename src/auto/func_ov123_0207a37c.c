/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020996b8(s32, s32);                  /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b84;

void func_ov123_0207a37c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x14) =
        func_ov123_020996b8(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 4) * M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        return;
    }
    func_02020d04(&data_ov123_020d9b84, &data_ov123_020d9b18, 0, 0x41);
}

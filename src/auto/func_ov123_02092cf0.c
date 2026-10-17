/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024ea0(s32, M2C_UNK *, M2C_UNK);         /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */
extern M2C_UNK data_ov123_020d5044;

s32 func_ov123_02092cf0(s32 arg0) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(func_ov123_020913d8(0x10), u8 *, 0xD0C) << 0x1C) >> 0x1C;
    if (((temp_r0 == 0) || (temp_r0 == 6)) && (func_02024ea0(arg0 + 0xC, &data_ov123_020d5044, 8) == 0)) {
        return 8;
    }
    return 0;
}

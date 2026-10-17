/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b24;

s32 func_ov123_0207a194(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0))) {
        func_02020d04(&data_ov123_020d9b24, &data_ov123_020d9b18, 0, 0x94);
    }
    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0))) {
        return 0;
    }
    return (M2C_FIELD(arg0, s32 *, 8) * arg1) + M2C_FIELD(arg0, s32 *, 0x14);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_0206b2e0(M2C_UNK);                   /* extern */
extern u8 data_ov123_020df238;

s32 func_ov123_02073128(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r6;

    temp_r5                                   = func_0200fa98();
    temp_r7                                   = M2C_FIELD(&data_ov123_020df238, s32 *, 0);
    temp_r6                                   = M2C_FIELD(&data_ov123_020df238, s32 *, 4);
    M2C_FIELD(&data_ov123_020df238, s32 *, 0) = 0;
    M2C_FIELD(&data_ov123_020df238, s32 *, 4) = 0;
    temp_r4                                   = func_ov123_0206b2e0(arg0);
    M2C_FIELD(&data_ov123_020df238, s32 *, 0) = temp_r7;
    M2C_FIELD(&data_ov123_020df238, s32 *, 4) = temp_r6;
    func_0200faac(temp_r5);
    return temp_r4;
}

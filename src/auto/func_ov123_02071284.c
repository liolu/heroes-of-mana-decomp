/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, s32);             /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_ov123_020710b8(s32, M2C_UNK);          /* extern */
s32 func_ov123_020711f8();                          /* extern */
M2C_UNK func_ov123_02073494(s32);                   /* extern */
extern void *data_ov123_020e0a00;

s32 func_ov123_02071284(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = func_ov123_020711f8();
    temp_r5 = func_0200fa98();
    temp_r0 = M2C_FIELD(data_ov123_020e0a00, s32(**)(s32), 0x18)(temp_r4);
    if (temp_r0 != 0) {
        MI_CpuFill8(temp_r0, 0, temp_r4);
        func_ov123_020710b8(temp_r0, arg0);
        func_ov123_02073494(temp_r0);
    }
    func_0200faac(temp_r5);
    return temp_r0;
}

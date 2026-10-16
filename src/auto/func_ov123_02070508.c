/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(M2C_UNK *);           /* extern */
s32 func_0200dd3c(M2C_UNK *);                       /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern s32 data_ov123_020df214;
extern M2C_UNK data_ov123_020df3bc;

s32 func_ov123_02070508(void) {
    s32 temp_r5;
    s32 temp_r0;

    temp_r5 = func_0200fa98();
    temp_r0 = func_0200dd3c(&data_ov123_020df3bc);
    if ((temp_r0 == 0) && (data_ov123_020df214 == 0)) {
        data_ov123_020df214 = 1;
        OS_WakeupThreadDirect(&data_ov123_020df3bc);
    }
    func_0200faac(temp_r5);
    return temp_r0;
}

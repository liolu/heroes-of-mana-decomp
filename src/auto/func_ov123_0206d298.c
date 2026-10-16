/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_0206d410();                          /* extern */

void func_ov123_0206d298(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x28) = func_ov123_0206d410();
    M2C_FIELD(arg0, s8 *, 8)     = 1;
    temp_r4                      = func_0200fa98();
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    OS_SleepThread(0);
    func_0200faac(temp_r4);
}

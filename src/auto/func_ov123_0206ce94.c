/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);
M2C_UNK OS_YieldThread();
s32 func_0200fa98();
M2C_UNK func_0200faac(s32);

s32 func_ov123_0206ce94(s32 *arg0, void *arg1) {
    s32 temp_r8;

    if ((M2C_FIELD(arg1, s32 *, 0x44) == 0) && (M2C_FIELD(arg1, u8 *, 8) == 4)) {
        temp_r8 = func_0200fa98();
        while ((M2C_FIELD(arg1, s32 *, 0x44) == 0) && (M2C_FIELD(arg1, u8 *, 8) == 4)) {
            M2C_FIELD(arg1, s32 *, 4) = 2;
            OS_SleepThread(0);
        }
        func_0200faac(temp_r8);
    } else {
        OS_YieldThread();
    }
    *arg0 = M2C_FIELD(arg1, s32 *, 0x44);
    if (*arg0 != 0) {
        return M2C_FIELD(arg1, s32 *, 0x40);
    }
    return 0;
}

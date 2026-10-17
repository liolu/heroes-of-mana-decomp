/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_CreateThread(void *, M2C_UNK *, void *, void *, s32, s32); /* extern */
M2C_UNK OS_InitMutex(void *);                       /* extern */
M2C_UNK OS_WakeupThreadDirect(void *);              /* extern */
s32 func_0200dd3c(void *);                          /* extern */
extern s32 data_ov123_020e1690;
extern M2C_UNK func_ov123_02096d74;

void func_ov123_02097308(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C10) = 0;
    OS_InitMutex(arg0 + 0x1BF8);
    OS_InitMutex(arg0 + 0x1A18);
    if (M2C_FIELD(arg0, s32 *, 0x1018) == 1) {
        data_ov123_020e1690 = 1;
    } else {
        data_ov123_020e1690 = 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1BA4) != 0) && (func_0200dd3c(arg0 + 0x1B38) == 0)) {
        return;
    }
    OS_CreateThread(arg0 + 0x1B38, &func_ov123_02096d74, arg0, arg0 + 0x1000, 0x1000, arg1);
    OS_WakeupThreadDirect(arg0 + 0x1B38);
}

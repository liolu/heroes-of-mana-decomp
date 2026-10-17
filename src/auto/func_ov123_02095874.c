/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_CreateThread(void *, M2C_UNK *, void **, void *, s32, s32); /* extern */
M2C_UNK OS_InitMutex(void *);                       /* extern */
M2C_UNK OS_WakeupThreadDirect(void *);              /* extern */
s32 func_0200dd3c(void *);                          /* extern */
extern void *data_ov123_020e1678;
extern M2C_UNK func_ov123_02095274;

void func_ov123_02095874(void) {
    OS_InitMutex(data_ov123_020e1678 + 0x13D8);
    M2C_FIELD(data_ov123_020e1678, s32 *, 0x13F0) = 0;
    if ((M2C_FIELD(data_ov123_020e1678, s32 *, 0x1384) != 0) && (func_0200dd3c(data_ov123_020e1678 + 0x1318) == 0)) {
        return;
    }
    OS_CreateThread(data_ov123_020e1678 + 0x1318, &func_ov123_02095274, &data_ov123_020e1678, data_ov123_020e1678 + 0x1000,
                    0x1000, 0x10);
    OS_WakeupThreadDirect(data_ov123_020e1678 + 0x1318);
}

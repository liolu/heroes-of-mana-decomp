/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_CreateThread(void *, M2C_UNK *, void *, void *, s32, s32); /* extern */
M2C_UNK OS_WakeupThreadDirect(void *);              /* extern */
s32 func_0200dd3c(void *);                          /* extern */
extern void *data_ov123_020e1694;
extern M2C_UNK func_ov123_020975dc;

void func_ov123_0209858c(void) {
    if ((M2C_FIELD(data_ov123_020e1694, s32 *, 0x1188) != 0) && (func_0200dd3c(data_ov123_020e1694 + 0x111C) == 0)) {
        return;
    }
    OS_CreateThread(data_ov123_020e1694 + 0x111C, &func_ov123_020975dc, data_ov123_020e1694, data_ov123_020e1694 + 0x1000,
                    0x1000, 0x10);
    OS_WakeupThreadDirect(data_ov123_020e1694 + 0x111C);
}

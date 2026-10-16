/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_CreateThread(s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK OS_InitMessageQueue(s32, s32, u8);          /* extern */
M2C_UNK OS_InitMutex(s32);                          /* extern */
M2C_UNK OS_WakeupThreadDirect(s32);                 /* extern */
s32 func_ov123_020711c4(void *);                    /* extern */
extern M2C_UNK func_ov123_02070c78;

s32 func_ov123_02071014(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r4;

    temp_r4 = arg0 + func_ov123_020711c4(arg2);
    OS_InitMessageQueue(arg1, arg0, M2C_FIELD(arg2, u8 *, 3));
    OS_InitMutex(arg1 + 0xE0);
    OS_CreateThread(arg1 + 0x20, &func_ov123_02070c78, arg1, temp_r4, (s32) M2C_FIELD(arg2, u16 *, 0),
                    (s32) M2C_FIELD(arg2, u8 *, 2));
    OS_WakeupThreadDirect(arg1 + 0x20);
    return temp_r4;
}

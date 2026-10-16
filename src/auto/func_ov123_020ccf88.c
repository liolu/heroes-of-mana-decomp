#include "m2c.h"

M2C_UNK OS_KillThread(void *, M2C_UNK);             /* extern */
M2C_UNK OS_LockMutex(void *);                       /* extern */
s32 func_0200dd3c(void *);                          /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_02073bc4(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov123_020cd050();                      /* extern */
extern void *data_ov123_020e47a0;

void func_ov123_020ccf88(void) {
    s32 temp_r0;

    if (data_ov123_020e47a0 == NULL) {
        return;
    }
    OS_LockMutex(data_ov123_020e47a0 + 4);
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 0x100);
    temp_r0                                  = M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C);
    if (temp_r0 >= 0) {
        func_ov123_02073bc4(temp_r0, 2);
    }
    if (func_0200dd3c(data_ov123_020e47a0 + 0x920) == 0) {
        OS_KillThread(data_ov123_020e47a0 + 0x920, 0);
    }
    if (func_0200dd3c(data_ov123_020e47a0 + 0x860) == 0) {
        OS_KillThread(data_ov123_020e47a0 + 0x860, 0);
    }
    func_ov123_020cd050();
    func_0200e644(data_ov123_020e47a0 + 4);
    data_ov123_020e47a0 = NULL;
}

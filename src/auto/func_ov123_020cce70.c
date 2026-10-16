#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
s32 func_ov123_020cd0e8(void *);                    /* extern */
extern void *data_ov123_020e47a0;

s32 func_ov123_020cce70(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;

    if (data_ov123_020e47a0 == NULL) {
        return 0;
    }
    temp_r1 = M2C_FIELD(data_ov123_020e47a0, s32 *, 0);
    if (!(temp_r1 & 8)) {
        return 0;
    }
    if (temp_r1 & ~0xFFFF) {
        return 0;
    }
    if (temp_r1 & 0x20) {
        return 0;
    }
    OS_LockMutex(data_ov123_020e47a0 + 4);
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19E8) = arg1;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19EC) = arg2;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19F8) = arg0;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0)      = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 0x20);
    func_0200e644(data_ov123_020e47a0 + 4);
    return func_ov123_020cd0e8(data_ov123_020e47a0 + 0x920);
}

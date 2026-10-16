#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
s32 func_ov123_02073bb8();                          /* extern */
extern void *data_ov123_020e47a0;

void func_ov123_020cd050(void) {
    s32 temp_r0;
    s32 temp_r2;

    if (data_ov123_020e47a0 == NULL) {
        return;
    }
    OS_LockMutex(data_ov123_020e47a0 + 4);
    if ((s32) M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C) >= 0) {
        temp_r0 = func_ov123_02073bb8();
        temp_r2 = M2C_FIELD(data_ov123_020e47a0, s32 *, 0);
        if (temp_r2 & 0x200) {
            if (temp_r0 == 0) {
                M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C) = -0x38;
                M2C_FIELD(data_ov123_020e47a0, s32 *, 0)    = 1;
            }
        } else if (temp_r0 == 0) {
            M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (temp_r2 | 0x200);
        }
    } else {
        M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = 1;
    }
    func_0200e644(data_ov123_020e47a0 + 4);
}

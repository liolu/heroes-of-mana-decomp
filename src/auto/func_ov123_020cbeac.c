#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cda78();                      /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020cbeac(s32 arg0, s32 arg1) {
    func_ov123_020cda78();
    if (data_ov123_020e4790 == NULL) {
        return;
    }
    OS_LockMutex(data_ov123_020e4790 + 0xE0C);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE30) = arg0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE34) = arg1;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) = 3;
    func_0200e644(data_ov123_020e4790 + 0xE0C);
}

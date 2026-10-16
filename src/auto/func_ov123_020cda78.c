#include "m2c.h"

M2C_UNK OS_LockMutex(s32);                          /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020ccf28();                      /* extern */
extern M2C_UNK data_ov123_020e47a4;

void func_ov123_020cda78(void) {
    OS_LockMutex(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
    func_ov123_020ccf28();
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0)     = 5;
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 0;
    func_0200e644(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
}

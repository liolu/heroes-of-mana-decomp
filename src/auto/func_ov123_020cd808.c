#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020ccad4();                      /* extern */
s32 func_ov123_020ccc70();                          /* extern */
s32 func_ov123_020ccc9c();                          /* extern */
s32 func_ov123_020cce70(void *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_ov123_020cd9dc();                          /* extern */
M2C_UNK func_ov123_020cdd84();                      /* extern */
M2C_UNK func_ov123_020cdf24();                      /* extern */
s32 func_ov123_020cdf98();                          /* extern */
extern M2C_UNK data_ov123_020e47a4;
extern M2C_UNK func_ov123_020cdfd4;

void func_ov123_020cd808(void) {
    u32 temp_r0;

    func_ov123_020ccad4();
    if (M2C_FIELD(&data_ov123_020e47a4, void **, 8) == NULL) {
        return;
    }
    func_ov123_020cdf24();
    temp_r0 = M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), u32 *, 0);
    switch (temp_r0) {
        default:
            break;
        case 5:
            if (func_ov123_020ccc9c() != 0) {
                M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), u32 *, 0) = 0U;
            }
            break;
        case 1:
            if (func_ov123_020cdf98() != 0) {
                func_ov123_020cdd84();
            }
            break;
        case 3:
        case 4:
            if (func_ov123_020ccc70() == 0) {
                M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), u32 *, 0) = 5U;
                OS_LockMutex(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
                if (M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) == 2) {
                    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 0;
                }
                func_0200e644(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
            }
            break;
    }
    if (M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) != 1) {
        return;
    }
    if (func_ov123_020cd9dc() == 0) {
        return;
    }
    OS_LockMutex(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 2;
    if (func_ov123_020cce70(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0x620, &func_ov123_020cdfd4, 0) == 0) {
        M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 1;
    }
    func_0200e644(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
}

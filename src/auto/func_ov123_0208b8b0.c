/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207af50(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0208b97c();                          /* extern */
M2C_UNK func_ov123_0208bbbc(void *);                /* extern */
M2C_UNK func_ov123_0208bf68(void *);                /* extern */
void *func_ov123_0208bfd0();                        /* extern */
extern s32 data_ov123_020e0d74;

s32 func_ov123_0208b8b0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r0;

    if (data_ov123_020e0d74 != 1) {
        return 2;
    }
    if (func_ov123_0208b97c() == 0) {
        return 3;
    }
    temp_r0 = func_ov123_0208bfd0();
    if (temp_r0 == NULL) {
        return 1;
    }
    M2C_FIELD(temp_r0, s32 *, 4)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x38) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0)    = func_ov123_0207af50(2, 2, 0);
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r0, s8 *, 0x32)  = 0;
    M2C_FIELD(temp_r0, s8 *, 0x33)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24) = 0;
    if (M2C_FIELD(temp_r0, s32 *, 0) == -1) {
        func_ov123_0208bf68(temp_r0);
        return 2;
    }
    func_ov123_0208bbbc(temp_r0);
    return 0;
}

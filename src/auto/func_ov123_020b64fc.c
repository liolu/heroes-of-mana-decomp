/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK MIi_CpuCopy16(void *, M2C_UNK *, s32);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
void *func_ov123_020b2d90();                        /* extern */
M2C_UNK func_ov123_020b2db8(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b6460();                      /* extern */
M2C_UNK func_ov123_020c536c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_020c98a8(s32);                   /* extern */
M2C_UNK func_ov123_020c9988(s32, u16, u16, s32, s32, s32, s32, M2C_UNK *); /* extern */
s32 func_ov123_020c9c88(M2C_UNK, M2C_UNK);          /* extern */
extern M2C_UNK data_ov123_020d7eb0;
extern s8 data_ov123_020e4630;
extern s8 data_ov123_020e4634;
extern M2C_UNK func_ov123_020b6164;
extern M2C_UNK func_ov123_020b6424;

void func_ov123_020b64fc(void) {
    u8 sp10[24];
    s32 temp_r4;
    void *temp_r5;

    temp_r5             = func_ov123_020b2d90();
    temp_r4             = func_ov123_020c9c88(0, 0);
    data_ov123_020e4634 = 0;
    data_ov123_020e4630 = 0;
    func_ov123_020b6460();
    MIi_CpuClear16(0, (void *) sp10, 0x16);
    MIi_CpuCopy16(temp_r5 + 2, (void *) sp10, M2C_FIELD(temp_r5, u8 *, 1) * 2);
    func_ov123_020c9988(temp_r4, M2C_FIELD(&data_ov123_020d7eb0, u16 *, 0), M2C_FIELD(&data_ov123_020d7eb0, u16 *, 2),
                        M2C_FIELD(&data_ov123_020d7eb0, u16 *, 4) - M2C_FIELD(&data_ov123_020d7eb0, u16 *, 0),
                        M2C_FIELD(&data_ov123_020d7eb0, u16 *, 6) - M2C_FIELD(&data_ov123_020d7eb0, u16 *, 2), 2, 0x480,
                        (void *) sp10);
    func_ov123_020c98a8(temp_r4);
    func_ov123_020b2db8(&func_ov123_020b6164);
    func_ov123_020c536c(0x1D, 4, 0, -1, 0);
    func_ov123_020b2410(&func_ov123_020b6424);
}

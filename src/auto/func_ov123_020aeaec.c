/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 *func_ov123_020c92f8(M2C_UNK, u8);              /* extern */
void *func_ov123_020ca510(M2C_UNK, M2C_UNK);        /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020d7a00;
extern u8 data_ov123_020d7a04;
extern void *data_ov123_020e45b8;
extern M2C_UNK func_ov123_020ae9d0;

void func_ov123_020aeaec(s8 arg0) {
    s32 *temp_lr;
    s32 *temp_r4;
    void *temp_r0;

    if (data_ov123_020e45b8 != NULL) {
        return;
    }
    temp_r0                                   = func_ov123_020ca510(0xC, 4);
    data_ov123_020e45b8                       = temp_r0;
    M2C_FIELD(temp_r0, s8 *, 8)               = arg0;
    M2C_FIELD(data_ov123_020e45b8, s32 **, 0) = func_ov123_020c92f8(0, *(&data_ov123_020d7a04 + (arg0 * 4)));
    temp_r4                                   = M2C_FIELD(data_ov123_020e45b8, s32 **, 0);
    *temp_r4                                  = (*temp_r4 & 0xFE00FF00) | (u8) M2C_FIELD(&data_ov123_020d7a00, u16 *, 2) |
               ((M2C_FIELD(&data_ov123_020d7a00, u16 *, 0) & 0x1FF) << 0x10);
    temp_lr                                  = M2C_FIELD(data_ov123_020e45b8, s32 **, 0);
    M2C_FIELD(temp_lr, u16 *, 4)             = (u16) ((M2C_FIELD(temp_lr, u16 *, 4) & ~0xC00) | 0x800);
    M2C_FIELD(data_ov123_020e45b8, s32 *, 4) = func_ov123_020cb6ac(0, &func_ov123_020ae9d0, 0, 0x78);
}

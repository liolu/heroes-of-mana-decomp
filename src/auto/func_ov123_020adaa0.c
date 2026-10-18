/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 *func_ov123_020c92f8(M2C_UNK, M2C_UNK);         /* extern */
void *func_ov123_020ca4ec(M2C_UNK, M2C_UNK);        /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_ov123_020d7960;
extern M2C_UNK data_ov123_020d7964;
extern void *data_ov123_020e4564;
extern M2C_UNK func_ov123_020ad96c;

void func_ov123_020adaa0(s8 arg0) {
    s32 *temp_ip;
    s32 *temp_ip_2;
    s32 *temp_r3;
    void *temp_r0;

    temp_r0                                   = func_ov123_020ca4ec(0xC, 4);
    data_ov123_020e4564                       = temp_r0;
    M2C_FIELD(temp_r0, s8 *, 8)               = arg0;
    M2C_FIELD(data_ov123_020e4564, s32 **, 4) = func_ov123_020c92f8(0, 0x47);
    temp_r3                                   = M2C_FIELD(data_ov123_020e4564, s32 **, 4);
    M2C_FIELD(temp_r3, u16 *, 4)              = (u16) ((M2C_FIELD(temp_r3, u16 *, 4) & ~0xC00) | 0x400);
    temp_ip                                   = M2C_FIELD(data_ov123_020e4564, s32 **, 4);
    M2C_FIELD(temp_ip, s32 *, 0) &= ~0xC00;
    M2C_FIELD(temp_ip, u16 *, 4) = (u16) ((M2C_FIELD(temp_ip, u16 *, 4) & ~0xF000) | (*(&data_ov123_020d7960 + arg0) << 0xC));
    temp_ip_2                    = M2C_FIELD(data_ov123_020e4564, s32 **, 4);
    *temp_ip_2                   = (*temp_ip_2 & 0xFE00FF00) | (u8) M2C_FIELD(&data_ov123_020d7964, u16 *, 2) |
                 ((M2C_FIELD(&data_ov123_020d7964, u16 *, 0) & 0x1FF) << 0x10);
    M2C_FIELD(data_ov123_020e4564, s32 *, 0) = func_ov123_020cb6ac(1, &func_ov123_020ad96c, 0, 0x78);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0200cdbc(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_02099fd4(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_ov123_0209a01c(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_ov123_0209ccc8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
void *func_ov123_0209d368();                        /* extern */
extern M2C_UNK data_ov123_020dd3bc;
extern M2C_UNK data_ov123_020dd3f8;
extern M2C_UNK data_ov123_020dd488;
extern M2C_UNK data_ov123_020dd48c;

s32 func_ov123_020a2808(void) {
    u8 sp0[12];
    u8 spC[28];

    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) != 2) {
        return 0;
    }
    func_0200cdbc((void *) sp0, 0xC, &data_ov123_020dd3bc, M2C_FIELD(func_ov123_0209d368(), u8 *, 0x16) + 1);
    func_ov123_0209a01c(&data_ov123_020dd488, (void *) sp0, (void *) spC, 0x2F);
    func_0200cdbc((void *) sp0, 0xC, &data_ov123_020dd3bc, M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) + 1);
    func_ov123_02099fd4(&data_ov123_020dd48c, (void *) sp0, (void *) spC, 0x2F);
    func_0200cdbc((void *) sp0, 0xC, &data_ov123_020dd3bc, 3);
    func_ov123_02099fd4(&data_ov123_020dd3f8, (void *) sp0, (void *) spC, 0x2F);
    return func_ov123_0209ccc8(6, (void *) spC, 0);
}

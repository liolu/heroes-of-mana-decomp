/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02003c1c();                            /* extern */
M2C_UNK func_02004580(void *);                      /* extern */
M2C_UNK func_0200524c(void *, s32);                 /* extern */
M2C_UNK func_020064d0(M2C_UNK);                     /* extern */
s32 func_ov123_020c887c(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
void *func_ov123_020ca510(M2C_UNK, M2C_UNK);        /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020de2fc;
extern void *data_ov123_020e46d4;
extern M2C_UNK func_ov123_020c364c;

void func_ov123_020c3710(void) {
    M2C_UNK sp0;

    data_ov123_020e46d4                         = func_ov123_020ca510(0x9C, 4);
    M2C_FIELD(data_ov123_020e46d4, s32 *, 0x94) = func_ov123_020c887c(&data_ov123_020de2fc, &sp0, 0x20);
    func_02003c1c();
    func_0200524c(data_ov123_020e46d4, M2C_FIELD(data_ov123_020e46d4, s32 *, 0x94));
    func_020064d0(0);
    func_02004580(data_ov123_020e46d4 + 0x90);
    M2C_FIELD(data_ov123_020e46d4, s32 *, 0x98) = func_ov123_020cb6ac(0, &func_ov123_020c364c, 0, 0xC8);
}

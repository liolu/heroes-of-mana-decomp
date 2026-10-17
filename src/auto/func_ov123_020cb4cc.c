/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK GX_SetBankForARM7(s32);                     /* extern */
s32 func_0200a66c();                                /* extern */
s32 func_0200a680();                                /* extern */
s32 func_0200a694();                                /* extern */
s32 func_0200a6b8();                                /* extern */
s32 func_0200a6dc();                                /* extern */
s32 func_0200a6f0();                                /* extern */
s32 func_0200a704();                                /* extern */
s32 func_0200a718();                                /* extern */
s32 func_0200a72c();                                /* extern */
s32 func_0200a740();                                /* extern */
s32 func_0200a754();                                /* extern */
s32 func_0200a768();                                /* extern */
s32 func_0200a790();                                /* extern */
M2C_UNK func_ov123_020cb304();                      /* extern */
extern M2C_UNK data_ov123_020e4758;

void func_ov123_020cb4cc(void) {
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0)    = func_0200a66c();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 4)    = func_0200a680();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 8)    = func_0200a694();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0xC)  = func_0200a6b8();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x10) = func_0200a6dc();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x14) = func_0200a6f0();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x18) = func_0200a704();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x1C) = func_0200a740();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x20) = func_0200a754();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x24) = func_0200a768();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x28) = func_0200a790();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x2C) = func_0200a718();
    M2C_FIELD(&data_ov123_020e4758, s32 *, 0x30) = func_0200a72c();
    GX_SetBankForARM7(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x2C));
    func_ov123_020cb304();
}

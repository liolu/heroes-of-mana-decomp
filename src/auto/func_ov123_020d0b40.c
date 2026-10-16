#include "m2c.h"

M2C_UNK func_ov123_020ceed8(M2C_UNK, void *);       /* extern */
s16 func_ov123_020ceef8(M2C_UNK);                   /* extern */
s32 func_ov123_020cef0c(M2C_UNK);                   /* extern */
void *func_ov123_020cef20(M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_ov123_020cef34(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_020d0b40(void *arg0, M2C_UNK arg1) {
    void *temp_r0;

    M2C_FIELD(arg0, s16 *, 8) = func_ov123_020ceef8(arg1);
    func_ov123_020cef34(arg1, 2);
    M2C_FIELD(arg0, s32 *, 0xC)  = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov123_020cef0c(arg1);
    temp_r0                      = func_ov123_020cef20(arg1, 8);
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(temp_r0, u16 *, 0);
    M2C_FIELD(arg0, u8 *, 0x16)  = (u8) M2C_FIELD(temp_r0, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x17)  = (u8) M2C_FIELD(temp_r0, u8 *, 3);
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(temp_r0, u16 *, 4);
    M2C_FIELD(arg0, u8 *, 0x1A)  = (u8) M2C_FIELD(temp_r0, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x1B)  = (u8) M2C_FIELD(temp_r0, u8 *, 7);
    func_ov123_020ceed8(arg1, arg0 + 0x20);
    func_ov123_020ceed8(arg1, arg0 + 0x38);
}

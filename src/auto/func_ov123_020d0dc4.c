#include "m2c.h"

M2C_UNK func_ov123_020ceed8(M2C_UNK, void *);       /* extern */
s32 func_ov123_020cef0c(M2C_UNK);                   /* extern */

void func_ov123_020d0dc4(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 8)    = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0xC)  = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_ov123_020cef0c(arg1);
    func_ov123_020ceed8(arg1, arg0 + 0x34);
    func_ov123_020ceed8(arg1, arg0 + 0x4C);
}

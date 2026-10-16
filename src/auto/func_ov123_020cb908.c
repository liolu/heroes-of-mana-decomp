#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, s32);          /* extern */
M2C_UNK func_ov123_0209b1a8(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_ov123_020cbb0c();                      /* extern */
M2C_UNK func_ov123_020cc920();                      /* extern */
M2C_UNK func_ov123_020cd788();                      /* extern */
M2C_UNK func_ov123_020ce2c0(s32, s32);              /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020cb908(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7,
                         s32 arg8) {
    data_ov123_020e4790 = arg0;
    func_ov123_020cc920();
    MI_CpuFill8(data_ov123_020e4790, 0, 0xE8C);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xDEC)   = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xDF0)   = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(data_ov123_020e4790, void **, 0xDF8) = arg1;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xDFC)   = 0;
    func_ov123_0209b1a8(data_ov123_020e4790, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    func_ov123_020cd788();
    func_ov123_020ce2c0(arg7, arg8);
    func_ov123_020cbb0c();
}

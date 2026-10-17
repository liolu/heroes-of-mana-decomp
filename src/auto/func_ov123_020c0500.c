/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, M2C_UNK);             /* extern */
s32 func_ov123_02091618();                          /* extern */
s32 func_ov123_020a4ef8();                          /* extern */
M2C_UNK func_ov123_020ada60();                      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c2d6c();                          /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e46a8;
extern M2C_UNK func_ov123_020bac40;
extern M2C_UNK func_ov123_020c0b74;

void func_ov123_020c0500(void) {
    s32 temp_r4;

    temp_r4 = func_ov123_020c2d6c();
    if (func_ov123_02091618() == 0) {
        return;
    }
    MI_CpuCopy8(func_ov123_020a4ef8(), temp_r4 + 0xF0, 0xE);
    MI_CpuCopy8(func_ov123_020a4ef8(), temp_r4 + 0x1F0, 0xE);
    func_ov123_020ada60();
    func_ov123_020c9af4(0);
    func_ov123_020ca3a4(0, 0x15);
    if (data_ov123_020e46a8 == 0) {
        func_ov123_020b23fc(0, 1);
        func_ov123_020b2410(&func_ov123_020bac40);
        return;
    }
    func_ov123_020b23fc(0, 1);
    func_ov123_020b2410(&func_ov123_020c0b74);
}

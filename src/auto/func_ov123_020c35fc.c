/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MATHi_CRC16InitTableRev(s32, s32);          /* extern */
M2C_UNK func_ov123_020a593c(s32);                   /* extern */
s32 func_ov123_020ca510(s32, M2C_UNK);              /* extern */
extern s32 data_ov123_020e46d0;

void func_ov123_020c35fc(void) {
    s32 temp_r0;

    temp_r0             = func_ov123_020ca510(0x6F8, 0x20);
    data_ov123_020e46d0 = temp_r0;
    MATHi_CRC16InitTableRev(temp_r0 + 0x4F8, 0xA001);
    func_ov123_020a593c(data_ov123_020e46d0);
}

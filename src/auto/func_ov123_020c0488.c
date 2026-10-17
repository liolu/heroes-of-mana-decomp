/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020916ac();                      /* extern */
s32 func_ov123_02091744();                          /* extern */
M2C_UNK func_ov123_020aeaa0();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020ba52c();                      /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern s8 data_ov123_020e46a8;
extern M2C_UNK func_ov123_020c05cc;

void func_ov123_020c0488(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_ov123_02091744();
    if (temp_r0 == 0) {
        return;
    }
    func_ov123_020aeaa0();
    func_ov123_020c3658();
    if (temp_r0 > 0) {
        data_ov123_020e46a8 = 1;
        func_ov123_020c36bc(0x11);
    } else {
        func_ov123_020916ac();
        func_ov123_020ba52c();
        func_ov123_020c36bc(0x12);
    }
    func_ov123_020b2410(&func_ov123_020c05cc);
    func_ov123_020cb5f8(0, arg0);
}

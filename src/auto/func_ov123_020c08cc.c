/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020b2370();                          /* extern */
M2C_UNK func_ov123_020b2398(M2C_UNK, s32 *);        /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern u8 data_ov123_020e46ac;
extern M2C_UNK func_ov123_020b316c;
extern M2C_UNK func_ov123_020c0a08;

void func_ov123_020c08cc(void) {
    s32 sp0;
    s32 temp_r0;

    data_ov123_020e46ac += 1;
    if ((u32) data_ov123_020e46ac < 0xB4U) {
        return;
    }
    func_ov123_020b2398(0, &sp0);
    temp_r0 = func_ov123_020b2370();
    if ((temp_r0 != 0) && (temp_r0 == 1) && (sp0 != 0)) {
        func_ov123_020b2410(&func_ov123_020b316c);
        return;
    }
    func_ov123_020b2410(&func_ov123_020c0a08);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2398(M2C_UNK, s32 *);        /* extern */
M2C_UNK func_ov123_020c35d4();                      /* extern */
extern s8 data_ov123_020e4664;
extern s8 data_ov123_020e466c;
extern s16 data_ov123_020e4670;

void func_ov123_020bcf4c(void) {
    s32 sp0;

    func_ov123_020c35d4();
    func_ov123_020b2398(0, &sp0);
    if (sp0 != 0) {
        return;
    }
    data_ov123_020e4670 = 0;
    data_ov123_020e4664 = 0;
    data_ov123_020e466c = 0;
}

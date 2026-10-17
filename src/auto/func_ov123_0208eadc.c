/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a6d8();                          /* extern */
M2C_UNK func_ov123_0207a748(s32);                   /* extern */
extern s32 data_ov123_020e1650;

void func_ov123_0208eadc(void) {
    if (data_ov123_020e1650 == 0) {
        return;
    }
    if (func_ov123_0207a6d8() != 0) {
        return;
    }
    func_ov123_0207a748(data_ov123_020e1650);
    data_ov123_020e1650 = 0;
}

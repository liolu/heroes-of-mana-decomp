/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c52f0();                          /* extern */
extern void *data_ov123_020e4658;
extern M2C_UNK func_ov123_020b9440;

void func_ov123_020b8b30(void) {
    s32 *temp_r3;

    if (func_ov123_020c52f0() != 0) {
        return;
    }
    temp_r3 = M2C_FIELD(data_ov123_020e4658, s32 **, 4);
    *temp_r3 &= 0xC1FFFCFF;
    func_ov123_020b2410(&func_ov123_020b9440);
}

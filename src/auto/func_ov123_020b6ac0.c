/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b6d48();                      /* extern */
M2C_UNK func_ov123_020b6da4();                      /* extern */
M2C_UNK func_ov123_020b6da8();                      /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
extern u16 data_ov123_020e4640;
extern M2C_UNK func_ov123_020b6d04;

void func_ov123_020b6ac0(void) {
    func_ov123_020b6da8();
    func_ov123_020b6da4();
    func_ov123_020b6d48();
    data_ov123_020e4640 += 1;
    if ((u32) data_ov123_020e4640 < 0x438U) {
        return;
    }
    func_ov123_020c3658();
    func_ov123_020b2410(&func_ov123_020b6d04);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020b1cc8();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c536c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_ov123_020e465c;
extern M2C_UNK func_ov123_020b9784;
extern M2C_UNK func_ov123_020b9a60;
extern M2C_UNK func_ov123_020b9c0c;

void func_ov123_020b9cb4(void) {
    u8 temp_r0;

    if (func_ov123_020b1cc8() != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(data_ov123_020e465c, u8 *, 0x15);
    if (temp_r0 == 0) {
        func_ov123_020b2410(&func_ov123_020b9c0c);
        return;
    }
    if (temp_r0 == 2) {
        func_ov123_020c536c(6, 3, 1, -1, 0);
        func_ov123_020b2410(&func_ov123_020b9784);
        return;
    }
    func_ov123_020c536c(0x47, 2, 1, -1, 0);
    func_ov123_020b2410(&func_ov123_020b9a60);
}

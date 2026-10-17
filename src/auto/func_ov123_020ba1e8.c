/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b1ce4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b1cf8(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b1d0c(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b1d70();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020b9dc4(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern void *data_ov123_020e465c;
extern M2C_UNK func_ov123_020ba1bc;

void func_ov123_020ba1e8(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020b1d70();
    func_ov123_020c36bc(0x14);
    if (M2C_FIELD(data_ov123_020e465c, u8 *, 0x14) == 0) {
        func_ov123_020b1d0c(0);
        func_ov123_020b1ce4(0);
    } else {
        if (func_ov123_020b9dc4(0x1A) != 0) {
            func_ov123_020b1cf8(0);
        }
        func_ov123_020b1ce4(0);
    }
    func_ov123_020b2410(&func_ov123_020ba1bc);
}

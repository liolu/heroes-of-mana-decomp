/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b05f0(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b0604(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b0668();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern void *data_ov123_020e4658;
extern M2C_UNK func_ov123_020b9414;

void func_ov123_020b9440(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020b0668();
    func_ov123_020c36bc(0x14);
    if (M2C_FIELD(data_ov123_020e4658, u8 *, 0x29) == 0) {
        func_ov123_020b0604(0);
    }
    if (M2C_FIELD(data_ov123_020e4658, u8 *, 0x29) == 0x20) {
        func_ov123_020b05f0(0);
    }
    func_ov123_020b2410(&func_ov123_020b9414);
}

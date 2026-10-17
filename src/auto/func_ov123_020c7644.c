/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c7518();                          /* extern */
s32 func_ov123_020c75d4();                          /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern void *data_ov123_020e4708;

void func_ov123_020c7644(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_ov123_020c7718();
        func_ov123_020c7738(9);
        return;
    }
    if (M2C_FIELD(data_ov123_020e4708, s32 *, 0x13AC) != 0) {
        if (func_ov123_020c75d4() != 0) {
            return;
        }
        func_ov123_020c7738(9);
        return;
    }
    if (func_ov123_020c7518() != 0) {
        return;
    }
    func_ov123_020c7738(9);
}

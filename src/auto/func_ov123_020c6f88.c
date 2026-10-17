/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0201ace4(void *);                          /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern void *data_ov123_020e4708;

s32 func_ov123_020c6f88(void) {
    if (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) != 6) {
        return 0;
    }
    func_ov123_020c7738(3);
    if (func_0201ace4(data_ov123_020e4708 + 0x1E00) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}

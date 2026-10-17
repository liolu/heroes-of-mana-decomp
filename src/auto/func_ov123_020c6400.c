/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_End(M2C_UNK *);                              /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern void *data_ov123_020e4708;
extern M2C_UNK func_ov123_020c6df0;

s32 func_ov123_020c6400(void) {
    if (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) != 1) {
        func_0200fddc();
    }
    func_ov123_020c7738(3);
    if (WM_End(&func_ov123_020c6df0) == 2) {
        return 1;
    }
    func_ov123_020c7738(9);
    return 0;
}

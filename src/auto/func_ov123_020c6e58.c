/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_Reset(M2C_UNK *);                            /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020c6e24;

s32 func_ov123_020c6e58(void) {
    func_ov123_020c7738(3);
    if (WM_Reset(&func_ov123_020c6e24) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}

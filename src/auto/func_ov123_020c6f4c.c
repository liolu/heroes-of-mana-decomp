/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_EndMP(M2C_UNK *);                            /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020c6f08;

s32 func_ov123_020c6f4c(void) {
    func_ov123_020c7738(3);
    if (WM_EndMP(&func_ov123_020c6f08) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}

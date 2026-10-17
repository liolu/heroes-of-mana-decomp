/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_EndParent(M2C_UNK *);                        /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
extern M2C_UNK func_ov123_020c6fe8;

s32 func_ov123_020c7018(void) {
    if (WM_EndParent(&func_ov123_020c6fe8) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}

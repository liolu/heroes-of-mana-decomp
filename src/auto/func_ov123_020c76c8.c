/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_SetParentParameter(M2C_UNK *, s32);          /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern s32 data_ov123_020e4708;
extern M2C_UNK func_ov123_020c7644;

s32 func_ov123_020c76c8(void) {
    func_ov123_020c7738(3);
    if (WM_SetParentParameter(&func_ov123_020c7644, data_ov123_020e4708) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    func_ov123_020c7738(9);
    return 0;
}

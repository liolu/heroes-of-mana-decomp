/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_Disconnect(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_ov123_020c65ac();                      /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020c6e94;

s32 func_ov123_020c6ec4(void) {
    func_ov123_020c7738(3);
    if (WM_Disconnect(&func_ov123_020c6e94, 0) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    func_ov123_020c65ac();
    return 0;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_StartKeySharing(s32, M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern s32 data_ov123_020e4708;

s32 func_ov123_020c7128(void) {
    func_ov123_020c7738(6);
    if (WM_StartKeySharing(data_ov123_020e4708 + 0x1E00, 0xD) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}

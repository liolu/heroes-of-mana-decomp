/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_Initialize(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern s32 data_ov123_020e4708;
extern M2C_UNK func_ov123_020c6850;

s32 func_ov123_020c68b0(void) {
    func_ov123_020c7738(3);
    if (WM_Initialize(data_ov123_020e4708 + 0x80, &func_ov123_020c6850, 2) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    func_ov123_020c7738(0xA);
    return 0;
}

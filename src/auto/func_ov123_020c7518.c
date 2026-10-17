/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_StartParent(M2C_UNK *);                      /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
extern void *data_ov123_020e4708;
extern M2C_UNK func_ov123_020c736c;

s32 func_ov123_020c7518(void) {
    if ((u32) (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) - 4) <= 2U) {
        return 1;
    }
    if (WM_StartParent(&func_ov123_020c736c) != 2) {
        func_ov123_020c7718();
        return 0;
    }
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x50) = 0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x52) = 1;
    return 1;
}

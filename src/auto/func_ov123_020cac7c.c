/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020cb6c8(M2C_UNK);               /* extern */
extern M2C_UNK SDK_AUTOLOAD_DTCM_START;

void func_ov123_020cac7c(void) {
    func_ov123_020cb6c8(1);
    M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) | 1);
}

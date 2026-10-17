/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208d4cc(s32);                   /* extern */
void *func_ov123_0209d368();                        /* extern */

void func_ov123_020a2f9c(void) {
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 2) {
        return;
    }
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x14) = 0;
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x16) = 0;
    func_ov123_0208d4cc(M2C_FIELD(func_ov123_0209d368(), s32 *, 0x10));
}

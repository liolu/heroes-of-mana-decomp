/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020885ec(s32);                   /* extern */
void *func_ov123_0209d368();                        /* extern */

void func_ov123_0209efa0(void) {
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1A8) = 2;
    func_ov123_020885ec(*M2C_FIELD(func_ov123_0209d368(), s32 **, 4));
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1A8) = 0;
}

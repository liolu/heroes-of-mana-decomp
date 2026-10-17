/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_ov123_02073128();                          /* extern */

s32 func_ov123_02073624(void *arg0, s32 *arg1) {
    u32 temp_r0;

    temp_r0 = func_ov123_02073128();
    if (temp_r0 == 0) {
        return 0;
    }
    *arg1 = ((temp_r0 << 0x18) & 0xFF000000) |
            (((temp_r0 << 8) & 0xFF0000) | ((u8) (temp_r0 >> 0x18) | ((temp_r0 >> 8) & 0xFF00)));
    return 1;
}

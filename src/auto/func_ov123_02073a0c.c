/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_ov123_02073078();                          /* extern */

s32 func_ov123_02073a0c(void) {
    u32 temp_r0;

    temp_r0 = func_ov123_02073078();
    return ((temp_r0 << 0x18) & 0xFF000000) |
           (((temp_r0 << 8) & 0xFF0000) | ((u8) (temp_r0 >> 0x18) | ((temp_r0 >> 8) & 0xFF00)));
}

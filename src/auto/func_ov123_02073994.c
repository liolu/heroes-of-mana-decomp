/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_020730ec(s32, s32);              /* extern */

void func_ov123_02073994(u32 *arg0, u32 *arg1) {
    u32 temp_ip;
    u32 temp_r0;

    temp_ip = *arg1;
    temp_r0 = *arg0;
    func_ov123_020730ec(((temp_r0 << 0x18) & 0xFF000000) |
                            (((temp_r0 << 8) & 0xFF0000) | ((u8) (temp_r0 >> 0x18) | ((temp_r0 >> 8) & 0xFF00))),
                        ((temp_ip << 0x18) & 0xFF000000) |
                            (((temp_ip << 8) & 0xFF0000) | ((u8) (temp_ip >> 0x18) | ((temp_ip >> 8) & 0xFF00))));
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_02067c6c();                          /* extern */
M2C_UNK func_ov123_02067ca0();                      /* extern */
M2C_UNK func_ov123_02067efc();                      /* extern */
M2C_UNK func_ov123_02068294();                      /* extern */
M2C_UNK func_ov123_02091334(M2C_UNK);               /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */
M2C_UNK func_ov123_02093498(u8);                    /* extern */

u8 func_ov123_02092ddc(void) {
    u32 temp_r0;
    u8 var_r5;
    void *temp_r4;

    temp_r4 = func_ov123_020913d8(0x10);
    var_r5  = 9;
    temp_r0 = func_ov123_02067c6c();
    switch (temp_r0) {
        default:
            break;
        case 3:
            var_r5 = M2C_FIELD(temp_r4, u8 *, 0xD0E);
            if (((u32) (M2C_FIELD(temp_r4, u8 *, 0xD0C) << 0x18) >> 0x1E) == 1) {
                var_r5                                                                    = 7;
                M2C_FIELD((temp_r4 + (M2C_FIELD(temp_r4, u8 *, 0xD13) * 4)), s8 *, 0x444) = 0;
            } else if (((u32) var_r5 >= 3U) && ((u32) var_r5 <= 5U)) {
                func_ov123_02093498(var_r5);
            }
            break;
        case 6:
            func_ov123_02068294();
            break;
        case 9:
            func_ov123_02067efc();
            break;
        case 12:
            func_ov123_02067ca0();
            func_ov123_02091334(4);
            var_r5 = 0x11;
            break;
        case 11:
            func_ov123_02091334(0);
            var_r5 = 0x11;
            break;
    }
    return var_r5;
}

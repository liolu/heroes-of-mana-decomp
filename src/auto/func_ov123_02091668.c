#include "m2c.h"

u32 func_ov123_02091360();                          /* extern */
extern void *data_ov123_020e166c;

u8 func_ov123_02091668(void) {
    u32 temp_r0;
    u8 var_r4;

    var_r4 = 0xFF;
    if (data_ov123_020e166c == NULL) {
        return 0xFFU;
    }
    temp_r0 = func_ov123_02091360();
    if ((temp_r0 >= 0xAU) && (temp_r0 <= 0x10U)) {
        var_r4 = M2C_FIELD(data_ov123_020e166c, u8 *, 0x17);
    }
    return var_r4;
}

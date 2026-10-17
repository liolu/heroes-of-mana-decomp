#include "m2c.h"

s32 func_ov004_020c7fec(s32);                       /* extern */

s32 func_ov004_020c7e58(void *arg0) {
    s32 temp_r4;

    temp_r4 = (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x1C)) + 0x14))((*(void **) ((u8 *) arg0 + 0x1C)));
    if ((temp_r4 >=
         (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x1C)) + 0x10))((*(void **) ((u8 *) arg0 + 0x1C)))) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= func_ov004_020c7fec(M2C_FIELD(arg0, s32 *, 0x14)))) {
        return 1;
    }
    return 0;
}

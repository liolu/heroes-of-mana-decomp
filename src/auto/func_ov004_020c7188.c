#include "m2c.h"

s32 func_ov004_020c7188(void *arg0) {
    s32 temp_r4;

    temp_r4 = (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x3C)) + 0xC))((*(void **) ((u8 *) arg0 + 0x3C)));
    if (temp_r4 >= (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x3C)) + 8))((*(void **) ((u8 *) arg0 + 0x3C)))) {
        return 1;
    }
    return 0;
}

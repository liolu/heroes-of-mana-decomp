#include "m2c.h"

s32 func_ov004_020c63f8(void *arg0) {
    s32 temp_r4;

    temp_r4 = (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x24)) + 0x10))((*(void **) ((u8 *) arg0 + 0x24)));
    if (temp_r4 >= (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x24)) + 0xC))((*(void **) ((u8 *) arg0 + 0x24)))) {
        return 1;
    }
    return 0;
}

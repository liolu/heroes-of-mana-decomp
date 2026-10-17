#include "m2c.h"

s32 func_ov004_020c48d8(void *arg0) {
    s32 temp_r4;

    temp_r4 = (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x48)) + 0xC))((*(void **) ((u8 *) arg0 + 0x48)));
    if (temp_r4 >= (*(s32(**)(void *))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x48)) + 8))((*(void **) ((u8 *) arg0 + 0x48)))) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

s32 func_ov004_020b9d08(void *arg0) {
    s32 *p                        = *(s32 **) ((u8 *) arg0 + 0xC);
    s32 v                         = *p++;
    *(s32 **) ((u8 *) arg0 + 0xC) = p;
    return v;
}

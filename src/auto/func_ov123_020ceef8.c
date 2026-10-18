#include "m2c.h"

s16 func_ov123_020ceef8(void *arg0) {
    s16 *p                        = *(s16 **) ((u8 *) arg0 + 0xC);
    s16 v                         = *p++;
    *(s16 **) ((u8 *) arg0 + 0xC) = p;
    return v;
}

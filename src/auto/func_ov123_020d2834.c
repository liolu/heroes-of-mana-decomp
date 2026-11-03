#include "m2c.h"

void OS_GetOwnerInfo(void *);

u8 func_ov123_020d2834(void) {
    u8 buf[0x50];

    OS_GetOwnerInfo(buf);
    return buf[1];
}

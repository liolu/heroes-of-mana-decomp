#include "m2c.h"

s32 OS_GetThreadPriority(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

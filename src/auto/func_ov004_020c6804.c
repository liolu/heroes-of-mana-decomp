#include "m2c.h"

s32 func_ov004_020c6804(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x10)) {
        return 1;
    }
    return 0;
}

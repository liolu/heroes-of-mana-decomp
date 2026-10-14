#include "m2c.h"

extern u16 data_0203b000;

s32 func_0201867c(void) {
    if (data_0203b000 != 0) {
        return 0;
    }
    return 3;
}

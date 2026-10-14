#include "m2c.h"

extern s32 data_020376c4;

s32 func_02005234(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020376c4;
    data_020376c4 = arg0;
    return temp_r2;
}

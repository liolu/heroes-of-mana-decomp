/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov000_02051138;
extern void *data_ov000_02051550;

s32 DoingScrolWindow(void) {
    M2C_UNK var_r0;

    if (M2C_FIELD(data_ov000_02051550, s8 *, 0x454) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}

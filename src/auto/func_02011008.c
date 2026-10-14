#include "m2c.h"

s32 func_02010f90();                                /* extern */
s32 func_02010fcc();                                /* extern */

s32 func_02011008(void) {
    s32 temp_r4;

    temp_r4 = func_02010f90();
    return (0x100 - temp_r4) - func_02010fcc();
}

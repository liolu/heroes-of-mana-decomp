/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetCreateUnitSpeed(void *arg0, void *arg1) {
    s32 var_r2;
    u32 temp_r1;
    void *temp_r0;

    temp_r0 = arg0;
    temp_r1 = (u32) arg1;
    var_r2 = 3;
    switch (temp_r1) {
    default:
        break;
    case 6:
    case 7:
        if (M2C_FIELD(temp_r0, u16 *, 0x2B0) & 4) {
            var_r2 = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(temp_r0, u16 *, 0x2B0) & 0x20) {
            var_r2 = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(temp_r0, u16 *, 0x2B0) & 0x10) {
            var_r2 = 1;
        }
        break;
    case 3:
        if (M2C_FIELD(temp_r0, u16 *, 0x2B0) & 0x100) {
            var_r2 = 1;
        }
        break;
    case 4:
        if (M2C_FIELD(temp_r0, u16 *, 0x2B0) & 0x200) {
            var_r2 = 1;
        }
        break;
    }
    return var_r2;
}

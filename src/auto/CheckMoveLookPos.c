/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_ov000_02051548;

s32 CheckMoveLookPos(void) {
    u8 *p = data_ov000_02051548;

    if (*(s32 *) (p + 0x210) != 0 || *(s32 *) (p + 0x218) != 0 || *(s32 *) (p + 0x220) != 0) {
        return 0;
    }
    return *(s32 *) (p + 0x1CC) == 0;
}

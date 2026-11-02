/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_020913d8(s32);

s8 func_ov123_02093594(s32 arg0) {
    u8 i;
    u8 count;
    u16 mask;

    mask = *(u16 *) ((u8 *) func_ov123_020913d8(0x10) + 0xD16);
    if (mask == 0) {
        return -1;
    }
    i     = 0;
    count = 0;
    do {
        if (mask & (1 << i)) {
            if (count == arg0) {
                return (s8) i;
            }
            count++;
        }
        i++;
    } while (i < 13);
    return -1;
}

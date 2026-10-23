#include "m2c.h"
void func_ov004_020c26f0(s32);
extern u8 data_ov004_020cfaf0[];
void func_ov004_020cb6f8(void) {
    s32 i = 0;
    if (*(s32 *) (data_ov004_020cfaf0 + 0x650) <= 0) {
        return;
    }
    do {
        func_ov004_020c26f0((*(s32 **) (data_ov004_020cfaf0 + 0x654))[i]);
        i += 1;
    } while (i < *(s32 *) (data_ov004_020cfaf0 + 0x650));
}

#include "m2c.h"

extern s16 data_02035aac;
extern s16 data_0203857c;

void func_020095c4(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02035aac       = 0;
    data_0203857c       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}

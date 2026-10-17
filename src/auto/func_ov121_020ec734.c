#include "m2c.h"

M2C_UNK GameSoftReset();                      /* extern */

void func_ov121_020ec734(void) {
    if ((u16) (((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF) != 0x30C) {
        return;
    }
    GameSoftReset();
}

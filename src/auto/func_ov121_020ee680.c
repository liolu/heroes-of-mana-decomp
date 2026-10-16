#include "m2c.h"

s32 WM_GetLinkLevel();                              /* extern */
M2C_UNK func_ov121_020eaea8(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */

void func_ov121_020ee680(void) {
    func_ov121_020eaea8(8, 8, WM_GetLinkLevel() + 0x5C, 1);
}

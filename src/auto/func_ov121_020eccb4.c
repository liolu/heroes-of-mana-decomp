#include "m2c.h"

s32 CallTrsForLoop();                          /* extern */
s32 func_ov121_020ece28();                          /* extern */
extern M2C_UNK data_ov121_020f6d60;

s32 func_ov121_020eccb4(void) {
    s32 temp_r0;

    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) = (s32) (M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) | 0x02000000);
loop_1:
    temp_r0 = func_ov121_020ece28();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (CallTrsForLoop() == 0) {
        return 0xF;
    }
    goto loop_1;
}

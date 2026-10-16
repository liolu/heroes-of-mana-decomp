#include "m2c.h"

M2C_UNK func_ov000_020464a8();                      /* extern */
M2C_UNK func_ov122_02055808();                      /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_02055684(s32 arg0) {
    s32 var_r5;

    var_r5 = arg0;
    do {
        if (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) << 0x19) >> 0x1F) != 0) {
            func_ov122_02055808();
        } else {
            func_ov000_020464a8();
        }
        var_r5 -= 1;
    } while (var_r5 != 0);
}

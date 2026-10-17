#include "m2c.h"

s32 func_ov122_02055af0();                          /* extern */
M2C_UNK func_ov122_0205ce60(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020d3344();                      /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_0205d9d0(void *arg0, u32 arg1) {
    s32 temp_r0;
    s32 var_r5;

    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) & ~0x80);
    switch (arg1) {
        default:
            break;
        case 0:
            func_ov122_0205ce60(1, 0x80000000);
            break;
        case 2:
            func_ov122_0205ce60(0x400000, 0x80000000);
            break;
        case 3:
            func_ov122_0205ce60(0x800000, 0x80000000);
            break;
        case 1:
            func_ov122_0205ce60(0x01000000, 0x80000000);
            break;
        case 4:
            func_ov122_0205ce60(2, 0x80000000);
            break;
    }
    var_r5 = 1;
    do {
        func_ov123_020d3344();
        temp_r0 = func_ov122_02055af0();
        if ((temp_r0 != 1) && (temp_r0 != 2)) {

        } else {
            var_r5 = 0;
        }
    } while (var_r5 != 0);
}

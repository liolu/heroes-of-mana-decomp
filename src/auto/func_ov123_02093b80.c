/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02067c6c();                          /* extern */
s32 func_ov123_02091360();                          /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */
s32 func_ov123_02093980();                          /* extern */
s32 func_ov123_020939cc(void *);                    /* extern */
s32 func_ov123_020939e8(void *);                    /* extern */
s32 func_ov123_02093a54();                          /* extern */
s32 func_ov123_02093a8c(void *);                    /* extern */
s32 func_ov123_02093b1c(void *);                    /* extern */
M2C_UNK func_ov123_02098674();                      /* extern */
M2C_UNK func_ov123_020986f4();                      /* extern */

s32 func_ov123_02093b80(void) {
    s32 var_r5;
    u32 temp_r0;
    void *temp_r4;

    var_r5  = func_ov123_02091360();
    temp_r4 = func_ov123_020913d8(0x10);
    if (func_ov123_02067c6c() == 9) {
        temp_r0 = var_r5 - 0xA;
        switch (temp_r0) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                var_r5 = func_ov123_02093b1c(temp_r4);
                break;
            case 2:                                     /* switch 1 */
                var_r5 = func_ov123_02093a8c(temp_r4);
                break;
            case 3:                                     /* switch 1 */
                var_r5 = func_ov123_02093a54();
                break;
            case 4:                                     /* switch 1 */
                var_r5 = func_ov123_020939e8(temp_r4);
                break;
            case 5:                                     /* switch 1 */
                var_r5 = func_ov123_020939cc(temp_r4);
                break;
            case 1:                                     /* switch 1 */
                var_r5 = func_ov123_02093980();
                break;
        }
    } else {
        switch (var_r5) {                           /* switch 2; irregular */
            case 15:                                    /* switch 2 */
                var_r5 = func_ov123_020939cc(temp_r4);
                break;
            case 11:                                    /* switch 2 */
                var_r5 = func_ov123_02093980();
                break;
            case 14:                                    /* switch 2 */
                func_ov123_02098674();
                func_ov123_020986f4();
            /* fallthrough */
            default:                                    /* switch 2 */
                var_r5                                                                    = 0xB;
                M2C_FIELD((temp_r4 + (M2C_FIELD(temp_r4, u8 *, 0xD13) * 4)), s8 *, 0x444) = 2;
                break;
        }
    }
    return var_r5;
}

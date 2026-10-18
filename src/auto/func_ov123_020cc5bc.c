#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cbfcc(void *);                /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020cc5bc(s32 arg0, volatile void *arg1) {
    s32 temp_r0;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    u32 temp_r1;
    void *var_r4;
    void *var_r5;
    void *var_r6;

    var_r4 = NULL;
    var_r5 = NULL;
    var_r6 = NULL;
    if (arg0 != 0) {
        var_r4  = arg1;
        temp_r0 = M2C_FIELD(var_r4, s32 *, 8);
        switch (temp_r0) {                          /* switch 1; irregular */
            case 0xCA:                                  /* switch 1 */
                var_r6 = arg1;
                break;
            case 0xC9:                                  /* switch 1 */
                var_r5 = arg1;
                break;
        }
    }
    OS_LockMutex(data_ov123_020e4790 + 0xE0C);
    temp_r1 = M2C_FIELD(data_ov123_020e4790, u32 *, 0xE08);
    switch (temp_r1) {                              /* switch 2 */
        default:                                        /* switch 2 */
            break;
        case 4:                                         /* switch 2 */
            func_ov123_020cbfcc(var_r4);
            break;
        case 5:                                         /* switch 2 */
            var_r3                                       = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            if ((var_r5 == NULL) || (M2C_FIELD(var_r5, s32 *, 0xC) != M2C_FIELD(data_ov123_020e4790, s32 *, 0xE3C))) {
                var_r3 = 0;
            }
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = var_r3;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            break;
        case 6:                                         /* switch 2 */
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 0;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            if (var_r5 != NULL) {
                M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
                M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = (s32) M2C_FIELD(var_r5, s32 *, 0xC);
            }
            break;
        case 7:                                         /* switch 2 */
            var_r3_2                                     = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            if (var_r5 == NULL) {
                var_r3_2 = 0;
            }
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = var_r3_2;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            break;
        case 8:                                         /* switch 2 */
            var_r3_3                                     = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            if (var_r5 == NULL) {
                var_r3_3 = 0;
            }
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = var_r3_3;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            break;
        case 9:                                         /* switch 2 */
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 0;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            if (var_r5 != NULL) {
                M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
                M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = (s32) M2C_FIELD(var_r5, s32 *, 0xC);
            } else if (var_r6 != NULL) {
                if (M2C_FIELD(var_r6, s32 *, 0xC) == 3) {
                    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
                }
            }
            break;
        case 10:                                        /* switch 2 */
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 0;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            if (var_r5 != NULL) {
                M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
                M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = (s32) M2C_FIELD(var_r5, s32 *, 0xC);
            } else if (var_r6 != NULL) {
                if (M2C_FIELD(var_r6, s32 *, 0xC) == 2) {
                    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
                }
            }
            break;
        case 11:                                        /* switch 2 */
            var_r3_4                                     = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            if (var_r5 == NULL) {
                var_r3_4 = 0;
            }
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = var_r3_4;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            break;
    }
    func_0200e644(data_ov123_020e4790 + 0xE0C);
}

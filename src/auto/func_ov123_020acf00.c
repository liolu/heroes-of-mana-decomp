/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_0200e0a4(s32);                         /* extern */
s32 func_ov123_020ad070();                          /* extern */
s32 func_ov123_020ad300();                          /* extern */
extern void (*data_ov123_020e303c)(s32);
extern s32 data_ov123_020e3084;

s32 func_ov123_020acf00(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (func_ov123_020ad300() != 0) {
        do {
            func_0200e0a4(0xA);
            var_r0 = func_ov123_020ad070();
            if (var_r0 != 0) {
                do {
                    switch (var_r0) {               /* irregular */
                        case 4:
                        case 5:
                            break;
                        case 20:
                            var_r5 = 0;
                            break;
                        default:
                            var_r5 = 0;
                            break;
                    }
                    var_r0 = func_ov123_020ad070();
                } while (var_r0 != 0);
            }
        } while (var_r5 != 0);
    }
    if (data_ov123_020e3084 != 0) {
        data_ov123_020e303c(data_ov123_020e3084);
        data_ov123_020e3084 = 0;
    }
    return 1;
}

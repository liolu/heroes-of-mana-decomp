/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_0200e0a4(s32);                         /* extern */
M2C_UNK func_ov123_020736b4();                      /* extern */
s32 func_ov123_020ad070();                          /* extern */
s32 func_ov123_020ad368();                          /* extern */
extern s32 data_ov123_020e3050;
extern s32 data_ov123_020e3054;

void func_ov123_020acd44(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (data_ov123_020e3050 != 0) {
        if (func_ov123_020ad368() != 0) {
            do {
                func_0200e0a4(0xA);
                var_r0 = func_ov123_020ad070();
                if (var_r0 != 0) {
                    do {
                        switch (var_r0) {           /* irregular */
                            case 4:
                            case 5:
                                break;
                            case 14:
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
        data_ov123_020e3050 = 0;
    }
    if (data_ov123_020e3054 != 0) {
        data_ov123_020e3054 = 0;
        func_ov123_020736b4();
    }
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_0206c9a8(void *, s32, void *, s32, void *);
void func_ov123_0206f2d4(void *, s32, void *);
void func_ov123_0206f414(void *, s32, void *);
s32 func_ov123_020741c8(void *, s32, void *, s32, void *);
extern u8 OSi_ThreadInfo[];
extern u8 data_ov123_020df1c4;
s32 func_ov123_0206c8bc(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 var_r0;
    u8 temp_ip;
    u8 *temp_r4;

    temp_r4 = *(u8 **) (*(u8 **) (OSi_ThreadInfo + 4) + 0xA4);
    if (temp_r4 != NULL) {
        temp_ip = temp_r4[8];
        if (temp_ip == 0xA) {
            if (arg1 != 0) {
                func_ov123_0206f2d4(arg0, arg1, temp_r4);
            }
            if (arg3 != 0) {
                func_ov123_0206f2d4(arg2, arg3, temp_r4);
            }
            var_r0 = arg1 + arg3;
        } else if (temp_ip == 0xB) {
            if (arg1 != 0) {
                func_ov123_0206f414(arg0, arg1, temp_r4);
            }
            if (arg3 != 0) {
                func_ov123_0206f414(arg2, arg3, temp_r4);
            }
            var_r0 = arg1 + arg3;
        } else if (temp_r4[9] != 0) {
            var_r0 = func_ov123_020741c8(arg0, arg1, arg2, arg3, temp_r4);
        } else {
            var_r0 = func_ov123_0206c9a8(arg0, arg1, arg2, arg3, temp_r4);
        }
        if (data_ov123_020df1c4 == 0) {
            return var_r0;
        }
    }
    return 0;
}

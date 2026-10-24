/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_0207b0f4(s32, s32, s32 *, s32 *);
void func_ov123_0207e68c(s32, s32, s32);
void func_ov123_0208608c(s32, s32, void *);
void func_ov123_0208655c(s32, void *);
extern u8 data_ov123_020db294;
extern u8 data_ov123_020db2a8;
extern u8 data_ov123_020db2e0;
extern u8 data_ov123_020db2f8;

s32 func_ov123_02086288(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp0;
    s32 sp4;
    s32 t;

    sp0 = 0;
    sp4 = 0;
    t   = func_ov123_0207b0f4(arg1, 0, &sp0, &sp4);
    if (t == -1) {
        func_ov123_0208655c(arg0, &data_ov123_020db294);
        func_ov123_0208608c(arg0, 5, &data_ov123_020db2a8);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    if (t > 0) {
        if (sp4 != 0) {
            func_ov123_0208655c(arg0, &data_ov123_020db2e0);
            *arg2 = 4;
            return 0;
        }
        if (sp0 != 0) {
            func_ov123_0208655c(arg0, &data_ov123_020db2f8);
            *arg2 = 3;
            return 0;
        }
    }
    *arg2 = 0;
    return 0;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_02086288(s32 *, s32, s32 *);
void func_ov123_0208608c(s32 *, s32, char *);
void func_ov123_0207e68c(s32 *, s32, s32);
void func_02020d04(char *, char *, s32, s32);
extern char data_ov123_020da384[];
extern char data_ov123_020da3ac[];
extern char data_ov123_020da3c4[];
s32 func_ov123_0207ea0c(s32 *a) {
    s32 st;
    u8 *obj;
    obj = (u8 *) a[0];
    if (func_ov123_02086288(a, *(s32 *) (obj + 0x1d4), &st) != 0) {
        return;
    }
    if (st == 4) {
        func_ov123_0208608c(a, 0x107, data_ov123_020da384);
        func_ov123_0207e68c(a, 4, 1);
        return 4;
    }
    if (st == 0) {
        return 0;
    }
    if (st != 3) {
        func_02020d04(data_ov123_020da3ac, data_ov123_020da3c4, 0, 0x2ef);
    }
    *(s32 *) (obj + 0x1d8) = 2;
    return 0;
}

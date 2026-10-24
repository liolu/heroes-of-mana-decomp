/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct S {
    u8 on;
    u8 b1;
    u8 b2;
    u8 b3;
    u32 w4;
    s32 w8;
    s32 wc;
    s64 t10;
    s64 t18;
} S;
extern S *data_ov123_020e18e0;
s64 func_0200f510(void);
void func_ov123_0209e364(int arg0) {
    if (data_ov123_020e18e0 == 0) {
        return;
    }
    if (*(volatile u8 *) data_ov123_020e18e0 == 0) {
        return;
    }
    data_ov123_020e18e0->w8  = 0;
    data_ov123_020e18e0->wc  = 0;
    data_ov123_020e18e0->b2  = 0;
    data_ov123_020e18e0->t18 = func_0200f510();
    if (arg0 != 0) {
        return;
    }
    data_ov123_020e18e0->t10 = func_0200f510();
}

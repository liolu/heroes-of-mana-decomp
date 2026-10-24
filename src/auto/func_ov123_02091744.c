/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0200fa98(void);
void func_0200faac(s32);
s32 func_ov123_02091208(void);
void func_ov123_020912a8(void);
u32 func_ov123_02091360(void);
void func_ov123_02091374(u32);
u32 func_ov123_020925cc(void);
u32 func_ov123_0209296c(void);
u32 func_ov123_02092ddc(void);
u32 func_ov123_02093634(void);
u32 func_ov123_02093708(void);
u32 func_ov123_02093b80(void);

s32 func_ov123_02091744(void) {
    s32 saved;
    s32 res;
    u32 st;

    st = func_ov123_02091360();
    if (st == 1) {
        st = func_ov123_02093708();
    } else if (st < 7U) {
        saved = func_0200fa98();
        st    = func_ov123_02093634();
        func_ov123_02091374(st);
        func_0200faac(saved);
    } else if (st < 9U) {
        st = func_ov123_020925cc();
    } else if (st < 0xAU) {
        st = func_ov123_02092ddc();
    } else if (st < 0x10U) {
        st = func_ov123_02093b80();
    } else if (st == 0x11) {
        st = func_ov123_0209296c();
    }
    func_ov123_02091374(st);
    if (st == 0x10) {
        res = func_ov123_02091208();
        func_ov123_020912a8();
        return res;
    }
    if (st != 0x12) {
        return 0;
    }
    func_ov123_020912a8();
    return -1;
}

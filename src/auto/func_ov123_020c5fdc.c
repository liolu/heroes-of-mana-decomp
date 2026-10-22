/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s32 func_0200fa98();
extern void func_0200faac(s32);
extern s32 func_0201b10c(s32, s32);
extern void MB_DisconnectChild(s32);
extern void *data_ov123_020e46e8;
void func_ov123_020c5fdc(s32 arg0) {
    u16 m;
    s32 m2;
    s32 old;
    if (func_0201b10c(arg0, 0) == 0) {
        m   = ~(1 << arg0);
        old = func_0200fa98();
        M2C_FIELD(data_ov123_020e46e8, u16 *, 2) &= m;
        M2C_FIELD(data_ov123_020e46e8, u16 *, 4) &= m;
        M2C_FIELD(data_ov123_020e46e8, u16 *, 6) &= m;
        M2C_FIELD(data_ov123_020e46e8, u16 *, 8) &= m;
        M2C_FIELD(data_ov123_020e46e8, u16 *, 0xA) &= m;
        M2C_FIELD(data_ov123_020e46e8, u16 *, 0xC) &= m;
        func_0200faac(old);
        MB_DisconnectChild(arg0);
        return;
    }
    old = func_0200fa98();
    m2  = ~(1 << arg0);
    M2C_FIELD(data_ov123_020e46e8, u16 *, 4) &= m2;
    M2C_FIELD(data_ov123_020e46e8, u16 *, 2) &= m2;
    func_0200faac(old);
}

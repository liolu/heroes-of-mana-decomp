/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u16 a[8];
} T;
extern T *data_ov123_020e46e8;
s32 func_0201b10c(s32, s32);
s32 func_0200fa98(void);
void func_0200faac(s32);
void MB_DisconnectChild(s32);
void func_ov123_020c60c0(s32 aid) {
    u16 mask;
    s32 en;
    if (func_0201b10c(aid, 1) != 0) {
        return;
    }
    mask = (u16) ~(1 << aid);
    en   = func_0200fa98();
    data_ov123_020e46e8->a[1] &= mask;
    data_ov123_020e46e8->a[2] &= mask;
    data_ov123_020e46e8->a[3] &= mask;
    data_ov123_020e46e8->a[4] &= mask;
    data_ov123_020e46e8->a[5] &= mask;
    data_ov123_020e46e8->a[6] &= mask;
    func_0200faac(en);
    MB_DisconnectChild(aid);
}

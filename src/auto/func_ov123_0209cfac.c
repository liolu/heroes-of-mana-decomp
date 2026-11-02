/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_02099524(s32, s32);
void func_ov123_0209cb64(void);
extern u8 *data_ov123_020e18dc;

void func_ov123_0209cfac(s32 a, s32 b) {
    u8 *g;
    void (*fn)(s32, s32, s32);

    if (data_ov123_020e18dc == NULL) {
        return;
    }
    if (a == 0) {
        return;
    }
    func_ov123_02099524(a, b);
    g = data_ov123_020e18dc;
    if (*(s32 *) g != 0) {
        if (*(s32 *) g != 2) {
            fn = *(void (**)(s32, s32, s32))(g + 0x2c);
            fn(a, g[0x1d], *(s32 *) (g + 0x30));
        }
    }
    func_ov123_0209cb64();
}

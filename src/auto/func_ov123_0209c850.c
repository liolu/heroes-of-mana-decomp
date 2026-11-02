/* compiler: 1.2/sp3 */
#include "m2c.h"

void MI_CpuFill8(s32, s32, s32);
extern u8 *data_ov123_020e18dc;

void func_ov123_0209c850(u8 *base, s32 idx, s32 x) {
    u8 *g;
    void (*fn)(s32, s32, s32);

    if (data_ov123_020e18dc == NULL) {
        return;
    }
    MI_CpuFill8((s32) (base + idx * 12), 0, 12);
    g  = data_ov123_020e18dc;
    fn = *(void (**)(s32, s32, s32))(g + 0x3c);
    if (fn == NULL) {
        return;
    }
    fn(idx, x, *(s32 *) (g + 0x40));
}

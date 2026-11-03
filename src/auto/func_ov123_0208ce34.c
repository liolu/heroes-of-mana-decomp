/* compiler: 1.2/sp3 */
/* near start: 13 diffs with profile "1.2/sp3" */
#include "m2c.h"

s32 sscanf(void *, void *, u32 *, s32 *);
extern u8 data_ov123_020db78c;

void func_ov123_0208ce34(u8 *arg0, void *arg1) {
    u32 a;
    s32 b;
    u32 sw;
    u16 hw;

    sscanf(arg1, &data_ov123_020db78c, &a, &b);
    hw = (u16) b;
    a  = ((a >> 0x18) & 0xFF) | ((a >> 8) & 0xFF00) | ((a << 8) & 0xFF0000) | ((a << 0x18) & 0xFF000000);
    if (a == 0) {
        return;
    }
    if (hw == 0) {
        return;
    }
    if (*(u32 *) (arg0 + 0x104) == a && *(u16 *) (arg0 + 0x108) == hw) {
        return;
    }
    *(u32 *) (arg0 + 0x104) = a;
    *(u16 *) (arg0 + 0x108) = hw;
    ((void (*)(u32, u32, s32)) * (void **) (arg0 + 0xA8))(a, hw, *(s32 *) (arg0 + 0x10C));
}

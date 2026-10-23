/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_02069670(s32 *, s32, s32, s32, s32);
void func_ov123_0206ae78(s32 *, s32, s32, s32, s32, s32, s32);
void func_ov123_0206adcc(s32 *obj, s32 x, s32 y, s32 c, s32 flags, s32 last) {
    s32 sz[3];
    func_ov123_02069670(sz, obj[1], obj[2], obj[3], last);
    if (flags & 0x10) {
        x -= (sz[0] + 1) / 2;
    } else if (flags & 0x20) {
        x -= sz[0];
    }
    if (flags & 2) {
        y -= (sz[1] + 1) / 2;
    } else if (flags & 4) {
        y -= sz[1];
    }
    func_ov123_0206ae78(obj, x, y, sz[0], c, flags, last);
}

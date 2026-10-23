/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    s32 state;
    u8 pad2[0x9c - 0x10];
    s32 h;
} O;
s32 func_ov123_0208a4c8(O *, s32, s32);
s32 func_ov123_0207a204(s32);
s32 func_ov123_02087850(O *, s32, s32, s32, s32);
s32 func_ov123_02087c18(O *, s32, s32, s32);
s32 func_ov123_0208a248(O *o, s32 a, s32 b) {
    s32 st = o->state;
    if (st != 5 && st != 6) {
        if (func_ov123_0208a4c8(o, a, b) == 0) {
            return 0;
        }
    } else {
        if (func_ov123_0207a204(o->h) != 0) {
            return func_ov123_02087850(o, 0, a, b, 1) != 0;
        }
        if (func_ov123_02087c18(o, a, b, 1) == 0) {
            return 0;
        }
    }
    return 1;
}

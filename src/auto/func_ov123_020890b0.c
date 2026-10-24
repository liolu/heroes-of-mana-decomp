/* compiler: 1.2/sp3 */
#include "m2c.h"
M2C_UNK func_ov123_0207b3f4(void);
s32 func_ov123_0207a204(s32 *);
void func_ov123_0207a140(s32 *, void *);
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} T;
s32 func_ov123_020890b0(u8 *o, s16 h, s32 v) {
    T t = {0, 0, 0, 0};
    s32 n;
    t.a           = *(s32 *) (o + 0x58);
    t.b           = v;
    *(s16 *) &t.c = h;
    t.d           = (s32) func_ov123_0207b3f4();
    n             = func_ov123_0207a204(*(s32 **) (o + 0x60));
    func_ov123_0207a140(*(s32 **) (o + 0x60), &t);
    return n + 1 == func_ov123_0207a204(*(s32 **) (o + 0x60));
}

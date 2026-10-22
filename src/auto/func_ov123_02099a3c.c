/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    s32 f0;
    u16 type;
    u16 f6;
} S;

s32 func_ov123_02067c6c();
s32 func_ov123_02091744();
extern S *data_ov123_020e172c;

void func_ov123_02099a3c(void) {
    S *s = data_ov123_020e172c;
    u16 t;
    if (s == NULL) {
        return;
    }
    t = s->type;
    if (t == 2) {
        data_ov123_020e172c->f0 = func_ov123_02091744();
        return;
    }
    if (t != 4) {
        return;
    }
    if (s->f6 == 0) {
        return;
    }
    if (func_ov123_02067c6c() == 9) {
        return;
    }
    data_ov123_020e172c->f6   = 0;
    data_ov123_020e172c->type = 6;
}

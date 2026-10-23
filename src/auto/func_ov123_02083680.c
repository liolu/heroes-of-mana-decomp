#include "m2c.h"
typedef struct {
    s32 a, b;
    s32 *c;
    s32 d;
} A;
extern void func_ov123_020836cc(void);
extern void func_ov123_02083618(void *o, void *cb, A *s);
s32 func_ov123_02083680(void *o, s32 a, s32 b, s32 *c) {
    A s;
    s.a = a;
    s.d = 0;
    s.b = b;
    s.c = c;
    func_ov123_02083618(o, func_ov123_020836cc, &s);
    if (s.d == 0) {
        *c = 0;
    }
    return 0;
}

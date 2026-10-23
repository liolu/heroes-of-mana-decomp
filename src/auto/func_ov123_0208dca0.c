/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct S {
    s32 p0;
    s32 f4;
    s32 p8;
    s32 pc;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
} S;
s32 func_ov123_0208e374(void *);
void func_ov123_0208e11c(S *, s32);

void func_ov123_0208dca0(S *s) {
    while (s->f10 < s->f4 && s->f1c > 0) {
        func_ov123_0208e11c(s, func_ov123_0208e374(&s->f14));
    }
}

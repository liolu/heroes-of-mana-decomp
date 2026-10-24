/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S {
    u8 pad0[0x456];
    u8 f456;
    u8 pad1[0x824 - 0x457];
    s32 f824;
    s32 f828;
    s32 f82c;
} S;
typedef struct A {
    u8 pad[0xC];
    S *p;
} A;

s32 func_ov123_02075310(void *);
void func_ov123_020754d0(void *, s32);
s32 func_ov123_0207575c(s32, s32, void *);
extern void (*data_ov123_020df210)(s32);

s32 func_ov123_02074578(s32 *out, A *a) {
    S *s = a->p;
    if (s->f824 != 0 && s->f456 == 0) {
        if (func_ov123_0207575c(s->f824 + s->f82c, s->f828 - s->f82c, a) != 0) {
            data_ov123_020df210(s->f824);
            s->f824 = 0;
            *out    = 0;
            return 0;
        }
        func_ov123_020754d0(s, s->f824);
        if (s->f456 == 0) {
            s->f824 = 0;
        }
    }
    if (s->f824 == 0) {
        do {
            if (func_ov123_02075310(a) == 9) {
                *out = 0;
                return 0;
            }
        } while (s->f824 == 0);
    }
    *out = s->f828 - s->f82c;
    return s->f824 + s->f82c;
}

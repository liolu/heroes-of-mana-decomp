#include "m2c.h"
s32 func_ov004_020bb6f0(void);
typedef struct {
    u16 a;
    u16 pad;
    s32 b;
    s32 c;
} E;
typedef struct {
    s32 x;
    s32 y;
    s32 n;
    E *e;
} S;
s32 func_ov004_020bb6ac(S *arg0) {
    s32 i = func_ov004_020bb6f0();
    if (i >= arg0->n) {
        return 0;
    }
    arg0->e[i].a += 1;
    return arg0->e[i].b;
}

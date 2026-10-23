#include "m2c.h"
typedef struct B {
    u32 a : 3;
    u32 b : 3;
    u32 c : 3;
    u32 d : 1;
    u32 e : 2;
} B;
extern B data_ov115_020e8d20;
void func_ov115_020e2534(void) {
    B *p = &data_ov115_020e8d20;
    p->a = 2;
    p->b = 4;
    p->c = 4;
    p->d = 0;
    p->e = 0;
}

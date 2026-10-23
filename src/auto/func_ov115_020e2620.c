#include "m2c.h"
typedef struct Src {
    u32 a : 3;
    u32 b : 3;
    u32 c : 3;
    u32 d : 1;
    u32 rest : 22;
} Src;
typedef struct Dst {
    u32 a : 3;
    u32 b : 3;
    u32 c : 3;
    u32 d : 4;
    u32 rest : 19;
} Dst;
typedef struct G {
    u8 pad[0x2c];
    u8 *p;
} G;
extern G *data_0203673c;
extern Src data_ov115_020e8d20;
void func_ov115_020e2620(void) {
    ((Dst *) (data_0203673c->p + 0x108c - 0x0))->a = data_ov115_020e8d20.a;
    ((Dst *) (data_0203673c->p + 0x108c))->b       = data_ov115_020e8d20.b;
    ((Dst *) (data_0203673c->p + 0x108c))->c       = data_ov115_020e8d20.c;
    ((Dst *) (data_0203673c->p + 0x108c))->d       = data_ov115_020e8d20.d << 1;
}

#include "m2c.h"
typedef struct Src {
    u32 a : 3;
    u32 b : 3;
    u32 c : 3;
    u32 e : 4;
    u32 rest : 19;
} Src;
typedef struct Dst {
    u32 a : 3;
    u32 b : 3;
    u32 c : 3;
    u32 d : 1;
    u32 e : 2;
    u32 rest : 20;
} Dst;
typedef struct G {
    u8 pad[0x2c];
    u8 *p;
} G;
extern G *data_0203673c;
extern Dst data_ov115_020e8d20;
void func_ov115_020e2568(void) {
    data_ov115_020e8d20.a = ((Src *) (data_0203673c->p + 0x108c))->a;
    data_ov115_020e8d20.b = ((Src *) (data_0203673c->p + 0x108c))->b;
    data_ov115_020e8d20.c = ((Src *) (data_0203673c->p + 0x108c))->c;
    data_ov115_020e8d20.d = (((Src *) (data_0203673c->p + 0x108c))->e & 2) >> 1;
    data_ov115_020e8d20.e = 0;
}

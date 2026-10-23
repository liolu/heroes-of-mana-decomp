/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct L {
    u32 pad : 25;
    u32 flag : 1;
    u32 rest : 6;
    u32 p4;
    u32 p8;
    u32 pc;
    s32 f10;
    u32 p14;
    void *f18;
} L;
void func_ov004_020cb1dc(void *);

void SetAndGoLoopFlag(L *l, u32 flag, s32 v) {
    void *t = l->f18;
    if (t != NULL) {
        func_ov004_020cb1dc(t);
    } else {
        l->flag = flag;
        l->f10  = v;
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct E {
    u32 f : 1;
    u32 r : 31;
    u8 pad[0x30];
} E;
typedef struct G {
    u8 pad[0x24];
    E *e;
} G;
u32 func_0200273c(E *, s32);
extern G *data_0203673c;
void RestoreUpDownParaUD_ST(void) {
    E *p;
    s32 i;
    s32 one;
    i   = 0;
    one = 1;
    p   = data_0203673c->e;
    do {
        if (p->f != 0) {
            func_0200273c(p, one);
        }
        i++;
        p++;
    } while (i < 0x58);
}
/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_02051548;
void ClearPolWorkOnMDA(void *);
typedef struct PW {
    u32 a;
    u16 b;
    u16 c;
    struct PW *n;
} PW;
typedef struct PW2 {
    u32 a0 : 4;
    u32 kind : 2;
    u32 rest : 26;
    u16 flag : 1;
    u16 r : 15;
    u16 c;
    u32 pad;
    struct PW2 *n;
} PW2;
void ClearPolWorkOne(u32 k) {
    PW2 *p = *(PW2 **) (data_ov000_02051548 + 0x2cc);
    for (;;) {
        if (p == 0) {
            break;
        }
        if (p->flag != 0 && k == p->kind) {
            ClearPolWorkOnMDA(p);
        }
        p = p->n;
    }
}

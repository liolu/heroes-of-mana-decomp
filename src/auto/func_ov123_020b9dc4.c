/* compiler: 1.2/sp3 */
/* near start: 7 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct T {
    u8 c[3];
} T;
typedef struct D {
    u8 pad[8];
    T tab[4];
    u8 idx;
} D;
extern D *data_ov123_020e465c;
void MI_CpuCopy8(void *, void *, s32);
s32 func_02026c4c(void *);

s32 func_ov123_020b9dc4(s32 a) {
    u8 buf[4];
    s32 i;
    u8 *q;
    u8 *base = data_ov123_020e465c->pad + 8;
    s32 off  = data_ov123_020e465c->idx * 3;
    T *e     = (T *) (base + off);
    u8 f     = *(u8 *) e;
    if (f != 0 && f != 0x20) {
        return 1;
    }
    MI_CpuCopy8(e, buf, 3);
    buf[3] = 0;
    i      = 0;
    q      = buf;
    do {
        if (*q != 0) {
            break;
        }
        i++;
        *q++ = 0x20;
    } while (i < 3);
    return func_02026c4c(buf) >= a;
}

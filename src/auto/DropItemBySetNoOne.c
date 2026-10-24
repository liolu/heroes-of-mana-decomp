/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct D {
    u32 a;
    u32 b;
    u32 c;
} D;
typedef struct T {
    u32 pad;
    s32 n;
    D d[1];
} T;
u32 GetRnd(void);
void SetDropItemByData(D *);

void DropItemBySetNoOne(T *t, u32 no) {
    D *p  = t->d;
    s32 n = t->n;
    s32 r = GetRnd();
    r     = r % 100;
    if (n != 0) {
        do {
            if (no == ((p->b << 3) >> 23)) {
                if (r < ((p->a << 5) >> 25)) {
                    SetDropItemByData(p);
                }
                r -= (p->a << 5) >> 25;
            }
            p++;
            n--;
        } while (n != 0);
    }
}

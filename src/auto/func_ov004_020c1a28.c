#include "m2c.h"

typedef struct Ent {
    void *p;
    s32 n;
} Ent;

typedef struct L {
    u8 pad[8];
    s32 count;
    Ent *arr;
} L;

void func_ov004_020c1a28(L *l, void *obj) {
    s32 n;
    Ent *dst;
    s32 k;
    Ent *src;
    void *v;
    s32 i = 0;
    Ent *q;
    s32 off;
    Ent *ti;
    Ent *tl;
    if (l->count <= 0) {
        return;
    }
    off = 0;
    do {
        if (l->arr[i].p == obj) {
            q = (Ent *) ((u8 *) l->arr + off);
            q->n -= 1;
            if (q->n <= 0) {
                if (l->arr[i].p != 0) {
                    (*(void (**)(void *))(*(u8 **) l->arr[i].p + 4))(l->arr[i].p);
                }
                if (i < 0) {
                    return;
                }
                if (i >= l->count) {
                    return;
                }
                n   = l->count - 1 - i;
                dst = l->arr + i;
                src = l->arr + (i + 1);
                k   = 0;
                if (n > 0) {
                    do {
                        ti = src;
                        v  = src->p;
                        src++;
                        tl     = dst;
                        dst->p = v;
                        dst++;
                        k++;
                        tl->n = ti->n;
                    } while (k < n);
                }
                l->count -= 1;
                return;
            }
        }
        i++;
        off += 8;
    } while (i < l->count);
}

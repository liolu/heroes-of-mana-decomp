/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 *a;
    u8 *b;
} Pair;
typedef struct {
    Pair *items;
    s32 cap;
    s32 n;
} List;
typedef struct {
    u8 pad[0x1010];
    void *(*alloc)(void *, s32);
    void (*free)(void *, void *, s32);
} Heap;
s32 func_02024c28(u8 *);
void func_02024c44(u8 *, u8 *);
extern u8 data_ov123_020dc1cc;
extern u8 data_ov123_020dc1ec;
extern u8 data_ov123_020dc20c;
extern u8 data_ov123_020dc228;

s32 func_ov123_020964e8(Heap *h, List *l, u8 *s1, u8 *s2) {
    void *(*al)(void *, s32);
    void (*fr)(void *, void *, s32);

    al = h->alloc;
    fr = h->free;
    if (l->n > l->cap) {
        return 0;
    }
    l->items[l->n].a = al(&data_ov123_020dc1cc, func_02024c28(s1) + 1);
    if (l->items[l->n].a != 0) {
        l->items[l->n].b = al(&data_ov123_020dc1ec, func_02024c28(s2) + 1);
        if (l->items[l->n].b != 0) {
            func_02024c44(l->items[l->n].a, s1);
            func_02024c44(l->items[l->n].b, s2);
            l->n = l->n + 1;
            return 1;
        }
    }
    if (l->items[l->n].a != 0) {
        fr(&data_ov123_020dc20c, l->items[l->n].a, 0);
        l->items[l->n].a = 0;
    }
    if (l->items[l->n].b != 0) {
        fr(&data_ov123_020dc228, l->items[l->n].b, 0);
        l->items[l->n].b = 0;
    }
    return 0;
}

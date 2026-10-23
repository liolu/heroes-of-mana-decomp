/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct N {
    u16 lo;
    u16 hi;
    struct N *next;
} N;
typedef struct {
    u8 pad[0xC];
    N *head;
} T;
typedef struct {
    T *t;
    u8 pad[6];
    u16 size;
} H;

u8 *func_ov123_0206983c(H *h, u32 v) {
    N *n;
    T *t = h->t;
    n    = t->head;
    for (; n != NULL; n = n->next) {
        if (n->lo <= v && v <= n->hi) {
            return (u8 *) n + 8 + h->size * (v - n->lo);
        }
    }
    return (u8 *) t + 4;
}

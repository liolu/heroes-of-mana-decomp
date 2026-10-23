/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct M {
    u32 t : 2;
    u32 id : 10;
    u32 y : 20;
    u8 pad[0x14];
    struct M *next;
} M;
M *SearchModelTypeStSub(u32 t, u32 id, M *m) {
    if (m == NULL) {
        return NULL;
    }
    if (t == m->t && id == m->id) {
        return m;
    }
    return SearchModelTypeStSub(t, id, m->next);
}

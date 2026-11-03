/* compiler: 1.2/sp3 -profile */
/* near start: 1 diffs with profile "1.2/sp3 -profile" */
/* near start: 2 diffs with profile "1.2/sp3 -profile" */
#include "m2c.h"

typedef struct Sub {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
} Sub;

typedef struct Mdl {
    u8 p0[0xa];
    u16 cnt;
    u32 f0c;
    u32 f10;
    u32 f14;
    u32 *f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u8 p28[8];
    u32 f30;
    u32 f34;
    u8 p38[0x50 - 0x38];
    Sub *f50;
    u32 f54;
} Mdl;

void SetAdrsOfModel(Mdl *m) {
    s32 off;
    s32 i;
    Sub *s;
    u32 b = (u32) m;

    m->f0c = m->f0c + b;
    m->f10 = m->f10 + b;
    m->f14 = m->f14 + b;
    m->f18 = (u32 *) ((u32) m->f18 + b);
    m->f1c = m->f1c + b;
    m->f20 = m->f20 + b;
    m->f24 = m->f24 + b;
    m->f30 = m->f30 + b;
    m->f34 = m->f34 + b;
    if (m->f50 != NULL) {
        s          = (Sub *) ((u32) m->f50 + b);
        m->f50     = s;
        s->f4      = s->f4 + b;
        m->f50->f8 = m->f50->f8 + b;
        m->f50->fc = m->f50->fc + b;
    }
    if (m->f54 != 0) {
        m->f54 = m->f54 + b;
    }
    i = 0;
    if ((s32) m->cnt > 0) {
        off = i;
        do {
            i += 1;
            *(s32 *) ((u8 *) m->f18 + off) = (s32) ((u8 *) m + *(s32 *) ((u8 *) m->f18 + off));
            off += 0x28;
        } while (i < m->cnt);
    }
}

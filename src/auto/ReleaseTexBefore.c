/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N {
    s32 v;
    struct N *next;
} N;
typedef struct {
    u8 pad[0x274];
    N *head;
} G;
N *func_0200ed38(s32, s32, s32);
extern G *data_ov000_02051548;
extern M2C_UNK data_ov003_020a8430;

void ReleaseTexBefore(s32 v) {
    if (v != -1) {
        N *n                      = func_0200ed38(0, -1, 8);
        n->v                      = v;
        n->next                   = data_ov000_02051548->head;
        data_ov000_02051548->head = n;
    }
}

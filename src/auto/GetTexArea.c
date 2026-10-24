/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Blk {
    u8 *addr;
    u32 size : 30;
    u32 used : 1;
    u32 top : 1;
    struct Blk *next;
} Blk;

typedef struct {
    u8 pad[0x270];
    Blk *head;
} Mgr;

extern Mgr *data_ov000_02051548;
Blk *func_0200ed38(s32, s32, s32);

u8 *GetTexArea(u32 want) {
    u8 *ret = (u8 *) -1;
    Blk *b  = data_ov000_02051548->head;
    while (b != NULL) {
        if (!b->used && want <= b->size) {
            if (b->size == want) {
                b->used = 1;
                ret     = b->addr;
            } else {
                Blk *n  = func_0200ed38(0, -1, 12);
                n->used = 0;
                n->addr = b->addr + want;
                n->size = b->size - want;
                n->next = b->next;
                b->next = n;
                b->size = want;
                b->used = 1;
                ret     = b->addr;
            }
            break;
        }
        b = b->next;
    }
    return ret;
}

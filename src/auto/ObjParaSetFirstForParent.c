/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 used : 1;
    u32 r0 : 31;
    u32 kind : 4;
    u32 r4 : 28;
    u8 pad[0x34 - 8];
} Item;

typedef struct {
    u8 pad[4];
    Item *items;
} Para;

typedef struct {
    u8 pad[0x24];
    Item *tbl;
} Game;

extern Game *data_0203673c;
void MIi_CpuCopy16(Item *, Item *, s32);
void OS_FreeToHeap(s32, s32, Item *);
void gameDataControlVS(void);
void SetGameConditionForChild(void);

void ObjParaSetFirstForParent(Para *p) {
    Item *dst;
    Item *src;
    s32 i = 0;
    s32 j;
    src = p->items;
    dst = data_0203673c->tbl;
    do {
        if (!dst->used) {
            break;
        }
        i++;
        dst++;
    } while (i < 0x58);
    j = 0;
    do {
        if (!dst->used) {
            break;
        }
        j++;
        dst++;
    } while (j < 0x58);
    if (j < 0x58) {
        do {
            if (src->used) {
                MIi_CpuCopy16(src, dst, 0x34);
                dst->kind = 1;
                dst++;
            }
            j++;
            src++;
        } while (j < 0x58);
    }
    if (p->items != NULL) {
        OS_FreeToHeap(0, -1, p->items);
        p->items = NULL;
    }
    gameDataControlVS();
    SetGameConditionForChild();
}

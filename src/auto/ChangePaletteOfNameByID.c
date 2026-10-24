/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N {
    u8 **obj;
    u32 id : 8;
    u32 pad : 24;
    struct N *next;
} N;
typedef struct {
    N *head;
    u8 p2[0x10];
} Slot;
typedef struct {
    u8 pad[0x9C];
    Slot s[2];
    u8 rest[0xD0 - 0x9C - 0x28];
} Obj;
extern Obj *data_ov000_02051550;

void ChangePaletteOfNameByID(s32 idx, u32 id, u32 pal) {
    N *n;
    s32 i;

    for (i = 0; i < 2; i++) {
        n = data_ov000_02051550[idx].s[i].head;
        while (n != 0) {
            if (id == n->id) {
                *(u8 *) ((u8 *) n->obj + 0xA) = pal;
            }
            n = n->next;
        }
    }
}

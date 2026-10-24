/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void PickUpItem(int);
extern u8 data_ov003_020a9628;
extern u8 *data_ov000_02051548;

typedef struct {
    u32 id : 8;
    u32 x : 6;
    u32 y : 6;
    u32 pad : 11;
    u32 valid : 1;
} Drop;

int CheckDropItem(u32 a, u32 b) {
    int i;
    Drop *p = (Drop *) (data_ov000_02051548 + 0xE4);
    for (i = 0; i < 3; i++, p++) {
        if (p->valid != 0 && a == p->x && b == p->y) {
            p->valid = 0;
            PickUpItem(p->id);
            return 1;
        }
    }
    return 0;
}

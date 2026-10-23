/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 id : 9;
    u16 cnt : 7;
} E;
extern u8 *data_0203673c;

void AddDiscoveryItemToBag(u8 *bag) {
    s32 k;
    s32 j;
    u32 id;
    E *pe;
    u8 *base;
    E *e;
    E *pe2;
    u8 *base2;
    s32 j2;
    for (k = 0; k < 4; k++) {
        id = bag[k + 8];
        if (id != 0) {
            base = *(u8 **) (data_0203673c + 0x28);
            pe   = (E *) (base + 0x10);
            for (j = 0; j < 0x100; j++, pe++) {
                if (id == pe->id) {
                    e = (E *) (base + 0x10) + j;
                    if (e->cnt < 99) {
                        e->cnt = e->cnt + 1;
                    }
                    break;
                }
            }
            if (j == 0x100) {
                base2 = *(u8 **) (data_0203673c + 0x28);
                pe2   = (E *) (base2 + 0x10);
                for (j2 = 0; j2 < 0x100; j2++, pe2++) {
                    if (pe2->cnt == 0) {
                        ((E *) (base2 + 0x10))[j2].id                            = id;
                        ((E *) (*(u8 **) (data_0203673c + 0x28) + 0x10))[j2].cnt = 1;
                        break;
                    }
                }
            }
        }
    }
}

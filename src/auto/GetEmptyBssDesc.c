/* compiler: 2.0/sp1p5 -profile */
/* near start: 8 diffs with profile "1.2/sp3 -profile" */
#include "m2c.h"
typedef struct {
    u8 pad[0x50];
    u32 used : 1;
    u32 idx : 6;
    u32 rest : 25;
    u8 pad2[0xc0 - 0x54];
} D;
extern D data_ov003_020b552c[];

s32 GetEmptyBssDesc(void) {
    s32 i;
    D *d = data_ov003_020b552c;
    for (i = 0; i < 20; i++, d++) {
        if (d->used == 0) {
            d->idx = i;
            return i;
        }
    }
    return -1;
}

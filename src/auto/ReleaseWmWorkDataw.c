/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    void *p;
    u8 pad2[8];
} Ent;
typedef struct {
    u8 pad[0x194];
    Ent *tbl;
    u32 cnt;
} Wm;
extern Wm data_ov003_020b5380;
void OS_FreeToHeap(s32, s32, void *);

void ReleaseWmWorkDataw(void) {
    u32 i;
    for (i = 0; i < data_ov003_020b5380.cnt; i++) {
        if (data_ov003_020b5380.tbl[i].p != 0) {
            OS_FreeToHeap(0, -1, data_ov003_020b5380.tbl[i].p);
            data_ov003_020b5380.tbl[i].p = 0;
        }
    }
}

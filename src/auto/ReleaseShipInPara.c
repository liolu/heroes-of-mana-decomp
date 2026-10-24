/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x100];
    void *h[4];
} H;
typedef struct {
    u32 w;
    H *h;
} G;
extern G data_ov000_02051544;
void OS_FreeToHeap(u32, s32, void *);
void ReleaseShipInPara(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_ov000_02051544.h->h[i] != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051544.h->h[i]);
            data_ov000_02051544.h->h[i] = 0;
        }
    }
}

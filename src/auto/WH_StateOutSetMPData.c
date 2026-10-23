/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void WH_SetError(s32);
typedef struct {
    u16 pad;
    u16 st;
    u8 pad2[28];
    void (*cb)(s32);
} W;
void WH_StateOutSetMPData(W *w) {
    u16 s = w->st;
    if (s != 0 && s != 0xf) {
        WH_SetError(s);
    } else if (w->cb != NULL) {
        w->cb(s == 0);
    }
}

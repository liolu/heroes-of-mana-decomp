/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 state;
    u16 type;
    u8 pad[6];
    s32 w;
    u16 x;
    u16 y;
} WmCb;
typedef struct {
    u8 pad[0x3c];
    void (*cb)(u16, s32, u16);
} WhWork;
extern WhWork data_ov003_020b6440;
void WH_SetError(u16);

void WH_PortReceiveCallback(WmCb *arg) {
    void (*cb)(u16, s32, u16);
    if (arg->state != 0) {
        WH_SetError(arg->state);
    } else {
        cb = data_ov003_020b6440.cb;
        if (cb != 0) {
            if (arg->type == 0x15) {
                cb(arg->y, arg->w, arg->x);
            } else if (arg->type == 9) {
                cb(arg->y, 0, 0);
            }
        }
    }
}

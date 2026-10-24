/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 f0;
    u16 f2;
    u8 pad[0x14];
    void (*cb)(void *, u16, u16);
} W;
typedef struct {
    u16 pad0;
    u16 err;
    u8 pad[4];
    u16 ch;
    u16 val;
} A;
void WH_ChangeSysState(s32);
void WH_SetError(u16);
s32 WH_StateInMeasureChannel(u16);
extern W data_ov003_020b6440;
extern u8 data_ov003_020ae8c8;

void WH_StateOutMeasureChannel(A *a) {
    s32 r;
    u16 ip;
    u16 r3;
    if (a->err != 0) {
        WH_SetError(a->err);
        WH_ChangeSysState(9);
    } else {
        if (data_ov003_020b6440.cb != NULL) {
            data_ov003_020b6440.cb(&data_ov003_020ae8c8, a->ch, a->val);
        }
        r3 = a->val;
        ip = a->ch;
        if (data_ov003_020b6440.f2 > r3) {
            data_ov003_020b6440.f2 = r3;
            data_ov003_020b6440.f0 = 1 << (ip - 1);
        } else if (data_ov003_020b6440.f2 == r3) {
            data_ov003_020b6440.f0 |= 1 << (ip - 1);
        }
        r = WH_StateInMeasureChannel(ip + 1);
        if (r == 0x18) {
            WH_ChangeSysState(7);
        } else if (r != 2) {
            WH_ChangeSysState(9);
        }
    }
}

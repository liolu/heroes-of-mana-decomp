/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    s32 state;
    u8 pad2[4];
    void (*cb)(void *, s32);
} Wh;
extern Wh data_ov003_020b6440;
extern s32 data_ov003_020ae01c[];
extern u8 data_ov003_020ae13c;
extern u8 data_ov003_020ae144;

void WH_ChangeSysState(s32 state) {
    if (data_ov003_020b6440.cb != 0) {
        data_ov003_020b6440.cb(&data_ov003_020ae13c, data_ov003_020ae01c[data_ov003_020b6440.state]);
    }
    data_ov003_020b6440.state = state;
    if (data_ov003_020b6440.cb != 0) {
        data_ov003_020b6440.cb(&data_ov003_020ae144, data_ov003_020ae01c[state]);
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[2];
    u16 err;
    u8 pad1[4];
    u16 state;
    u16 v;
} Arg;
typedef struct {
    u8 pad0[0xA];
    u16 sa;
    u8 pad1[0xC];
    void (*cb)(void *, ...);
} W;

void WH_ChangeSysState(s32);
s32 WH_GetWMStateCodeName(s32);
void WH_SetError(s32);
s32 WH_StateInStartChildMP(void);
extern u8 data_ov003_020ae5f4[];
extern u8 data_ov003_020ae608[];
extern u8 data_ov003_020ae628[];
extern u8 data_ov003_020ae644[];
extern W data_ov003_020b6440;

void WH_StateOutStartChild(Arg *arg) {
    u16 e;
    u16 st;

    if (arg->err != 0) {
        WH_SetError(arg->err);
        e = arg->err;
        if (e == 12) {
            WH_ChangeSysState(9);
        } else if (e == 11) {
            WH_ChangeSysState(9);
        } else if (e == 1) {
            WH_ChangeSysState(8);
        } else {
            WH_ChangeSysState(9);
        }
    } else {
        st = arg->state;
        if (st == 8) {
        } else if (st == 7) {
            if (data_ov003_020b6440.cb != NULL) {
                data_ov003_020b6440.cb(data_ov003_020ae5f4);
            }
            WH_ChangeSysState(4);
            if (WH_StateInStartChildMP() == 0) {
                if (data_ov003_020b6440.cb != NULL) {
                    data_ov003_020b6440.cb(data_ov003_020ae608);
                }
                WH_ChangeSysState(3);
            } else {
                data_ov003_020b6440.sa = arg->v;
            }
        } else if (st == 6) {
        } else if (st == 9) {
            if (data_ov003_020b6440.cb != NULL) {
                data_ov003_020b6440.cb(data_ov003_020ae628);
            }
            WH_SetError(0x14);
            WH_ChangeSysState(9);
        } else if (st == 26) {
        } else {
            if (data_ov003_020b6440.cb != NULL) {
                data_ov003_020b6440.cb(data_ov003_020ae644, arg->state, WH_GetWMStateCodeName(arg->state));
            }
            WH_ChangeSysState(9);
        }
    }
}

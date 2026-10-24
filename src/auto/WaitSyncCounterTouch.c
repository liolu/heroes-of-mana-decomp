/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x3c];
    u16 cnt;
    u8 pad1[0x720 - 0x3e];
    u8 pad2[0x40];
    u32 fl;
} G;

typedef struct {
    u8 pad0[0x146];
    u16 t;
    u8 pad1[0xaf4 - 0x148];
    s32 dec;
} H;

extern G *data_ov000_02051548;
extern H *data_ov000_0205154c;

s32 GetTouchPanelStatus(void);
void OS_SleepThread(s32);
void Ring_SoundEffect(s32);

void WaitSyncCounterTouch(u16 n) {
    s32 d;
    if (n != 0) {
        if (data_ov000_02051548->cnt < 2) {
            data_ov000_02051548->cnt = n;
        }
        if (data_ov000_02051548->cnt != 0) {
            do {
                if (GetTouchPanelStatus() == 3 || (data_ov000_0205154c->t & 1)) {
                    Ring_SoundEffect(0x66);
                    do {
                        data_ov000_02051548->fl &= ~1;
                        OS_SleepThread(0);
                    } while (GetTouchPanelStatus() != 2);
                    break;
                }
                data_ov000_02051548->fl &= ~1;
                OS_SleepThread(0);
                d = data_ov000_0205154c->dec;
                if ((s32) data_ov000_02051548->cnt < d) {
                    data_ov000_02051548->cnt = 0;
                } else {
                    data_ov000_02051548->cnt = data_ov000_02051548->cnt - d;
                }
            } while (data_ov000_02051548->cnt != 0);
        }
        data_ov000_02051548->cnt = 1;
    }
}

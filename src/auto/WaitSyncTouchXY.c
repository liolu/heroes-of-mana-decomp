/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x146];
    u16 f146;
} A;
typedef struct {
    u8 pad[0x760];
    u32 f760;
} B;
extern A *data_ov000_0205154c;
extern B *data_ov000_02051548;
extern void PutTouchWaitIcon(s32, s32, s32);
extern s32 GetTouchPanelStatus(void);
extern void Ring_SoundEffect(s32);
extern void OS_SleepThread(s32);
extern void deleteTouchWaitIcon(void);

void WaitSyncTouchXY(s32 x, s32 y) {
    PutTouchWaitIcon(0, x, y);
    for (;;) {
        if (GetTouchPanelStatus() == 3 || (data_ov000_0205154c->f146 & 1) != 0) {
            Ring_SoundEffect(0x66);
            for (;;) {
                data_ov000_02051548->f760 &= ~1;
                OS_SleepThread(0);
                if (GetTouchPanelStatus() != 2) {
                    continue;
                }
                break;
            }
            break;
        }
        data_ov000_02051548->f760 &= ~1;
        OS_SleepThread(0);
    }
    deleteTouchWaitIcon();
}

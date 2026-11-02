/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void DeleteTimerOnScreen(void);
u32 GetPlanTimer(void);
u32 SetKazuByObj(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern u8 *data_ov000_02051548;

void PutTimerOnScreen(void) {
    s32 r;
    u32 t;
    u32 v;

    v = (*(u32 *) (data_ov000_02051548 + 0xD8) << 0xA) >> 0x1F;
    if (v != 0 && (v = *(u32 *) (data_ov000_02051548 + 0xE0)) != 0) {
        t = GetPlanTimer();
        v = *(u32 *) (data_ov000_02051548 + 0xE0);
        if (v < t) {
            r = 0;
        } else {
            r = v - t;
        }
        if (r != *(s32 *) (data_ov000_02051548 + 0x208)) {
            DeleteTimerOnScreen();
            *(s32 *) (data_ov000_02051548 + 0x208) = r;
            *(u32 *) (data_ov000_02051548 + 0x1FC) =
                SetKazuByObj(*(s32 *) (data_ov000_02051548 + 0x208), 0xD0, 0x10, 0, 1, 0, 1, 0);
        }
    } else {
        DeleteTimerOnScreen();
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void WH_ChangeSysState(s32);
extern void WH_SetError(s32);
extern s32 WHi_MeasureChannel(void *, u16);
extern u16 WM_GetAllowedChannel(void);
extern u8 WH_StateOutMeasureChannel[];

u16 WH_StateInMeasureChannel(u16 ch) {
    u16 ret;
    u16 mask = WM_GetAllowedChannel();
    if (mask == 0x8000) {
        WH_SetError(3);
        WH_ChangeSysState(9);
        ret = 3;
    } else if (mask == 0) {
        WH_SetError(0x16);
        WH_ChangeSysState(9);
        ret = 0x18;
    } else {
        if (!(mask & (1 << (ch - 1)))) {
            do {
                ch++;
                if (ch > 0x10) {
                    return 0x18;
                }
            } while (!(mask & (1 << (ch - 1))));
        }
        ret = WHi_MeasureChannel(WH_StateOutMeasureChannel, ch);
    }
    return ret;
}

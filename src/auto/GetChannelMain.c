/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s32 WH_GetSystemState(void);
extern void WH_StartMeasureChannel(void);
extern void WH_GetMeasureChannel(void);
extern void WH_Reset(void);
extern void func_0200fb08(void);
void GetChannelMain(void) {
    while (1) {
        switch (WH_GetSystemState()) {
            case 0:
            case 3:
                break;
            case 1:
                WH_StartMeasureChannel();
                break;
            case 7:
                WH_GetMeasureChannel();
                return;
            case 9:
                WH_Reset();
                break;
            default:
                WH_Reset();
                break;
        }
        func_0200fb08();
    }
}

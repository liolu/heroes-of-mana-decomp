/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u32 GetTouchPanelStatus(void);
s32 LeaveTouchPanelActionByGameOver(void);
s32 MomentTouchPanelActionByGameOver(void);

s32 SelectByGameOver(void) {
    s32 r;
    switch (GetTouchPanelStatus()) {
        case 1:
        case 3:
            r = MomentTouchPanelActionByGameOver();
            break;
        case 0:
        case 2:
            r = LeaveTouchPanelActionByGameOver();
            break;
        default:
            r = 0;
            break;
    }
    return r;
}

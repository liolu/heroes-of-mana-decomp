/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern volatile s32 data_ov000_02051540;

void GetOkFromParent(void) {
    s32 t;

    t = data_ov000_02051540;
    if (t == 0) {
        return;
    }
}

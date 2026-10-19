/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0201509c(M2C_UNK *);                       /* extern */
M2C_UNK func_02015130(M2C_UNK *);                   /* extern */
M2C_UNK GetKeyAndTouch();                      /* extern */
M2C_UNK TouchWorkClear();                      /* extern */
extern M2C_UNK data_ov000_02050784;

void SetTouchPadCali(void) {
    u8 sp0[8];

    if (func_0201509c((void *) sp0) != 0) {
        func_02015130((void *) sp0);
    }
    GetKeyAndTouch();
    TouchWorkClear();
}

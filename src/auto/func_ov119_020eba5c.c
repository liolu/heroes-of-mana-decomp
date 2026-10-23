#include "m2c.h"
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(void *);
s32 func_ov119_020eba5c(void) {
    u8 sp[8];
    do {
        TP_RequestSamplingAsync();
    } while (TP_WaitCalibratedResult(sp) != 0);
    if (*(u16 *) (sp + 4) == 1 && *(u16 *) (sp + 6) == 0) {
        return 1;
    }
    return 0;
}

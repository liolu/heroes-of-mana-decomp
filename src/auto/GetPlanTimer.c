/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_02051548;
u32 GetPlanTimer(void) {
    return *(u32 *) (data_ov000_02051548 + 0xDC) / 60;
}

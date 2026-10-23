/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_0203673c;
u32 GetClearTimer(void) {
    return *(u32 *) (*(u8 **) (data_0203673c + 0x30) + 4) / 60;
}

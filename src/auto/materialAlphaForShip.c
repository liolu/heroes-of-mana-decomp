/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u32 *data_ov003_020aea80;
u32 materialAlphaForShip(s32 unused, u32 a) {
    return (a * ((*data_ov003_020aea80 << 5) >> 27)) / 31;
}

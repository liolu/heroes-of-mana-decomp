/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s16 data_ov003_020b5310[];
void Initial_polygon_work(void) {
    s16 *p = data_ov003_020b5310;
    p[10]  = 0x1000;
    p[11]  = 0x1000;
    p[8]   = -p[10] / 2;
    p[9]   = -p[11] / 2;
}

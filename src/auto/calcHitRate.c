/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"
s32 calcHitRate(u32 *w) {
    return ((*w << 13) >> 24) == 9 ? 30 : 100;
}

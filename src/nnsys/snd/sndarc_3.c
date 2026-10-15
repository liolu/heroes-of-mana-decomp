#include "m2c.h"

extern s32 sCurrent;

s32 NNS_SndArcSetCurrent(s32 arg0) {
    s32 temp_r2;

    temp_r2       = sCurrent;
    sCurrent = arg0;
    return temp_r2;
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void SetShisetuLevel(s32 id, s32 lvl);

void TG_setElementsBeforeWorldmap(s32 n) {
    if (n >= 6) {
        SetShisetuLevel(12, 1);
    }
    if (n >= 8) {
        SetShisetuLevel(10, 1);
    }
    if (n >= 12) {
        SetShisetuLevel(15, 1);
    }
    if (n >= 13) {
        SetShisetuLevel(8, 1);
    }
    if (n >= 14) {
        SetShisetuLevel(11, 1);
    }
    if (n >= 16) {
        SetShisetuLevel(13, 1);
    }
    if (n >= 17) {
        SetShisetuLevel(14, 1);
    }
    if (n >= 21) {
        SetShisetuLevel(9, 1);
    }
}

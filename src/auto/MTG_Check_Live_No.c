/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 GetHpOrResource(s32);

s32 MTG_Check_Live_No(s32 a, s32 b) {
    s32 i;
    s32 n   = b - a + 1;
    s32 cnt = 0;
    for (i = 0; i < n; i++) {
        if (GetHpOrResource(a + i) > 0) {
            cnt++;
        }
    }
    return cnt;
}

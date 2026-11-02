/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 n;
    s32 v[16];
    s32 f[16];
} Det;

s32 GetCanBuildHouseDetail(s32 a, s32 *b);

s32 GetCanBuildHouse(s32 arg0, s32 *out) {
    Det d;
    s32 i;
    s32 flag;
    s32 v;

    if (GetCanBuildHouseDetail(arg0, (s32 *) &d) == 0) {
        return 0;
    }
    *out = 0;
    flag = 0;
    for (i = 0; i < d.n; i++) {
        if (d.f[i] == 0) {
            v = d.v[i];
            if (v >= 8) {
                if (flag == 0) {
                    out[*out + 1] = 8;
                    *out          = *out + 1;
                    flag          = 1;
                }
            } else {
                out[*out + 1] = v;
                *out          = *out + 1;
            }
        }
    }
    if (*out == 0) {
        return 0;
    }
    return 1;
}

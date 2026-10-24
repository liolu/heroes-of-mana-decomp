/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 data_02036734;

s32 *changePosNoForOverSea(s32 *in, s32 *cnt, s32 *out) {
    if (in[0] == 4 && in[1] == 1) {
        out[0] = 4;
        out[1] = 2;
        out[2] = data_02036734;
        out[3] = in[2];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 4 && in[1] == 0) {
        out[0] = 4;
        out[1] = 3;
        out[2] = data_02036734;
        out[3] = in[2];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 5 && in[1] == 11) {
        out[0] = 5;
        out[1] = 14;
        out[2] = data_02036734;
        out[3] = in[2];
        out[4] = in[3];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 5 && in[1] == 1) {
        out[0] = 5;
        out[1] = 15;
        out[2] = data_02036734;
        out[3] = in[2];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 5 && in[1] == 5) {
        out[0] = 5;
        out[1] = 16;
        out[2] = data_02036734;
        out[3] = in[2];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 5 && in[1] == 7) {
        out[0] = 5;
        out[1] = 17;
        out[2] = data_02036734;
        out[3] = in[2];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 5 && in[1] == 6) {
        out[0] = 5;
        out[1] = 18;
        out[2] = data_02036734;
        out[3] = in[2];
        out[4] = in[3];
        *cnt   = *cnt + 1;
        return out;
    }
    if (in[0] == 9 && in[2] == 2) {
        out[0] = 9;
        out[1] = in[1] + 4;
        out[2] = data_02036734 << 1;
        *cnt   = 3;
        return out;
    }
    if (in[0] == 9 && in[2] == 10) {
        out[0] = 9;
        out[1] = in[1] + 4;
        out[2] = (data_02036734 << 1) + 1;
        *cnt   = 3;
        return out;
    }
    if (in[0] == 5 && in[1] == 8 && (u32) in[2] <= 3) {
        out[0] = 5;
        out[1] = 8;
        out[2] = in[2] + 8;
        out[3] = data_02036734;
        out[4] = in[3];
        *cnt   = 5;
        return out;
    }
    if (in[0] == 8 && in[1] == 0) {
        out[0] = 8;
        out[1] = 1;
        out[2] = data_02036734;
        out[3] = in[2];
        out[4] = in[3];
        *cnt   = *cnt + 1;
        return out;
    }
    return in;
}

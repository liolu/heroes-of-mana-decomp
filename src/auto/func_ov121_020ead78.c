#include "m2c.h"

typedef struct {
    u16 x;
    u16 y;
    u8 w;
    u8 h;
    u16 k;
    u32 mask;
    s32 val;
} R;
extern R data_ov121_020f43a0[];

s32 func_ov121_020ead78(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    for (; arg2 < arg3; arg2++) {
        u16 x  = data_ov121_020f43a0[arg2].x;
        u8 w   = data_ov121_020f43a0[arg2].w;
        u16 k  = data_ov121_020f43a0[arg2].k;
        u8 h   = data_ov121_020f43a0[arg2].h;
        s32 x2 = x + w;
        u16 y  = data_ov121_020f43a0[arg2].y;
        s32 y2 = y + h;
        if (arg4 == k && (arg5 & data_ov121_020f43a0[arg2].mask) && arg0 > x && arg0 < x2 && arg1 > y && arg1 < y2) {
            return data_ov121_020f43a0[arg2].val;
        }
    }
    return -1;
}

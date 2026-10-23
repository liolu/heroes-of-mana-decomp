#include "m2c.h"
typedef struct Root {
    u8 pad[8];
    void *objs[4];
    u8 pad2[4];
    u8 k;
} Root;
typedef struct P2 {
    u16 x;
    u16 y;
} P2;
extern Root *data_ov123_020e46e4;
extern u8 data_ov123_020d83b0[][2];
extern u8 data_ov123_020d8398[][2];
extern P2 data_ov123_020d8418[][2];
s32 func_ov123_020c8f80(void *, s32);
void func_ov123_020c9324(s32, s32, s32);
void func_ov123_020c8d2c(void *, s32, s32, s32);
void func_ov123_020c8cb8(void *, s32, s32);
void func_ov123_020c4cdc(s32 n) {
    s32 t = func_ov123_020c8f80(data_ov123_020e46e4->objs[n], 0);
    func_ov123_020c9324(0, data_ov123_020d83b0[data_ov123_020e46e4->k][n] + 1, t);
    func_ov123_020c8d2c(data_ov123_020e46e4->objs[n], -1,
                        data_ov123_020d8418[data_ov123_020e46e4->k][data_ov123_020d8398[data_ov123_020e46e4->k][n]].x,
                        data_ov123_020d8418[data_ov123_020e46e4->k][data_ov123_020d8398[data_ov123_020e46e4->k][n]].y);
    func_ov123_020c8cb8(data_ov123_020e46e4->objs[n], -1, 0);
}

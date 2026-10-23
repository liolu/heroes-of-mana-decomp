#include "m2c.h"
typedef struct G {
    u8 pad[0xe44];
    s32 f44;
    u8 pad2[4];
    s32 cnt;
    s32 *a;
    s32 *b;
    s32 n;
    s32 f5c;
} G;
extern G *data_ov123_020e4790;
extern void MIi_CpuClear32(s32, void *, s32);
extern s32 func_ov123_020ce480(s32);
void func_ov123_020ce648(void) {
    s32 n;
    s32 i;
    if (data_ov123_020e4790 == 0) {
        return;
    }
    MIi_CpuClear32(0, data_ov123_020e4790->a, data_ov123_020e4790->cnt * 4);
    MIi_CpuClear32(0, data_ov123_020e4790->b, data_ov123_020e4790->cnt * 4);
    n = 0;
    for (i = 0; i < data_ov123_020e4790->cnt; i++) {
        s32 v = func_ov123_020ce480(i);
        if (v > 0) {
            data_ov123_020e4790->b[n] = v;
            n++;
        }
    }
    data_ov123_020e4790->n   = n;
    data_ov123_020e4790->f5c = 0;
    data_ov123_020e4790->f44 = 1;
}

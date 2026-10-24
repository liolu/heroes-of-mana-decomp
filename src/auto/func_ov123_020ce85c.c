#include "m2c.h"
typedef struct {
    u8 pad[0xe44];
    s32 flag;
    u32 pad2;
    u32 cap;
    u32 *buf;
    u32 pad3;
    u32 pad4;
    u32 pos;
} S;
extern S *data_ov123_020e4790;
void MIi_CpuCopy32(void *src, void *dst, u32 n);
void func_ov123_020ce85c(s32 a, u32 *msg) {
    S *s = data_ov123_020e4790;
    u32 n;
    u32 *dst;
    if (s == 0) {
        return;
    }
    dst = s->buf + s->pos;
    if (a == 0) {
        return;
    }
    if (msg[2] != 0xd6) {
        return;
    }
    n = msg[3];
    if (s->pos + n > s->cap) {
        n       = 0;
        s->flag = n;
    }
    MIi_CpuCopy32(msg + 4, dst, n * 4);
    data_ov123_020e4790->pos += n;
    data_ov123_020e4790->flag = 1;
}

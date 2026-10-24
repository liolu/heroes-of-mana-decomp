/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 *buf;
    u8 pad0[8];
    u32 pos;
    u8 pad1[4];
    u32 len;
    u8 pad2[4];
    u8 b1c;
    u8 pad3[7];
    u64 t;
    u32 timeout;
} E;

typedef struct {
    u8 pad[0x600];
    void (*cb600)(u32, u8);
    u8 pad1[4];
    void (*cb608)(u8);
    u8 pad2[4];
    u16 chunk;
} G;

extern G *data_ov123_020e2048;
s32 func_ov123_0209aba8(u8 **);
s32 func_ov123_0209ab5c(u8);
E *func_ov123_020a4964(u8);
u64 func_0200f510(void);
s32 func_ov123_0209ac10(void);
s32 func_ov123_020a4948(u8);
s32 func_ov123_020a4514(u8);
void func_ov123_020a4904(u8, u8 *, s32, s32);

void func_ov123_020a4a1c(void) {
    u8 *ids;
    s32 n;
    s32 i;
    u8 id;
    E *e;
    u64 now;
    s32 chunk;
    s32 rem;
    u32 len;

    if (data_ov123_020e2048 == NULL) {
        return;
    }
    n = func_ov123_0209aba8(&ids);
    i = 0;
    if (n <= 0) {
        return;
    }
    do {
        id = ids[i];
        if (func_ov123_0209ab5c(id) != 0) {
            e = func_ov123_020a4964(id);
            if (data_ov123_020e2048->cb608 != NULL && e->timeout != 0) {
                now = func_0200f510();
                if ((u32) (((now - e->t) * 64) / 0x82ea) > e->timeout) {
                    data_ov123_020e2048->cb608(id);
                    e->t = now;
                }
            }
        }
        if (id != func_ov123_0209ac10() && func_ov123_020a4948(id) == 1) {
            e     = func_ov123_020a4964(id);
            chunk = data_ov123_020e2048->chunk;
            rem   = e->len - e->pos;
            if (rem <= chunk) {
                chunk = rem;
            }
            if (func_ov123_020a4514(id) >= chunk) {
                func_ov123_020a4904(id, e->buf + e->pos, chunk, 1);
                e->pos += chunk;
                len = e->len;
                if (e->pos == len) {
                    e->b1c = 0;
                    e->buf = NULL;
                    e->pos = 0;
                    e->len = 0;
                    if (data_ov123_020e2048->cb600 != NULL) {
                        data_ov123_020e2048->cb600(len, id);
                    }
                }
            }
        }
        i++;
    } while (i < n);
}

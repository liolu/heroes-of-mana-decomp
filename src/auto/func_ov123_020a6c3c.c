/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u32 f0;
    u32 f4;
    u8 *buf;
    u32 n;
} Rc4State;

u32 _u32_div_f(u32, u32);

void func_ov123_020a6c3c(Rc4State *st, u8 *key, u32 keylen, u32 n) {
    struct {
        Rc4State *st;
        u8 *key;
        u32 keylen;
        u32 n;
        u32 z;
    } L;
    u8 *buf;
    u32 i;
    u32 j;
    u32 s;
    u8 t;

    L.st     = st;
    L.key    = key;
    L.keylen = keylen;
    L.n      = n;
    L.z      = 0;
    buf      = st->buf;
    st->f4   = 0;
    st->f0   = st->f4;
    st->n    = L.n;
    for (i = 0; i < L.n; i++) {
        buf[i] = i;
    }
    s = 0;
    j = s;
    for (i = 0; i < L.n; i++) {
        u8 bi  = buf[i];
        s      = (s + L.key[j] + bi) % st->n;
        t      = buf[s];
        buf[s] = bi;
        buf[i] = t;
        j++;
        if (j >= L.keylen) {
            j = L.z;
        }
    }
}

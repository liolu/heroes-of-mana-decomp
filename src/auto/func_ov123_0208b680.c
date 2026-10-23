/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad;
    u8 type;
    u16 port;
    u32 addr;
    u32 x;
} Pkt;
typedef void (*Cb)(s32, s32, void *, s32);
typedef struct {
    s32 sock;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 state;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 cnt;
    s32 max;
    u32 time;
    u32 addr;
    u16 port;
    u16 pad32;
    s32 f34;
    Cb cb;
    s32 cbarg;
} Sess;

extern u8 data_ov123_020e12f4[];
void func_ov123_0208bf68(s32);
s32 func_ov123_0207b0c4(void);
s32 func_ov123_0207add8(s32, void *, s32, s32, void *, void *);
void func_ov123_0208b13c(void *, s32, void *);
u32 func_ov123_0207b3f4(void);
void func_ov123_0208b878(s32);
void func_ov123_0208bbbc(Sess *);
void func_ov123_0208ba9c(Sess *);

void func_ov123_0208b680(Sess *s) {
    u8 buf[8];
    Pkt pkt;
    s32 len;
    s32 r;
    len = 8;
    if (s->state == 4) {
        func_ov123_0208bf68((s32) s);
        return;
    }
    while (s->sock != -1) {
        if (func_ov123_0207b0c4() == 0) {
            break;
        }
        r = func_ov123_0207add8(s->sock, data_ov123_020e12f4, 0x200, 0, buf, &len);
        if (r == -1) {
            break;
        }
        func_ov123_0208b13c(data_ov123_020e12f4, r, buf);
        if (s->state == 4) {
            break;
        }
    }
    if (s->state == 0 || s->state == 2) {
        if (func_ov123_0207b3f4() > (u32) s->time) {
            if (s->cnt > s->max) {
                s->cb(2, -1, 0, s->cbarg);
                func_ov123_0208b878(s->f8);
            } else {
                s->cnt = s->cnt + 1;
                if (s->state == 0) {
                    func_ov123_0208bbbc(s);
                } else {
                    func_ov123_0208ba9c(s);
                }
            }
        }
    }
    if (s->state == 3) {
        if (func_ov123_0207b3f4() > (u32) s->time) {
            if (s->f4 == -1) {
                pkt.type = 2;
                pkt.port = (u16) (((s->port >> 8) & 0xFF) | ((s->port << 8) & 0xFF00));
                pkt.addr = s->addr;
                s->cb(0, s->sock, &pkt, s->cbarg);
                s->sock = -1;
            }
            func_ov123_0208b878(s->f8);
        }
    }
    if (s->state == 1) {
        if (func_ov123_0207b3f4() > (u32) s->time) {
            s->cb(1, -1, 0, s->cbarg);
            func_ov123_0208b878(s->f8);
        }
    }
}

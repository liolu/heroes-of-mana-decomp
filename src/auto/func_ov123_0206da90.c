/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Sock Sock;
struct Sock {
    s32 f0;
    s32 f4;
    u8 f8;
    u8 pad9;
    u16 fa;
    u8 padc[8];
    s32 f14;
    u16 f18;
    u16 pad1a;
    s32 f1c;
    u8 pad20[0x38 - 0x20];
    s32 (*f38)(s32, u32, Sock *);
    u32 f3c;
    s32 f40;
    u32 f44;
};
typedef struct Thread Thread;
struct Thread {
    u8 pad[0x68];
    Thread *next;
    u8 pad2[0xa4 - 0x6c];
    Sock *sock;
};
typedef struct {
    u8 pad[8];
    Thread *head;
} TInfo;
typedef struct {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
} Hdr;
typedef struct {
    u8 pad[0xc];
    u16 hc;
    u16 he;
    u16 h10;
    u16 h12;
} Ip;

extern TInfo OSi_ThreadInfo;

void MI_CpuCopy8(void *, s32, u32);
void OS_WakeupThreadDirect(s32);
s32 func_0200fa98(void);
void func_0200faac(s32);
s32 func_ov123_020702fc(Hdr *, s32, Ip *, s32);

void func_ov123_0206da90(Ip *ip, Hdr *h, s32 len) {
    Sock *s;
    Thread *t;
    s32 irq;

    if (h->h6 != 0 && func_ov123_020702fc(h, len, ip, 0x11) != 0) {
        return;
    }
    irq = func_0200fa98();
    for (t = OSi_ThreadInfo.head; t != NULL; t = t->next) {
        s = t->sock;
        if (s == NULL || s->f0 == 0 || s->f8 != 0xA) {
            continue;
        }
        if (s->fa != (u16) (((s32) h->h2 >> 8) | (h->h2 << 8))) {
            continue;
        }
        if (s->f18 != 0 && s->f18 != (u16) (((s32) h->h0 >> 8) | (h->h0 << 8))) {
            continue;
        }
        if (s->f1c != 0 && s->f1c != -1 &&
            s->f1c != (((u16) (((s32) ip->hc >> 8) | (ip->hc << 8)) << 16) | (u16) (((s32) ip->he >> 8) | (ip->he << 8)))) {
            continue;
        }
        s->f14 = ((u16) (((s32) ip->h10 >> 8) | (ip->h10 << 8)) << 16) | (u16) (((s32) ip->h12 >> 8) | (ip->h12 << 8));
        if (s->f1c == 0) {
            s->f1c = ((u16) (((s32) ip->hc >> 8) | (ip->hc << 8)) << 16) | (u16) (((s32) ip->he >> 8) | (ip->he << 8));
            s->f18 = (u16) (((s32) h->h0 >> 8) | (h->h0 << 8));
        }
        if (s->f44 == 0) {
            u32 m = s->f3c;
            u32 n = len - 8;
            if (n > m) {
                s->f44 = m;
            } else {
                s->f44 = n;
            }
            MI_CpuCopy8((u8 *) h + 8, s->f40, s->f44);
            if (s->f4 == 3) {
                s->f4 = 0;
                OS_WakeupThreadDirect(s->f0);
            } else if (s->f38 != NULL) {
                if (s->f38(s->f40, s->f44, s) != 0) {
                    s->f44 = 0;
                }
            }
        }
        break;
    }
    func_0200faac(irq);
}

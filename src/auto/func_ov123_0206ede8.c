/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u8 mac[6];
    u16 he;
    u16 h10;
    u8 pad[6];
    u16 h18;
    u16 h1a;
} Pkt;

extern u8 data_ov123_020df230[];
extern u32 data_ov123_020df220;
extern u8 data_ov123_020df1c8;
s32 func_ov123_02070174(void *, void *);
void func_ov123_0206f900(void *, u32, s32);
void func_ov123_0206efa0(Pkt *);

void func_ov123_0206ede8(Pkt *p, u32 len) {
    u16 op;
    u32 ip1;
    u32 ip2;
    s32 r5;
    s32 r7;
    if (len < 0x1c) {
        return;
    }
    if (func_ov123_02070174(p->mac, data_ov123_020df230) == 0) {
        return;
    }
    if (*(s32 *) &data_ov123_020df220 == 0) {
        return;
    }
    if (p->h0 != 0x100) {
        return;
    }
    if (p->h2 != 8) {
        return;
    }
    if (p->h4 != 0x406) {
        return;
    }
    op = (u16) ((p->h6 >> 8) | (p->h6 << 8));
    if (op != 1 && op != 2) {
        return;
    }
    ip1 = ((u16) ((p->he >> 8) | (p->he << 8)) << 16) | (u16) ((p->h10 >> 8) | (p->h10 << 8));
    r5  = (ip1 == data_ov123_020df220) ? 1 : 0;
    ip2 = ((u16) ((p->h18 >> 8) | (p->h18 << 8)) << 16) | (u16) ((p->h1a >> 8) | (p->h1a << 8));
    r7  = (data_ov123_020df220 == ip2) ? 1 : 0;
    if (r5 == 0) {
        func_ov123_0206f900(p->mac, ip1, r7);
    }
    if (op == 1 && r7 != 0) {
        func_ov123_0206efa0(p);
        return;
    }
    if (op != 2) {
        return;
    }
    if (r7 == 0) {
        return;
    }
    if (r5 != 0) {
        data_ov123_020df1c8 = 1;
    }
}

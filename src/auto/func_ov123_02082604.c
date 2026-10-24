/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Sa {
    u8 len;
    u8 fam;
    u16 port;
    u32 addr;
} Sa;

typedef struct In {
    u8 pad[0x10];
    u32 addr;
    u32 port;
} In;

typedef struct Host {
    u8 pad[8];
    In *in;
} Host;

typedef struct Ctx {
    s32 state;
    s32 f4;
    s32 sock;
    s32 f0C;
} Ctx;

s32 func_ov123_0207acc0(s32);
s32 func_ov123_0207ae7c(s32, Sa *, s32);
s32 func_ov123_0207af50(s32, s32, s32);
s32 func_ov123_0207b314(s32, s32);
void func_ov123_0207e68c(s32, s32, s32);
void func_ov123_020829e0(s32);
s32 func_ov123_02083774(s32, s32, Host **);
void func_ov123_02086078(s32, void *);
void func_ov123_0208608c(s32, s32, void *);
extern u8 data_ov123_020dabdc[];
extern u8 data_ov123_020dabf8[];
extern u8 data_ov123_020dac20[];
extern u8 data_ov123_020dac54[];

s32 func_ov123_02082604(s32 arg0, Ctx *arg1) {
    Sa sa;
    Host *h;
    s32 r;
    s32 *p;

    if (func_ov123_02083774(arg0, arg1->f0C, &h) == 0) {
        func_ov123_02086078(arg0, data_ov123_020dabdc);
        return 3;
    }
    arg1->sock = func_ov123_0207af50(2, 1, 0);
    if (arg1->sock == -1) {
        func_ov123_0208608c(arg0, 5, data_ov123_020dabf8);
        func_ov123_0207e68c(arg0, 3, 0);
        return 3;
    }
    if (func_ov123_0207b314(arg1->sock, 0) == 0) {
        func_ov123_0208608c(arg0, 5, data_ov123_020dac20);
        func_ov123_0207e68c(arg0, 3, 0);
        return 3;
    }
    func_ov123_020829e0(arg1->sock);
    p       = (s32 *) &sa;
    p[0]    = 0;
    p[1]    = 0;
    sa.fam  = 2;
    sa.addr = h->in->addr;
    sa.port = h->in->port;
    if (func_ov123_0207ae7c(arg1->sock, &sa, 8) == -1) {
        r = func_ov123_0207acc0(arg1->sock);
        if (r != -6 && r != -0x1A && r != -0x4C) {
            func_ov123_0208608c(arg0, 5, data_ov123_020dac54);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
    }
    arg1->state = 0x67;
    return 0;
}

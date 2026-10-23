/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_0207b3e4(void);
s32 func_ov123_0208aeec(s32, u32 *, u16 *);
void *func_ov123_020996d4(s32);
void func_ov123_020996a0(void *);
void *memset(void *, s32, u32);
s32 func_ov123_0207a7c4(s32, s32, s32, void *, void *, s32);
s32 func_ov123_0207a27c(s32, s32, void *);
void func_ov123_0207a748(s32);
void func_ov123_0207a20c(s32);
s32 func_ov123_0207af50(s32, s32, s32);
s32 func_ov123_0207aec0(s32, void *, s32);
void func_ov123_0207af34(s32);
void func_ov123_0207acf4(s32, void *, s32 *);
typedef struct Sock {
    s32 fd;
    u32 addr;
    u16 port;
    u16 pad;
    s32 f0c;
    s32 f10;
    u8 pad2[0x10];
    s32 f24;
    u8 pad3[0x10];
    s32 f38;
    s32 f3c;
    s32 f40;
} Sock;
typedef struct SockAddr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
} SockAddr;
extern u8 func_ov123_0208ae38;
extern u8 func_ov123_0208ae48;
extern u8 func_ov123_0208ae78;
s32 func_ov123_0208abd4(Sock **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    SockAddr sa;
    u32 ip;
    s32 len;
    u16 port;
    Sock *s;
    func_ov123_0207b3e4();
    if (arg3 == 0) {
        arg3 = 0x10000;
    }
    if (arg2 == 0) {
        arg2 = 0x10000;
    }
    if (func_ov123_0208aeec(arg1, &ip, &port) == 0) {
        return 4;
    }
    s = func_ov123_020996d4(0x44);
    if (s == NULL) {
        return 1;
    }
    memset(s, 0, 0x44);
    s->fd  = -1;
    s->f3c = arg3;
    s->f38 = arg2;
    s->f24 = arg4;
    s->f0c = func_ov123_0207a7c4(4, 0x20, 2, &func_ov123_0208ae78, &func_ov123_0208ae48, 0);
    if (s->f0c == 0) {
        func_ov123_020996a0(s);
        return 1;
    }
    s->f10 = func_ov123_0207a27c(4, 4, &func_ov123_0208ae38);
    if (s->f10 == 0) {
        func_ov123_0207a748(s->f0c);
        func_ov123_020996a0(s);
        return 1;
    }
    s->fd = func_ov123_0207af50(2, 2, 0);
    if (s->fd == -1) {
        func_ov123_0207a748(s->f0c);
        func_ov123_0207a20c(s->f10);
        func_ov123_020996a0(s);
        return 3;
    }
    {
        s32 *z = (s32 *) &sa;
        z[0]   = 0;
        z[1]   = 0;
    }
    sa.family = 2;
    sa.addr   = ip;
    sa.port   = (u16) (((port >> 8) & 0xFF) | ((port << 8) & 0xFF00));
    if (func_ov123_0207aec0(s->fd, &sa, 8) == -1) {
        func_ov123_0207af34(s->fd);
        func_ov123_0207a748(s->f0c);
        func_ov123_0207a20c(s->f10);
        func_ov123_020996a0(s);
        return 3;
    }
    len = 8;
    func_ov123_0207acf4(s->fd, &sa, &len);
    s->addr = sa.addr;
    s->port = (u16) (((sa.port >> 8) & 0xFF) | ((sa.port << 8) & 0xFF00));
    *arg0   = s;
    return 0;
}

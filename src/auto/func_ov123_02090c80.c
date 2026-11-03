/* compiler: 1.2/sp3 */
/* near start: 9 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 a, b, c, d;
} Four;
typedef struct {
    u8 len;
    u8 fam;
    u16 port;
    s32 addr;
} SockAddr;
typedef struct {
    u8 pad[0xc];
    u8 **list;
} HostEnt;
extern s32 *data_ov123_020e1658;
extern char data_ov123_020dbe10[];
char *func_ov123_02090db4(u8 *, s32);
char *func_02024c44(char *, const char *);
s32 func_0202373c(char *, char *, u8 *, char *);
s32 func_ov123_0207acd0(char *);
HostEnt *func_ov123_02073aec(char *);
s32 func_ov123_0207af50(s32, s32, s32);
s32 func_ov123_0207ae7c(s32, SockAddr *, s32);
void func_ov123_0207af34(s32);
s32 func_ov123_02090c80(u8 *ctx) {
    SockAddr sa;
    char buf[128];
    char *t;
    HostEnt *h;
    u8 *src;
    u8 *d;
    t = func_ov123_02090db4(ctx + 0xc, 0x14);
    if (data_ov123_020e1658 != 0) {
        func_02024c44(buf, (const char *) data_ov123_020e1658);
    } else {
        func_0202373c(buf, data_ov123_020dbe10, ctx + 0xc, t);
    }
    sa.fam  = 2;
    sa.port = 0xee70;
    sa.addr = func_ov123_0207acd0(buf);
    if (sa.addr == -1) {
        h = func_ov123_02073aec(buf);
        if (h == 0) {
            return 2;
        }
        src                        = *h->list;
        *(Four *) ((s32) &sa.addr) = *(Four *) src;
    }
    if (*(s32 *) (ctx + 0x4b0) == -1) {
        *(s32 *) (ctx + 0x4b0) = func_ov123_0207af50(2, 1, 0);
        if (*(s32 *) (ctx + 0x4b0) == -1) {
            return 1;
        }
    }
    if (func_ov123_0207ae7c(*(s32 *) (ctx + 0x4b0), &sa, 8) == 0) {
        return 0;
    }
    func_ov123_0207af34(*(s32 *) (ctx + 0x4b0));
    *(s32 *) (ctx + 0x4b0) = -1;
    return 3;
}

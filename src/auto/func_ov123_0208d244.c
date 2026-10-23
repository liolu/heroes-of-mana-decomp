/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 len;
    u8 family;
    u16 port;
    s32 addr;
} SA;
typedef struct {
    u8 pad[0xc];
    s32 **list;
} H;
extern char data_ov123_020db798[];
s32 func_ov123_0207acd0(char *);
s32 func_02024d8c(char *, char *);
H *func_ov123_02073aec(char *);
s32 func_ov123_0208d244(char *host, s32 port0, SA *sa, H **out) {
    H *h       = 0;
    u16 port   = port0;
    sa->family = 2;
    sa->port   = (u16) (((port >> 8) & 0xff) | ((port << 8) & 0xff00));
    if (host == 0) {
        sa->addr = 0;
    } else {
        sa->addr = func_ov123_0207acd0(host);
    }
    if (sa->addr == -1) {
        if (func_02024d8c(host, data_ov123_020db798) != 0) {
            h = func_ov123_02073aec(host);
            if (h == 0) {
                return 0;
            }
            sa->addr = **h->list;
        }
    }
    if (out != 0) {
        *out = h;
    }
    return 1;
}

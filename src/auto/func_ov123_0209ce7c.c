#include "m2c.h"

typedef struct {
    u8 pad[0x34];
    void (*cb)(s32, s32, u8 *, s32);
    s32 arg;
} Hld;
extern Hld *data_ov123_020e18dc;
s32 func_ov123_0209cdb0(s32);
void func_ov123_0207b87c(s32, s32, u8 *);

void func_ov123_0209ce7c(s32 arg0, s32 *arg1) {
    u8 buf[0x210];
    s32 r;
    if (data_ov123_020e18dc->cb == 0) {
        return;
    }
    r = func_ov123_0209cdb0(arg1[0]);
    if (r == -1) {
        return;
    }
    func_ov123_0207b87c(arg0, arg1[2], buf);
    data_ov123_020e18dc->cb(r, *(s32 *) (buf + 4) & 0xff, buf + 0x108, data_ov123_020e18dc->arg);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 fd;
    s16 ev;
    s16 rev;
} P;
s32 func_ov123_020734ac(P *, s32, s32, s32);

s32 func_ov123_0207b0f4(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    P p;
    s32 r;

    p.ev = 0;
    p.fd = arg0;
    if (arg1 != NULL) {
        p.ev |= 1;
    }
    if (arg2 != NULL) {
        p.ev |= 8;
    }
    p.rev = 0;
    r     = func_ov123_020734ac(&p, 1, 0, 0);
    if (r < 0) {
        return -1;
    }
    if (arg1 != NULL) {
        if (r > 0 && (p.rev & 0x41)) {
            *arg1 = 1;
        } else {
            *arg1 = 0;
        }
    }
    if (arg2 != NULL) {
        if (r > 0 && (p.rev & 8)) {
            *arg2 = 1;
        } else {
            *arg2 = 0;
        }
    }
    if (arg3 == NULL) {
        return r;
    }
    if (r > 0 && (p.rev & 0x20)) {
        *arg3 = 1;
        return r;
    }
    *arg3 = 0;
    return r;
}

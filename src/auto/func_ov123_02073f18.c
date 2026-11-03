/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020733a8(void *obj);
s32 func_ov123_02073ec8(void *obj, void *arg);

s32 func_ov123_02073f18(void *arg0, void *arg1) {
    s32 ok;
    s8 mode;
    s16 flags;

    if (func_ov123_020733a8(arg0) != 0) {
        return -28;
    }
    mode = *(s8 *) ((u8 *) arg0 + 0x73);
    ok   = 1;
    if (mode != 0) {
        if (mode != 4) {
            ok = 0;
        }
    }
    if (ok == 0) {
        return -28;
    }
    ok = 0;
    if (arg0 != NULL) {
        flags = *(s16 *) ((u8 *) arg0 + 0x70);
        ok    = ((flags & 1) != 0);
    }
    if (ok == 0) {
        return -39;
    }
    flags = *(s16 *) ((u8 *) arg0 + 0x70);
    if ((flags & 2) != 0) {
        return -28;
    }
    return func_ov123_02073ec8(arg0, arg1);
}

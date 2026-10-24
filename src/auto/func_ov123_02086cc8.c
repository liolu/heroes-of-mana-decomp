/* compiler: 1.2/sp2p3 */
#include "m2c.h"
char *func_ov123_02086cc8(char *buf, s32 len) {
    char *p;
    s32 n = len - 6;
    for (p = buf; p - buf < n; p++) {
        if (p[0] != 0x5c) {
            continue;
        }
        if (p[1] != 'f') {
            continue;
        }
        if (p[2] != 'i') {
            continue;
        }
        if (p[3] != 'n') {
            continue;
        }
        if (p[4] != 'a') {
            continue;
        }
        if (p[5] != 'l') {
            continue;
        }
        if (p[6] != 0x5c) {
            continue;
        }
        return p;
    }
    return NULL;
}

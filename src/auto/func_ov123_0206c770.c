/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_ov123_02074320(void *);
typedef struct {
    u32 a;
    u8 *p;
} T;
extern T OSi_ThreadInfo;

s32 func_ov123_0206c770(void) {
    u8 *r0;
    s32 r1;
    u8 b;

    r0 = *(u8 **) (OSi_ThreadInfo.p + 0xA4);
    if (r0 != 0) {
        if (r0[9] != 0) {
            return func_ov123_02074320(r0);
        }
        r1 = *(s32 *) (r0 + 0x44);
        if (r1 != 0 || (b = r0[8]) == 4 || (u8) (b + 0xF6) <= 1) {
            return r1;
        }
        return -1;
    }
    return 0;
}

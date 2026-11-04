/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[2];
    u8 f;
    u8 bits[5];
} M;
extern M data_ov003_020b532c;
s32 GetCanSelMapNoVS(s32 a, s32 b) {
    a += b;
    for (;; a += b) {
        if (a >= 0x28) {
            a -= 0x28;
        }
        if (a < 0) {
            a += 0x28;
        }
        if (a == 0xD && data_ov003_020b532c.f == 1) {
            continue;
        }
        if (data_ov003_020b532c.bits[a / 8] & (1 << (a & 7))) {
            break;
        }
    }
    return a;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u64 func_0200f510(void);
extern void func_ov123_02070830(void);
extern void func_ov123_02074108(void *);
typedef struct {
    u32 a;
    u8 *p;
} T;
extern T OSi_ThreadInfo;
extern s32 (*data_ov123_020df218)(void);

void func_ov123_0206cf80(void) {
    u8 *r4;
    s32 r6;

    r4 = *(u8 **) (OSi_ThreadInfo.p + 0xA4);
    if (r4 == 0) {
        return;
    }
    if (r4[9] != 0) {
        func_ov123_02074108(r4);
    }
    r6 = (u32) (func_0200f510() >> 16);
    while (data_ov123_020df218() != 0 && r4[8] != 0 && (s32) ((u32) (func_0200f510() >> 16) - r6) < 0x27) {
        func_ov123_02070830();
    }
    r4[8] = 0;
}

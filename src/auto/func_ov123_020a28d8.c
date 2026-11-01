/* compiler: 1.2/sp3 */
/* near start: 2 diffs with profile "1.2/sp3" */
/* near start: 11 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct G {
    u8 pad[0xe];
    u8 n;
    u8 pad2[0x2c1];
    u8 arr[0x20];
    u32 bits;
} G;
extern G *func_ov123_0209d368(void);
extern void MI_CpuFill8(void *, s32, s32);
extern u8 data_ov123_020e18f0[];

s32 func_ov123_020a28d8(u8 **out) {
    s32 i;
    u8 *p;
    s32 t;
    s32 m;
    G *g;
    if (func_ov123_0209d368() == NULL) {
        return 0;
    }
    MI_CpuFill8(data_ov123_020e18f0, 0, 0x20);
    i = 0;
    if ((s32) func_ov123_0209d368()->n >= 0) {
        p = data_ov123_020e18f0;
        do {
            g = func_ov123_0209d368();
            t = g->bits & (1 << (*(u8 *) (((u8 *) func_ov123_0209d368()) + i + 0x2d0)));
            if (t != 0) {
                *p = *(u8 *) (((u8 *) func_ov123_0209d368()) + i + 0x2d0);
                i++;
                p++;
                if (i > func_ov123_0209d368()->n) {
                    break;
                }
            } else {
                break;
            }
        } while (1);
    }
    *out = data_ov123_020e18f0;
    return func_ov123_0209d368()->n + 1;
}

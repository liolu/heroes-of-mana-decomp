/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 v : 4;
} BF;
void MI_CpuCopy8(void *, u8 *, s32);
u8 func_ov123_02092a74(u8 *);
extern u8 data_ov123_020d503c;
extern u8 data_ov123_020d504c;
extern u8 data_ov123_020dbe38;

u8 func_ov123_02092b8c(u8 *p) {
    u8 r5;
    u8 *r4;
    u32 t;
    r4 = p + 0x300;
    r5 = func_ov123_02092a74(p);
    r4 = r4 + r5 * 0x24;
    t  = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 4) {
        MI_CpuCopy8(&data_ov123_020dbe38, r4 + 4, 8);
        r4[3] = 8;
        r4[1] = 6;
        r5 += 1;
        r4 += 0x24;
    }
    t = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 7) {
        MI_CpuCopy8(&data_ov123_020d503c, r4 + 4, 8);
        r4[3] = 8;
        r4[1] = 9;
        r5 += 1;
        r4 += 0x24;
    }
    t = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 8) {
        MI_CpuCopy8(&data_ov123_020d504c, r4 + 4, 0xB);
        r4[3] = 0xB;
        r4[1] = 0xA;
        r5 += 1;
    }
    return r5;
}

/* compiler: 1.2/sp3 */
/* near start: 8 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern u8 *data_ov123_020e470c;
extern void MI_CpuCopy8(u8 *, u8 *, s32);
extern s32 func_ov123_020c6db4(void);
extern s32 func_ov123_020c65d4(u8 *);
extern s32 func_ov123_020c6dc8(void);
extern s32 func_ov123_020c6684(s32);

void func_ov123_020c7904(s32 x, s32 y, u8 *z) {
    u8 *r5;
    u16 r7;
    s32 r;
    u8 *src;

    r5 = data_ov123_020e470c;
    if (*(u8 *) (r5 + 0xA93) == 1) {
        *(u16 *) (*(u8 **) (data_ov123_020e470c + 0xAB0))     = (u16) x;
        *(u16 *) (*(u8 **) (data_ov123_020e470c + 0xAB0) + 2) = (u16) y;
        MI_CpuCopy8(z, *(u8 **) (data_ov123_020e470c + 0xAB0) + 4, 0x40);
    } else {
        *(s32 *) (r5 + 0x204)                                = *(s32 *) (r5 + 0x204) + 1;
        *(u16 *) (*(u8 **) (data_ov123_020e470c + 0xAB0))    = 0xBC;
        *(u8 *) (*(u8 **) (data_ov123_020e470c + 0xAB0) + 4) = *(u8 *) (data_ov123_020e470c + 0xA92);
    }
    r = func_ov123_020c6db4();
    if (r != 5) {
        return;
    }
    if (func_ov123_020c65d4(data_ov123_020e470c) == 0) {
        *(s32 *) (data_ov123_020e470c + 0x204) = *(s32 *) (data_ov123_020e470c + 0x204) + 4;
        return;
    }
    if (*(u8 *) (data_ov123_020e470c + 0xA93) == 0) {
        *(s32 *) (data_ov123_020e470c + 0x204) = *(s32 *) (data_ov123_020e470c + 0x204) + 1;
    } else {
        *(s32 *) (data_ov123_020e470c + 0x204) = 0;
        r                                      = func_ov123_020c6dc8();
        if (r != 3) {
            *(u8 *) (data_ov123_020e470c + 0xA90) = 0x1B;
            return;
        }
    }
    r7 = 0;
    do {
        src = (u8 *) func_ov123_020c6684(r7);
        if (src != 0) {
            MI_CpuCopy8(src, data_ov123_020e470c + 0x100 + r7 * 0x44, 0x44);
            *(s32 *) (data_ov123_020e470c + 0x208 + r7 * 4) = 1;
        } else {
            *(s32 *) (data_ov123_020e470c + 0x208 + r7 * 4) = 0;
        }
        r7++;
    } while (r7 < 2);
}

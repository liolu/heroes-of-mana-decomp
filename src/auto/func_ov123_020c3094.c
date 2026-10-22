/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Rec {
    u8 b[0xF0];
} Rec;

extern s32 func_020213f0(void *, void *, s32);
extern void func_ov123_020a5784(u8, void *);
extern u8 data_ov123_020d82e4[];
extern u8 *data_ov123_020e46d0;

void func_ov123_020c3094(s8 arg0) {
    u8 *base;
    u8 *rec;
    base                    = data_ov123_020e46d0;
    rec                     = base + (arg0 << 8);
    *(Rec *) (base + 0x400) = *(Rec *) rec;
    base[0x4F4]             = arg0;
    if (func_020213f0(rec + 0xC0, data_ov123_020d82e4, 4) != 0) {
        data_ov123_020e46d0[0x4F5] = 0;
    } else {
        data_ov123_020e46d0[0x4F5] = 1;
    }
    if ((func_020213f0(rec + 0xC8, data_ov123_020d82e4, 4) != 0) || (func_020213f0(rec + 0xCC, data_ov123_020d82e4, 4) != 0)) {
        data_ov123_020e46d0[0x4F6] = 0;
    } else {
        data_ov123_020e46d0[0x4F6] = 1;
    }
    func_ov123_020a5784(rec[0xD0], data_ov123_020e46d0 + 0x4F0);
}

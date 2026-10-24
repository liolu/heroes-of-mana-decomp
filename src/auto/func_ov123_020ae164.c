/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 slot[4];
    u8 p[6];
    s8 b16;
    u8 b17;
} G;

extern u8 data_ov123_020d7970[];
extern u8 data_ov123_020d7980[];
extern G *data_ov123_020e4568;
G *func_ov123_020ca4ec(s32, s32);
s32 func_ov123_020c92b0(s32, s32, s32);
void func_ov123_020c8cb8(s32, s32, s32);
void func_ov123_020adfe4(s32);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);
extern u8 func_ov123_020adf70;

void func_ov123_020ae164(s32 a0) {
    s32 cnt = data_ov123_020d7970[a0];
    s32 i;
    data_ov123_020e4568      = func_ov123_020ca4ec(0x1C, 4);
    data_ov123_020e4568->b16 = -2;
    data_ov123_020e4568->b17 = a0;
    for (i = 0; i < cnt; i++) {
        data_ov123_020e4568->slot[i] = func_ov123_020c92b0(0, data_ov123_020d7980[a0 * 2 + i], 1);
        func_ov123_020c8cb8(data_ov123_020e4568->slot[i], -1, 1);
    }
    data_ov123_020e4568->slot[2] = func_ov123_020c92b0(0, 1, 1);
    func_ov123_020c8cb8(data_ov123_020e4568->slot[2], -1, 1);
    func_ov123_020adfe4(0xC0);
    data_ov123_020e4568->slot[3] = func_ov123_020cb6ac(0, &func_ov123_020adf70, 0, 0x78);
}

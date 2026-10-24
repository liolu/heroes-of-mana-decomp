/* compiler: 1.2/sp3 */
/* near start: 15 diffs with profile "1.2/sp3 -O2,p" */
#include "m2c.h"

typedef struct {
    s32 p[4];
    s32 w10;
    u16 cnt;
    s8 f16;
    u8 f17;
} G;

typedef struct {
    s32 v;
} W;

typedef struct {
    u16 a;
    u16 b;
} Pr;

void func_ov123_020adfe4(u16);
void func_ov123_020c8cb8(s32, s32, s32);
s32 func_ov123_020c8f80(s32, s32);
void func_ov123_020c9324(s32, u8, s32);
void func_ov123_020cb5f8(s32, s32);
extern Pr data_ov123_020d7968;
extern u8 data_ov123_020d7970[];
extern u8 data_ov123_020d7980[];
extern G *data_ov123_020e4568;

void func_ov123_020adb98(s32 arg) {
    s32 n;
    s32 i;
    u8 id;
    data_ov123_020e4568->cnt = data_ov123_020e4568->cnt + 1;
    if (data_ov123_020e4568->cnt < 0x10) {
        return;
    }
    i = 0;
    n = data_ov123_020d7970[data_ov123_020e4568->f17];
    if (n > 0) {
        do {
            id = *(data_ov123_020d7980 + data_ov123_020e4568->f17 * 2 + i);
            func_ov123_020c9324(0, id, func_ov123_020c8f80(data_ov123_020e4568->p[i], 0));
            func_ov123_020c8cb8(data_ov123_020e4568->p[i], -1, 1);
            i++;
        } while (i < n);
    }
    func_ov123_020adfe4(data_ov123_020d7968.b);
    data_ov123_020e4568->cnt = 0;
    data_ov123_020e4568->f16 = -1;
    if (data_ov123_020e4568->w10 == 0) {
        return;
    }
    data_ov123_020e4568->w10 = 0;
    func_ov123_020cb5f8(0, arg);
}

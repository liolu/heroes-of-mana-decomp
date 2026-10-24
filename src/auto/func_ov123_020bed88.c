/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Q {
    u8 b[4];
} Q;

void func_ov123_020c1c4c(s32, s32, s32);
s32 func_ov123_020c317c(void);
void func_ov123_020c8e38(s32, s32, s32, s32);
extern Q data_ov123_020d8100;
extern Q data_ov123_020d8104;
extern u8 data_ov123_020e4690;
extern s32 *data_ov123_020e4694;

void func_ov123_020bed88(void) {
    Q a = data_ov123_020d8100;
    Q b = data_ov123_020d8104;
    s32 v;
    u8 i = data_ov123_020e4690;
    if (i > 3) {
        return;
    }
    func_ov123_020c1c4c(*data_ov123_020e4694, a.b[i], a.b[i]);
    if (data_ov123_020e4690 == 3) {
        return;
    }
    v = func_ov123_020c317c();
    if (v > 2) {
        v = 3;
    }
    func_ov123_020c8e38(*(s32 *) ((u8 *) data_ov123_020e4694 + data_ov123_020e4690 * 4 + 4), -1, 0, b.b[v]);
}

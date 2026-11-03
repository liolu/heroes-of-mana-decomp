/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 b[4];
} B4;
void func_ov123_020c1c4c(s32, s32, s32);
extern B4 data_ov123_020d81b0;
extern s8 data_ov123_020e469c;
extern s32 data_ov123_020e46a4;

void func_ov123_020bfbec(void) {
    B4 buf = data_ov123_020d81b0;
    func_ov123_020c1c4c(data_ov123_020e46a4, buf.b[data_ov123_020e469c], buf.b[data_ov123_020e469c]);
}

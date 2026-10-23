/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_020c1c4c(s32, s32, s32);
extern u8 data_ov123_020d7eb8;
typedef struct {
    u8 p[8];
    s32 f;
} S;
extern S *data_ov123_020e4654;
void func_ov123_020b73f0(void) {
    volatile u8 v = data_ov123_020d7eb8;
    u8 a          = v;
    func_ov123_020c1c4c(data_ov123_020e4654->f, a, a);
}

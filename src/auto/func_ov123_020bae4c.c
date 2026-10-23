/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 *data_ov123_020e4674;
extern void func_ov123_020bc1fc();
void func_ov123_020bae4c(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        u8 *p = data_ov123_020e4674 + i;
        if (p[4] != 0) {
            p[4] = p[4] - 1;
            if (data_ov123_020e4674[i + 4] == 0) {
                func_ov123_020bc1fc();
            }
        }
    }
}

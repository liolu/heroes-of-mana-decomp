/* compiler: 1.2/sp3 */
#include "m2c.h"
s8 func_ov123_0208d988(s32, u8);
void func_ov123_0208d940(s32 a, u8 *b, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        b[i] = func_ov123_0208d988(a, b[i]);
    }
}

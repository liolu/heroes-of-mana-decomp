/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_0208e8c4(s32, s32);
void func_ov123_02091110(u8 *o, s32 a) {
    if (*(s32 *) (o + 0x5D0) == 0) {
        func_ov123_0208e8c4(a, 0);
    } else {
        func_ov123_0208e8c4(a, *(s32 *) (o + 0x5D0));
    }
    *(s32 *) (o + 0x5D0) = a;
}

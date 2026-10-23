#include "m2c.h"
s32 func_ov123_02079808(u8 *a, s32 n) {
    while (n != 0 && *(u16 *) (a + (n - 1) * 2) == 0) {
        n--;
    }
    return n;
}

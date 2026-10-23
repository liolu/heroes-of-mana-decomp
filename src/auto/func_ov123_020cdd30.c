#include "m2c.h"
extern s32 STD_GetStringLength(const char *s);
s32 func_ov123_020cdd30(char *s) {
    s32 n, last, i;
    if (s != 0) {
        n = STD_GetStringLength(s);
        if (n > 2 && n <= 0x40) {
            last = n - 1;
            for (i = 1; i < last; i++) {
                if (s[i] == '.') {
                    return 1;
                }
            }
        }
    }
    return 0;
}

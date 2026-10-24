/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_020787b4(u8 *s, u8 *buf, s32 n) {
    s32 k = 0;
    u8 i  = s[0];
    u8 j  = s[1];
    u8 *S = s + 2;
    if (n > 0) {
        do {
            u8 a, b;
            i    = i + 1;
            a    = S[i];
            j    = j + a;
            b    = S[j];
            S[i] = b;
            S[j] = a;
            buf[k] ^= S[(u8) (a + b)];
            k++;
        } while (k < n);
    }
    s[0] = i;
    s[1] = j;
}

/* compiler: 1.2/sp3 */
/* r30 a7: flat conditions (target: beq 0 skip, then cmp 0xff), post-increment byte loads, n tracked as s32 */
#include "m2c.h"
extern void func_ov123_0208cb78(s32, s32, s32, u8 *, s32, u8 *, s32, u8 *);
void func_ov123_0208cab4(s32 a, s32 b, u8 *p, s32 n) {
    u8 l1;
    u8 l2;
    u8 l3;
    u8 *s1;
    u8 *s2;
    u8 *s3;
    s1 = 0;
    s2 = 0;
    s3 = 0;
    if (n < 3) {
        return;
    }
    l1 = *p++;
    n  = n - 1;
    if (l1 != 0) {
        if (l1 != 0xff) {
            s1 = p;
            p  = p + l1;
            n  = n - l1;
        }
    }
    if (n < 2) {
        return;
    }
    l2 = *p++;
    n  = n - 1;
    if (l2 != 0) {
        if (l2 != 0xff) {
            s2 = p;
            p  = p + l2;
            n  = n - l2;
        }
    }
    if (n < 1) {
        return;
    }
    l3 = *p;
    n  = n - 1;
    if (l3 != 0) {
        if (l3 != 0xff) {
            s3 = p + 1;
            n  = n - l3;
        }
    }
    if (n < 0) {
        return;
    }
    func_ov123_0208cb78(a, b, l1, s1, l2, s2, l3, s3);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 v;
    s32 c;
} N;
extern u8 *func_ov123_0208eb2c(u8 *);
extern N *func_ov123_0207a4f0(u8 *, s32 *);
extern s32 func_ov123_0207b3a0(s32);
extern void func_ov123_0207a62c(u8 *, s32 *);
s32 func_ov123_02090f88(u8 *o, s32 key) {
    s32 s[3];
    N *r;
    s[0] = key;
    r    = func_ov123_0207a4f0(func_ov123_0208eb2c(o), s);
    if (r != 0) {
        r->c = r->c + 1;
        return r->v;
    }
    s[0] = func_ov123_0207b3a0(key);
    s[1] = 1;
    func_ov123_0207a62c(func_ov123_0208eb2c(o), s);
    return s[0];
}

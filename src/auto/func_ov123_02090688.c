/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_0207a204(s32 *);
s32 func_ov123_0207a194(void *, s32);
void func_ov123_02090f08(void *, s32);
void func_ov123_0207a20c(void *);
void func_ov123_02090688(u8 *p) {
    s32 i;
    if (*(void **) (p + 8) == 0) {
        return;
    }
    for (i = 0; i < func_ov123_0207a204(*(s32 **) (p + 8)); i++) {
        s32 *e = (s32 *) func_ov123_0207a194(*(void **) (p + 8), i);
        func_ov123_02090f08(p, *e);
    }
    func_ov123_0207a20c(*(void **) (p + 8));
    *(void **) (p + 8) = 0;
}

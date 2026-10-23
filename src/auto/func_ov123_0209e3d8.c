#include "m2c.h"
extern s64 func_0200f510(void);
extern u8 *func_ov123_0209d368(void);
void func_ov123_0209e3d8(void) {
    u8 *p;
    func_ov123_0209d368()[0x1AD] = 0;
    p                            = func_ov123_0209d368();
    *(s64 *) (p + 0x1F8)         = func_0200f510();
}

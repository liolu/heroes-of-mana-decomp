/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98(void);                            /* extern */
void func_0200faac(s32 arg0);                       /* extern */
extern void *data_ov123_020df180;

s32 func_ov123_02068880(void) {
    s32 irq;
    void *v;

    irq = func_0200fa98();
    v   = data_ov123_020df180;
    if (v == NULL) {
        func_0200faac(irq);
        return 1;
    }
    if (M2C_FIELD(v, s32 *, 0x2260) != 1) {
        func_0200faac(irq);
        return 1;
    }
    data_ov123_020df180 = NULL;
    func_0200faac(irq);
    return 0;
}

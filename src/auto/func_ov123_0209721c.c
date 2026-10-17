/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e0a4(M2C_UNK);                     /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_0200fd0c(void *);                      /* extern */
M2C_UNK func_ov123_02075154(void *, M2C_UNK);       /* extern */

s32 func_ov123_0209721c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1130) == 1) {
        func_0200fd0c(arg0 + 0x19D4);
        func_ov123_02075154(arg0 + 0x19D4, 0x20);
    }
    OS_LockMutex(arg0 + 0x1BF8);
    if (M2C_FIELD(arg0, s32 *, 0x1C10) == 1) {
        func_0200e644(arg0 + 0x1BF8);
        return 0;
    }
    func_0200e644(arg0 + 0x1BF8);
    func_0200e0a4(0xA);
    return 1;
}

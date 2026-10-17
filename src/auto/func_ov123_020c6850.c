/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_SetIndCallback(M2C_UNK *);                   /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020c6908;

void func_ov123_020c6850(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_ov123_020c7718();
        func_ov123_020c7738(0xA);
        return;
    }
    if (WM_SetIndCallback(&func_ov123_020c6908) != 0) {
        func_ov123_020c7718();
        func_ov123_020c7738(0xA);
        return;
    }
    func_ov123_020c7738(1);
}

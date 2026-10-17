/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_JoinThread(void *);                      /* extern */
M2C_UNK func_ov123_020957d0();                      /* extern */
M2C_UNK func_ov123_020972a4();                      /* extern */
extern void *data_ov123_020e1694;
extern s32 data_ov123_020e16a4;

void func_ov123_02098674(void) {
    if (data_ov123_020e1694 == NULL) {
        return;
    }
    if (data_ov123_020e16a4 != 0) {
        func_ov123_020972a4();
    }
    func_ov123_020957d0();
    if (M2C_FIELD(data_ov123_020e1694, s32 *, 0x1188) != 0) {
        OS_JoinThread(data_ov123_020e1694 + 0x111C);
    }
    M2C_FIELD(data_ov123_020e1694, s32 *, 0x1004) = -7;
}

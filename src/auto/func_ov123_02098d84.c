/* compiler: 1.2/sp3 */
/* near start: 10 diffs with profile "1.2/sp3" */
#include "m2c.h"

s32 func_0200dd3c(void *);                          /* extern */
M2C_UNK func_ov123_02096ca8(void *);                /* extern */
s32 func_ov123_02098b4c();                          /* extern */
M2C_UNK func_ov123_02099524(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e1718;

s32 func_ov123_02098d84(void) {
    s32 temp_r0;

    if (data_ov123_020e1718 == NULL) {
        return 0;
    }
    if (M2C_FIELD(data_ov123_020e1718, s32 *, 0x1BAC) == 0) {
        return 1;
    }
    if (func_0200dd3c(data_ov123_020e1718 + 0x1B40) == 1) {
        temp_r0 = M2C_FIELD(data_ov123_020e1718, s32 *, 0x1028);
        switch (temp_r0) {
            case 8:
                if (func_ov123_02098b4c() == 0) {
                    func_ov123_02096ca8(data_ov123_020e1718 + 8);
                    return 4;
                }
                func_ov123_02096ca8(data_ov123_020e1718 + 8);
                return 3;
            case 7:
                func_ov123_02096ca8(data_ov123_020e1718 + 8);
                return 5;
            default:
                func_ov123_02096ca8(data_ov123_020e1718 + 8);
                func_ov123_02099524(0x11, 0xFFFFA1DB);
                return 4;
        }
    }
    return 2;
}
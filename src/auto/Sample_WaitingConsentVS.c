/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

s32 SubWindowMessageSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 CallTrsForLoop();                          /* extern */
M2C_UNK TrsModeSet(M2C_UNK, M2C_UNK);      /* extern */
s32 checkConnectParent();                          /* extern */
M2C_UNK func_ov121_020f3524(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov121_020f3af8();                      /* extern */
s32 func_ov121_020f3c60();                          /* extern */
extern M2C_UNK data_ov000_02050678;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020b54e8;

s32 Sample_WaitingConsentVS(void) {
    M2C_UNK var_r0;
    s32 temp_r0;
    s32 temp_r0_2;

    TrsModeSet(4, 0);
    func_ov121_020f3524(3, 0);
loop_1:
    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) << 0x1A) >> 0x1C) != 5) {
        if (checkConnectParent() == 0) {
            M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0xF44), M2C_UNK(**)(), 0x10)();
            var_r0 = 0xF;
        } else if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) << 0x1A) >> 0x1C) == 0xB) {
            func_ov121_020f3af8();
            var_r0 = 0xD;
        } else {
            temp_r0 = func_ov121_020f3c60();
            switch (temp_r0) {                      /* switch 1; irregular */
                case 4:                                 /* switch 1 */
                    func_ov121_020f3af8();
                    var_r0 = 4;
                    break;
                case 14:                                /* switch 1 */
                    func_ov121_020f3af8();
                    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0xF44), M2C_UNK(**)(), 0x10)();
                    var_r0 = 0xE;
                    break;
                default:                                /* switch 1 */
                    if ((CallTrsForLoop() == 0) || (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) * 4) >> 0x1F) == 0)) {
                        M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0xF44), M2C_UNK(**)(), 0x10)();
                        var_r0 = 0xF;
                    } else {
                        goto loop_1;
                    }
                    break;
            }
        }
    } else {
        func_ov121_020f3af8();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~0x3C) | 0xC);
        temp_r0_2                                   = SubWindowMessageSet(0, 0x6A, 0, 0);
        switch (temp_r0_2) {                        /* switch 2; irregular */
            case 14:                                    /* switch 2 */
                M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0xF44), M2C_UNK(**)(), 0x10)();
                var_r0 = 0xE;
                break;
            case 5:                                     /* switch 2 */
                var_r0 = 5;
                break;
            case 13:                                    /* switch 2 */
                var_r0 = 0xD;
                break;
            default:                                    /* switch 2 */
                var_r0 = 0xF;
                break;
        }
    }
    return var_r0;
}

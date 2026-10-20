#include "m2c.h"

M2C_UNK func_02000f44(M2C_UNK);                     /* extern */
M2C_UNK func_02000f78(M2C_UNK);                     /* extern */
M2C_UNK func_ov122_02051560(M2C_UNK);               /* extern */
M2C_UNK func_ov122_020516cc();                      /* extern */
M2C_UNK func_ov122_020516f4();                      /* extern */
M2C_UNK func_ov122_02055af0();                      /* extern */
M2C_UNK func_ov122_0205ce60(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_0205cecc();                      /* extern */
M2C_UNK func_ov122_0205dafc(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020d2e24();                          /* extern */
M2C_UNK func_ov123_020d2ec4();                      /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_02051640(M2C_UNK arg0) {
    func_02000f44(0x13);
    func_ov122_020516cc();
    switch (func_ov123_020d2e24()) {
    case 3:
        func_ov122_0205dafc(0, 3);
        break;
    case 4:
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) & ~0x80);
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xE34) = 0x3C;
        func_ov122_0205ce60(0x100000, 0x80000000);
        while (1) {
            func_ov122_02055af0();
        }
    default:
        break;
    }
    func_ov122_02051560(arg0);
    func_ov122_0205cecc();
    func_ov123_020d2ec4();
    func_ov122_020516f4();
    func_02000f78(0x13);
}

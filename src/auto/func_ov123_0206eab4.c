/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206ebb0(s32, s32);                  /* extern */
M2C_UNK func_ov123_0206ebe0(void *, u8 *, M2C_UNK); /* extern */
M2C_UNK func_ov123_0206ecf8(void *, u8 *, M2C_UNK); /* extern */
s32 func_ov123_02070358(u8 *, M2C_UNK);             /* extern */

void func_ov123_0206eab4(void *arg0, u8 *arg1, M2C_UNK arg2) {
    u16 temp_ip;
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r7;
    u8 temp_r0_2;

    if (func_ov123_02070358(arg1, arg2) != 0xFFFF) {
        return;
    }
    temp_ip = M2C_FIELD(arg0, u16 *, 0x10);
    temp_r7 = M2C_FIELD(arg0, u16 *, 0xC);
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x12);
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xE);
    if (func_ov123_0206ebb0(
            ((u16) (((s32) temp_r7 >> 8) | (temp_r7 << 8)) << 0x10) | (u16) (((s32) temp_r0 >> 8) | (temp_r0 << 8)),
            ((u16) (((s32) temp_ip >> 8) | (temp_ip << 8)) << 0x10) | (u16) (((s32) temp_r1 >> 8) | (temp_r1 << 8))) == 0) {
        return;
    }
    temp_r0_2 = *arg1;
    switch (temp_r0_2) {                            /* irregular */
        case 0:
            func_ov123_0206ebe0(arg0, arg1, arg2);
            return;
        case 8:
            func_ov123_0206ecf8(arg0, arg1, arg2);
            return;
    }
}

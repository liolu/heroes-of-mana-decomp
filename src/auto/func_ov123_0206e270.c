/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(s32);                 /* extern */
M2C_UNK OS_YieldThread();                           /* extern */
M2C_UNK func_ov123_0206e608(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0206e758(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov123_0206e818(void *, void *);        /* extern */
void *func_ov123_0206e89c();                        /* extern */

void func_ov123_0206e270(M2C_UNK arg0, void *arg1, M2C_UNK arg2) {
    u16 temp_ip;
    u16 temp_lr;
    u16 temp_r2;
    u16 temp_r3;
    u16 temp_r3_2;
    void *temp_r0;

    temp_r0 = func_ov123_0206e89c();
    if ((temp_r0 == NULL) || (M2C_FIELD(temp_r0, u8 *, 8) != 2)) {
        func_ov123_0206e608(arg0, arg1, arg2, 0);
        return;
    }
    OS_YieldThread();
    temp_r2 = M2C_FIELD(arg1, u16 *, 4);
    temp_ip = M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(temp_r0, s32 *, 0x24) =
        (s32) ((((u16) (((s32) temp_r2 >> 8) | (temp_r2 << 8)) << 0x10) | (u16) (((s32) temp_ip >> 8) | (temp_ip << 8))) + 1);
    temp_r3 = M2C_FIELD(arg1, u16 *, 8);
    temp_lr = M2C_FIELD(arg1, u16 *, 0xA);
    M2C_FIELD(temp_r0, s32 *, 0x30) =
        (s32) (((u16) (((s32) temp_r3 >> 8) | (temp_r3 << 8)) << 0x10) | (u16) (((s32) temp_lr >> 8) | (temp_lr << 8)));
    temp_r3_2                       = M2C_FIELD(arg1, u16 *, 0xE);
    M2C_FIELD(temp_r0, s16 *, 0x2C) = (s16) (((s32) temp_r3_2 >> 8) | (temp_r3_2 << 8));
    func_ov123_0206e818(arg1, temp_r0);
    func_ov123_0206e758(temp_r0, 0);
    M2C_FIELD(temp_r0, u8 *, 8) = 4U;
    if (M2C_FIELD(temp_r0, s32 *, 4) != 1) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    OS_WakeupThreadDirect(M2C_FIELD(temp_r0, s32 *, 0));
}

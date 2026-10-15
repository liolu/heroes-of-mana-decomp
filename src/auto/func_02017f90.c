#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);
M2C_UNK DC_InvalidateRange(s32 *, M2C_UNK);
M2C_UNK DC_FlushRange(s32 *, M2C_UNK);
M2C_UNK DC_WaitWriteBufferEmpty();
s32 func_0200fa98();
M2C_UNK func_0200faac(s32);
M2C_UNK OS_SpinWait(M2C_UNK);
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);
s32 func_020118cc(M2C_UNK, s32 *, M2C_UNK);

s32 func_02017f90(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (PXI_IsCallbackReady(0xB, 1) == 0) {
            do {
                OS_SpinWait(0x64);
            } while (PXI_IsCallbackReady(0xB, 1) == 0);
        }
        func_02017f90(arg0, NULL, 1);
    }
    DC_FlushRange(M2C_FIELD(arg0, s32 **, 0), 0x60);
    DC_WaitWriteBufferEmpty();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_020118cc(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r8 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020118cc(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = func_0200fa98();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            OS_SleepThread(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    func_0200faac(temp_r8_2);
    DC_InvalidateRange(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r1 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r1 == 4) {
        temp_r0 = sp0 - 1;
        sp0     = temp_r0;
        if (temp_r0 > 0) {
            goto loop_6;
        }
    }
    if (temp_r1 == 0) {
        return 1;
    }
    return 0;
}

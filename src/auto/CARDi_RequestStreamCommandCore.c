#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                         /* extern */
M2C_UNK OS_WakeupThread(void *);                      /* extern */
M2C_UNK OS_WakeupThreadDirect(void *);                      /* extern */
M2C_UNK DC_InvalidateRange(void *, u32);                 /* extern */
M2C_UNK DC_FlushRange(void *, u32);                 /* extern */
M2C_UNK DC_WaitWriteBufferEmpty();                            /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK MI_CpuCopy8(void *, void *, u32);         /* extern */
u32 CARD_GetBackupSectorSize();                                /* extern */
s32 func_02017f90(void *, s32, s32);                /* extern */

void CARDi_RequestStreamCommandCore(void *arg0) {
    s32 temp_r4_2;
    s32 temp_r5;
    M2C_UNK (*temp_r6_2)(s32);
    s32 temp_r10;
    u32 temp_r4;
    u32 var_r5;
    void *temp_r6;
    s32 temp_r7;
    u32 temp_r0;
    u32 var_r8;

    temp_r7  = M2C_FIELD(arg0, volatile s32 *, 0x2C);
    temp_r4  = M2C_FIELD(arg0, volatile u32 *, 0x34);
    temp_r10 = M2C_FIELD(arg0, volatile s32 *, 0x30);
    var_r5   = 0x100;
    OSi_ReferSymbol(0x2000B80);
    if (temp_r7 == 0xB) {
        var_r5 = CARD_GetBackupSectorSize();
    }
    temp_r6 = arg0 + 0x120;
loop_3:
    var_r8 = M2C_FIELD(arg0, volatile u32 *, 0x24);
    if (var_r5 < var_r8) {
        var_r8 = var_r5;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 0x14) = var_r8;
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x40) {
        M2C_FIELD(arg0, volatile s32 *, 0x114)           = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) & ~0x40);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0) = 7;
    } else {
        switch (temp_r4) {
            default:
                break;
            case 0:
                DC_InvalidateRange(temp_r6, var_r8);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC)  = (void *) M2C_FIELD(arg0, void **, 0x1C);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10) = temp_r6;
                break;
            case 1:
            case 2:
                MI_CpuCopy8(M2C_FIELD(arg0, void **, 0x1C), temp_r6, var_r8);
                DC_FlushRange(temp_r6, var_r8);
                DC_WaitWriteBufferEmpty();
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC)  = temp_r6;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x20);
                break;
            case 3:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC)  = (void *) M2C_FIELD(arg0, void **, 0x1C);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x20);
                break;
        }
        if (func_02017f90(arg0, temp_r7, temp_r10) != 0) {
            if (temp_r4 == 2) {
                if (func_02017f90(arg0, 9, 1) != 0) {
                    goto block_23;
                }
            } else {
                if (temp_r4 == 0) {
                    MI_CpuCopy8(temp_r6, M2C_FIELD(arg0, void **, 0x20), var_r8);
                }
            block_23:
                M2C_FIELD(arg0, void **, 0x1C)        = (void *) (M2C_FIELD(arg0, void **, 0x1C) + var_r8);
                M2C_FIELD(arg0, void **, 0x20)        = (void *) (M2C_FIELD(arg0, void **, 0x20) + var_r8);
                temp_r0                               = M2C_FIELD(arg0, volatile u32 *, 0x24) - var_r8;
                M2C_FIELD(arg0, volatile u32 *, 0x24) = temp_r0;
                if (temp_r0 != 0) {
                    goto loop_3;
                }
            }
        }
    }
    temp_r6_2                              = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x38);
    temp_r5                                = M2C_FIELD(arg0, volatile s32 *, 0x3C);
    temp_r4_2                              = func_0200fa98();
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) & ~0x4C);
    OS_WakeupThread(arg0 + 0x10C);
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x10) {
        OS_WakeupThreadDirect(arg0 + 0x44);
    }
    func_0200faac(temp_r4_2);
    if (temp_r6_2 == NULL) {
        return;
    }
    temp_r6_2(temp_r5);
}

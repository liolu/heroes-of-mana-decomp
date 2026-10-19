/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK Routine_SetEvPos(M2C_UNK);               /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK Routine_SoundEffect(s32);                   /* extern */
s32 GetUnitStatus(s32);                       /* extern */
M2C_UNK RecoverHpOrResourceByPer(s32, M2C_UNK);          /* extern */
extern void *data_ov000_02051548;

void func_ov032_020d1044(void) {
    s32 var_r9;
    u32 temp_r0;
    u32 temp_r0_2;

    if ((GetUnitStatus(0xF00) == 2) || (GetUnitStatus(0xF00) == 3)) {
        ObjSet(0xF00, 0xE, 0xB, 0);
        Routine_SoundEffect(0x29A);
        temp_r0 = M2C_FIELD(data_ov000_02051548, u32 *, 0x64);
        switch (temp_r0) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                if (GetUnitStatus(0xF07) == 0) {
                    Routine_SetEvPos(8);
                    RecoverHpOrResourceByPer(0xF07, 0x64);
                    ObjSet(0xF07, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x40);
                }
                if (GetUnitStatus(0xF08) == 0) {
                    Routine_SetEvPos(9);
                    RecoverHpOrResourceByPer(0xF08, 0x64);
                    ObjSet(0xF08, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x80);
                }
                if (GetUnitStatus(0xF09) == 0) {
                    Routine_SetEvPos(0xA);
                    RecoverHpOrResourceByPer(0xF09, 0x64);
                    ObjSet(0xF09, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x100);
                }
                break;
            case 1:                                     /* switch 1 */
                if (GetUnitStatus(0xF0A) == 0) {
                    Routine_SetEvPos(0xB);
                    RecoverHpOrResourceByPer(0xF0A, 0x64);
                    ObjSet(0xF0A, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x200);
                }
                if (GetUnitStatus(0xF0B) == 0) {
                    Routine_SetEvPos(0xC);
                    RecoverHpOrResourceByPer(0xF0B, 0x64);
                    ObjSet(0xF0B, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x400);
                }
                if (GetUnitStatus(0xF0C) == 0) {
                    Routine_SetEvPos(0xD);
                    RecoverHpOrResourceByPer(0xF0C, 0x64);
                    ObjSet(0xF0C, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x800);
                }
                break;
            case 2:                                     /* switch 1 */
                if (GetUnitStatus(0xF0D) == 0) {
                    Routine_SetEvPos(0xE);
                    RecoverHpOrResourceByPer(0xF0D, 0x64);
                    ObjSet(0xF0D, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x1000);
                }
                if (GetUnitStatus(0xF0E) == 0) {
                    Routine_SetEvPos(0xF);
                    RecoverHpOrResourceByPer(0xF0E, 0x64);
                    ObjSet(0xF0E, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x2000);
                }
                if (GetUnitStatus(0xF0F) == 0) {
                    Routine_SetEvPos(0x10);
                    RecoverHpOrResourceByPer(0xF0F, 0x64);
                    ObjSet(0xF0F, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x4000);
                }
                break;
            case 3:                                     /* switch 1 */
                if (GetUnitStatus(0xF10) == 0) {
                    Routine_SetEvPos(0x11);
                    RecoverHpOrResourceByPer(0xF10, 0x64);
                    ObjSet(0xF10, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x8000);
                }
                if (GetUnitStatus(0xF11) == 0) {
                    Routine_SetEvPos(0x12);
                    RecoverHpOrResourceByPer(0xF11, 0x64);
                    ObjSet(0xF11, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x10000);
                }
                if (GetUnitStatus(0xF12) == 0) {
                    Routine_SetEvPos(0x13);
                    RecoverHpOrResourceByPer(0xF12, 0x64);
                    ObjSet(0xF12, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x20000);
                }
                break;
            case 4:                                     /* switch 1 */
                if (GetUnitStatus(0xF13) == 0) {
                    Routine_SetEvPos(0x14);
                    RecoverHpOrResourceByPer(0xF13, 0x64);
                    ObjSet(0xF13, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x40000);
                }
                if (GetUnitStatus(0xF14) == 0) {
                    Routine_SetEvPos(0x15);
                    RecoverHpOrResourceByPer(0xF14, 0x64);
                    ObjSet(0xF14, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x80000);
                }
                if (GetUnitStatus(0xF15) == 0) {
                    Routine_SetEvPos(0x16);
                    RecoverHpOrResourceByPer(0xF15, 0x64);
                    ObjSet(0xF15, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x100000);
                }
                break;
            case 5:                                     /* switch 1 */
                if (GetUnitStatus(0xF16) == 0) {
                    Routine_SetEvPos(0x17);
                    RecoverHpOrResourceByPer(0xF16, 0x64);
                    ObjSet(0xF16, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x200000);
                }
                if (GetUnitStatus(0xF17) == 0) {
                    Routine_SetEvPos(0x18);
                    RecoverHpOrResourceByPer(0xF17, 0x64);
                    ObjSet(0xF17, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x400000);
                }
                if (GetUnitStatus(0xF18) == 0) {
                    Routine_SetEvPos(0x19);
                    RecoverHpOrResourceByPer(0xF18, 0x64);
                    ObjSet(0xF18, 0xE, 0xC, 0);
                    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                        (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x800000);
                }
                break;
        }
    }
    var_r9 = 0;
    do {
        if ((GetUnitStatus(var_r9 + 0xF01) == 2) || (GetUnitStatus(var_r9 + 0xF01) == 3)) {
            ObjSet(var_r9 + 0xF01, 0xE, 0xB, 0);
            Routine_SoundEffect(0x29A);
            temp_r0_2 = M2C_FIELD((data_ov000_02051548 + (var_r9 * 4)), u32 *, 0x58);
            switch (temp_r0_2) {                    /* switch 2 */
                default:                                /* switch 2 */
                    break;
                case 0:                                 /* switch 2 */
                    if (GetUnitStatus(0xF07) == 0) {
                        Routine_SetEvPos(8);
                        RecoverHpOrResourceByPer(0xF07, 0x64);
                        ObjSet(0xF07, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x40);
                    }
                    if (GetUnitStatus(0xF08) == 0) {
                        Routine_SetEvPos(9);
                        RecoverHpOrResourceByPer(0xF08, 0x64);
                        ObjSet(0xF08, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x80);
                    }
                    if (GetUnitStatus(0xF09) == 0) {
                        Routine_SetEvPos(0xA);
                        RecoverHpOrResourceByPer(0xF09, 0x64);
                        ObjSet(0xF09, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x100);
                    }
                    break;
                case 1:                                 /* switch 2 */
                    if (GetUnitStatus(0xF0A) == 0) {
                        Routine_SetEvPos(0xB);
                        RecoverHpOrResourceByPer(0xF0A, 0x64);
                        ObjSet(0xF0A, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x200);
                    }
                    if (GetUnitStatus(0xF0B) == 0) {
                        Routine_SetEvPos(0xC);
                        RecoverHpOrResourceByPer(0xF0B, 0x64);
                        ObjSet(0xF0B, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x400);
                    }
                    if (GetUnitStatus(0xF0C) == 0) {
                        Routine_SetEvPos(0xD);
                        RecoverHpOrResourceByPer(0xF0C, 0x64);
                        ObjSet(0xF0C, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x800);
                    }
                    break;
                case 2:                                 /* switch 2 */
                    if (GetUnitStatus(0xF0D) == 0) {
                        Routine_SetEvPos(0xE);
                        RecoverHpOrResourceByPer(0xF0D, 0x64);
                        ObjSet(0xF0D, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x1000);
                    }
                    if (GetUnitStatus(0xF0E) == 0) {
                        Routine_SetEvPos(0xF);
                        RecoverHpOrResourceByPer(0xF0E, 0x64);
                        ObjSet(0xF0E, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x2000);
                    }
                    if (GetUnitStatus(0xF0F) == 0) {
                        Routine_SetEvPos(0x10);
                        RecoverHpOrResourceByPer(0xF0F, 0x64);
                        ObjSet(0xF0F, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x4000);
                    }
                    break;
                case 3:                                 /* switch 2 */
                    if (GetUnitStatus(0xF10) == 0) {
                        Routine_SetEvPos(0x11);
                        RecoverHpOrResourceByPer(0xF10, 0x64);
                        ObjSet(0xF10, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x8000);
                    }
                    if (GetUnitStatus(0xF11) == 0) {
                        Routine_SetEvPos(0x12);
                        RecoverHpOrResourceByPer(0xF11, 0x64);
                        ObjSet(0xF11, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x10000);
                    }
                    if (GetUnitStatus(0xF12) == 0) {
                        Routine_SetEvPos(0x13);
                        RecoverHpOrResourceByPer(0xF12, 0x64);
                        ObjSet(0xF12, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x20000);
                    }
                    break;
                case 4:                                 /* switch 2 */
                    if (GetUnitStatus(0xF13) == 0) {
                        Routine_SetEvPos(0x14);
                        RecoverHpOrResourceByPer(0xF13, 0x64);
                        ObjSet(0xF13, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x40000);
                    }
                    if (GetUnitStatus(0xF14) == 0) {
                        Routine_SetEvPos(0x15);
                        RecoverHpOrResourceByPer(0xF14, 0x64);
                        ObjSet(0xF14, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x80000);
                    }
                    if (GetUnitStatus(0xF15) == 0) {
                        Routine_SetEvPos(0x16);
                        RecoverHpOrResourceByPer(0xF15, 0x64);
                        ObjSet(0xF15, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x100000);
                    }
                    break;
                case 5:                                 /* switch 2 */
                    if (GetUnitStatus(0xF16) == 0) {
                        Routine_SetEvPos(0x17);
                        RecoverHpOrResourceByPer(0xF16, 0x64);
                        ObjSet(0xF16, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x200000);
                    }
                    if (GetUnitStatus(0xF17) == 0) {
                        Routine_SetEvPos(0x18);
                        RecoverHpOrResourceByPer(0xF17, 0x64);
                        ObjSet(0xF17, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x400000);
                    }
                    if (GetUnitStatus(0xF18) == 0) {
                        Routine_SetEvPos(0x19);
                        RecoverHpOrResourceByPer(0xF18, 0x64);
                        ObjSet(0xF18, 0xE, 0xC, 0);
                        Routine_SoundEffect(0x28D);
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) =
                            (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x800000);
                    }
                    break;
            }
        }
        var_r9 += 1;
    } while (var_r9 < 3);
}

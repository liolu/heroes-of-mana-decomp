#include "m2c.h"

M2C_UNK Routine_SetEvPos(M2C_UNK);               /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 GetUnitStatus(s32);                       /* extern */
M2C_UNK RecoverHpOrResourceByPer(s32, M2C_UNK);          /* extern */
M2C_UNK Routine_SetEvPosFadeIn();                      /* extern */
extern void *data_ov000_02051548;

void func_ov032_020d2598(void) {
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;

    var_r4 = 0;
    if ((GetUnitStatus(0xF04) == 2) || (GetUnitStatus(0xF04) == 3)) {
        temp_r0 = M2C_FIELD(data_ov000_02051548, u32 *, 0x58);
        switch (temp_r0) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                var_r4 = 1;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 5) && (GetUnitStatus(0xF02) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 5) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 5) {
                    var_r4 = 0;
                }
                break;
            case 1:                                     /* switch 1 */
                var_r4 = 2;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 4) && (GetUnitStatus(0xF02) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 4) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 4) {
                    var_r4 = 0;
                }
                break;
            case 2:                                     /* switch 1 */
                var_r4 = 4;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 3) && (GetUnitStatus(0xF02) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 3) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 3) {
                    var_r4 = 0;
                }
                break;
            case 3:                                     /* switch 1 */
                var_r4 = 8;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 2) && (GetUnitStatus(0xF02) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 2) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 2) {
                    var_r4 = 0;
                }
                break;
            case 4:                                     /* switch 1 */
                var_r4 = 0x10;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 1) && (GetUnitStatus(0xF02) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 1) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 1) {
                    var_r4 = 0;
                }
                break;
            case 5:                                     /* switch 1 */
                var_r4 = 0x20;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 0) && (GetUnitStatus(0xF02) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 0) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 0) {
                    var_r4 = 0;
                }
                break;
        }
        if ((GetUnitStatus(0xF01) == 0) && (var_r4 != 0)) {
            Routine_SetEvPosFadeIn();
            Routine_SetEvPos(2);
            RecoverHpOrResourceByPer(0xF01, 0x64);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 1);
            switch (var_r4) {                       /* switch 2; irregular */
                case 1:                                 /* switch 2 */
                    ObjSet(0xF01, 7, 0x10, 0xB);
                    ObjSet(0xF01, 3, 4, 0);
                    break;
                case 2:                                 /* switch 2 */
                    ObjSet(0xF01, 7, 0xB, 0x1B);
                    ObjSet(0xF01, 3, 0, 0);
                    break;
                case 4:                                 /* switch 2 */
                    ObjSet(0xF01, 7, 0x1E, 9);
                    ObjSet(0xF01, 3, 4, 0);
                    break;
                case 8:                                 /* switch 2 */
                    ObjSet(0xF01, 7, 0x1F, 0x1B);
                    ObjSet(0xF01, 3, 6, 0);
                    break;
                case 16:                                /* switch 2 */
                    ObjSet(0xF01, 7, 7, 0xB);
                    ObjSet(0xF01, 3, 4, 0);
                    break;
                case 32:                                /* switch 2 */
                    ObjSet(0xF01, 7, 0x15, 0x14);
                    ObjSet(0xF01, 3, 0, 0);
                    break;
            }
        }
    }
    if ((var_r4 != 0) && ((GetUnitStatus(0xF05) == 2) || (GetUnitStatus(0xF05) == 3))) {
        temp_r0_2 = M2C_FIELD(data_ov000_02051548, u32 *, 0x5C);
        switch (temp_r0_2) {                        /* switch 3 */
            default:                                    /* switch 3 */
                break;
            case 0:                                     /* switch 3 */
                var_r4 = 1;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 5) && (GetUnitStatus(0xF01) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 5) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 5) {
                    var_r4 = 0;
                }
                break;
            case 1:                                     /* switch 3 */
                var_r4 = 2;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 4) && (GetUnitStatus(0xF01) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 4) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 4) {
                    var_r4 = 0;
                }
                break;
            case 2:                                     /* switch 3 */
                var_r4 = 4;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 3) && (GetUnitStatus(0xF01) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 3) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 3) {
                    var_r4 = 0;
                }
                break;
            case 3:                                     /* switch 3 */
                var_r4 = 8;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 2) && (GetUnitStatus(0xF01) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 2) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 2) {
                    var_r4 = 0;
                }
                break;
            case 4:                                     /* switch 3 */
                var_r4 = 0x10;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 1) && (GetUnitStatus(0xF01) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 1) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 1) {
                    var_r4 = 0;
                }
                break;
            case 5:                                     /* switch 3 */
                var_r4 = 0x20;
                if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 0) && (GetUnitStatus(0xF01) != 0)) {
                    var_r4 = 0;
                } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x60) == 0) && (GetUnitStatus(0xF03) != 0)) {
                    var_r4 = 0;
                } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 0) {
                    var_r4 = 0;
                }
                break;
        }
        if (GetUnitStatus(0xF02) == 0) {
            Routine_SetEvPosFadeIn();
            Routine_SetEvPos(3);
            RecoverHpOrResourceByPer(0xF02, 0x64);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 2);
            switch (var_r4) {                       /* switch 4; irregular */
                case 1:                                 /* switch 4 */
                    ObjSet(0xF02, 7, 0x10, 0xB);
                    ObjSet(0xF02, 3, 4, 0);
                    break;
                case 2:                                 /* switch 4 */
                    ObjSet(0xF02, 7, 0xB, 0x1B);
                    ObjSet(0xF02, 3, 0, 0);
                    break;
                case 4:                                 /* switch 4 */
                    ObjSet(0xF02, 7, 0x1E, 9);
                    ObjSet(0xF02, 3, 4, 0);
                    break;
                case 8:                                 /* switch 4 */
                    ObjSet(0xF02, 7, 0x1F, 0x1B);
                    ObjSet(0xF02, 3, 6, 0);
                    break;
                case 16:                                /* switch 4 */
                    ObjSet(0xF02, 7, 7, 0xB);
                    ObjSet(0xF02, 3, 4, 0);
                    break;
                case 32:                                /* switch 4 */
                    ObjSet(0xF02, 7, 0x15, 0x14);
                    ObjSet(0xF02, 3, 0, 0);
                    break;
            }
        }
    }
    if (var_r4 == 0) {
        return;
    }
    if ((GetUnitStatus(0xF06) != 2) && (GetUnitStatus(0xF06) != 3)) {
        return;
    }
    temp_r0_3 = M2C_FIELD(data_ov000_02051548, u32 *, 0x60);
    switch (temp_r0_3) {                            /* switch 5 */
        default:                                        /* switch 5 */
            break;
        case 0:                                         /* switch 5 */
            var_r4 = 1;
            if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 5) && (GetUnitStatus(0xF01) != 0)) {
                var_r4 = 0;
            } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 5) && (GetUnitStatus(0xF02) != 0)) {
                var_r4 = 0;
            } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 5) {
                var_r4 = 0;
            }
            break;
        case 1:                                         /* switch 5 */
            var_r4 = 2;
            if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 4) && (GetUnitStatus(0xF01) != 0)) {
                var_r4 = 0;
            } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 4) && (GetUnitStatus(0xF02) != 0)) {
                var_r4 = 0;
            } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 4) {
                var_r4 = 0;
            }
            break;
        case 2:                                         /* switch 5 */
            var_r4 = 4;
            if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 3) && (GetUnitStatus(0xF01) != 0)) {
                var_r4 = 0;
            } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 3) && (GetUnitStatus(0xF02) != 0)) {
                var_r4 = 0;
            } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 3) {
                var_r4 = 0;
            }
            break;
        case 3:                                         /* switch 5 */
            var_r4 = 8;
            if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 2) && (GetUnitStatus(0xF01) != 0)) {
                var_r4 = 0;
            } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 2) && (GetUnitStatus(0xF02) != 0)) {
                var_r4 = 0;
            } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 2) {
                var_r4 = 0;
            }
            break;
        case 4:                                         /* switch 5 */
            var_r4 = 0x10;
            if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 1) && (GetUnitStatus(0xF01) != 0)) {
                var_r4 = 0;
            } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 1) && (GetUnitStatus(0xF02) != 0)) {
                var_r4 = 0;
            } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 1) {
                var_r4 = 0;
            }
            break;
        case 5:                                         /* switch 5 */
            var_r4 = 0x20;
            if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x58) == 0) && (GetUnitStatus(0xF01) != 0)) {
                var_r4 = 0;
            } else if ((M2C_FIELD(data_ov000_02051548, u32 *, 0x5C) == 0) && (GetUnitStatus(0xF02) != 0)) {
                var_r4 = 0;
            } else if (M2C_FIELD(data_ov000_02051548, s32 *, 0x64) == 0) {
                var_r4 = 0;
            }
            break;
    }
    if (GetUnitStatus(0xF03) != 0) {
        return;
    }
    Routine_SetEvPosFadeIn();
    Routine_SetEvPos(4);
    RecoverHpOrResourceByPer(0xF03, 0x64);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 4);
    switch (var_r4) {                               /* switch 6; irregular */
        case 1:                                         /* switch 6 */
            ObjSet(0xF03, 7, 0x10, 0xB);
            ObjSet(0xF03, 3, 4, 0);
            return;
        case 2:                                         /* switch 6 */
            ObjSet(0xF03, 7, 0xB, 0x1B);
            ObjSet(0xF03, 3, 0, 0);
            return;
        case 4:                                         /* switch 6 */
            ObjSet(0xF03, 7, 0x1E, 9);
            ObjSet(0xF03, 3, 4, 0);
            return;
        case 8:                                         /* switch 6 */
            ObjSet(0xF03, 7, 0x1F, 0x1B);
            ObjSet(0xF03, 3, 6, 0);
            return;
        case 16:                                        /* switch 6 */
            ObjSet(0xF03, 7, 7, 0xB);
            ObjSet(0xF03, 3, 4, 0);
            return;
        case 32:                                        /* switch 6 */
            ObjSet(0xF03, 7, 0x15, 0x14);
            ObjSet(0xF03, 3, 0, 0);
            return;
            return;
    }
}

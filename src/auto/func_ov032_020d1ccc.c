#include "m2c.h"

M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(s32);                   /* extern */
s32 GetUnitStatus(s32);                       /* extern */
s32 GetHpOrResource(s32);                       /* extern */
extern void *data_ov000_02051548;

void func_ov032_020d1ccc(void) {
    if ((GetUnitStatus(0xF0B) == 2) || (GetUnitStatus(0xF0B) == 3)) {
        if (GetHpOrResource(0xF0B) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x01000000) != 0x01000000) {
                ObjSet(0xF0B, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF0B, 0x23, 0xB8, 0);
                ObjSet(0xF0B, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x01000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x01000000) == 0x01000000) {
            ObjSet(0xF0B, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF0B, 0x23, 0xB9, 0);
            ObjSet(0xF0B, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x01000000);
        }
    }
    if ((GetUnitStatus(0xF0C) == 2) || (GetUnitStatus(0xF0C) == 3)) {
        if (GetHpOrResource(0xF0C) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x02000000) != 0x02000000) {
                ObjSet(0xF0C, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF0C, 0x23, 0xB8, 0);
                ObjSet(0xF0C, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x02000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x02000000) == 0x02000000) {
            ObjSet(0xF0C, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF0C, 0x23, 0xB9, 0);
            ObjSet(0xF0C, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x02000000);
        }
    }
    if ((GetUnitStatus(0xF0E) == 2) || (GetUnitStatus(0xF0E) == 3)) {
        if (GetHpOrResource(0xF0E) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x04000000) != 0x04000000) {
                ObjSet(0xF0E, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF0E, 0x23, 0xB8, 0);
                ObjSet(0xF0E, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x04000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x04000000) == 0x04000000) {
            ObjSet(0xF0E, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF0E, 0x23, 0xB9, 0);
            ObjSet(0xF0E, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x04000000);
        }
    }
    if ((GetUnitStatus(0xF10) == 2) || (GetUnitStatus(0xF10) == 3)) {
        if (GetHpOrResource(0xF10) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x08000000) != 0x08000000) {
                ObjSet(0xF10, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF10, 0x23, 0xB8, 0);
                ObjSet(0xF10, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x08000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x08000000) == 0x08000000) {
            ObjSet(0xF10, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF10, 0x23, 0xB9, 0);
            ObjSet(0xF10, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x08000000);
        }
    }
    if ((GetUnitStatus(0xF12) == 2) || (GetUnitStatus(0xF12) == 3)) {
        if (GetHpOrResource(0xF12) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x10000000) != 0x10000000) {
                ObjSet(0xF12, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF12, 0x23, 0xB8, 0);
                ObjSet(0xF12, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x10000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x10000000) == 0x10000000) {
            ObjSet(0xF12, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF12, 0x23, 0xB9, 0);
            ObjSet(0xF12, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x10000000);
        }
    }
    if ((GetUnitStatus(0xF16) == 2) || (GetUnitStatus(0xF16) == 3)) {
        if (GetHpOrResource(0xF16) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x20000000) != 0x20000000) {
                ObjSet(0xF16, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF16, 0x23, 0xB8, 0);
                ObjSet(0xF16, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x20000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x20000000) == 0x20000000) {
            ObjSet(0xF16, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF16, 0x23, 0xB9, 0);
            ObjSet(0xF16, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x20000000);
        }
    }
    if ((GetUnitStatus(0xF17) == 2) || (GetUnitStatus(0xF17) == 3)) {
        if (GetHpOrResource(0xF17) > 0xC8) {
            if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x40000000) != 0x40000000) {
                ObjSet(0xF17, 0xE, 0xD, 0);
                Routine_SoundEffect(0x29F);
                ObjSet(0xF17, 0x23, 0xB8, 0);
                ObjSet(0xF17, 0x19, 0x4E, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x40000000);
            }
        } else if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x40000000) == 0x40000000) {
            ObjSet(0xF17, 0xE, 0xD, 0);
            Routine_SoundEffect(0x2A0);
            ObjSet(0xF17, 0x23, 0xB9, 0);
            ObjSet(0xF17, 0x19, 0x4A, 0);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x40000000);
        }
    }
    if ((GetUnitStatus(0xF18) != 2) && (GetUnitStatus(0xF18) != 3)) {
        return;
    }
    if (GetHpOrResource(0xF18) > 0xC8) {
        if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x80000000) == 0x80000000) {
            return;
        }
        ObjSet(0xF18, 0xE, 0xD, 0);
        Routine_SoundEffect(0x29F);
        ObjSet(0xF18, 0x23, 0xB8, 0);
        ObjSet(0xF18, 0x19, 0x4E, 0);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x80000000);
        return;
    }
    if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x54) & 0x80000000) != 0x80000000) {
        return;
    }
    ObjSet(0xF18, 0xE, 0xD, 0);
    Routine_SoundEffect(0x2A0);
    ObjSet(0xF18, 0x23, 0xB9, 0);
    ObjSet(0xF18, 0x19, 0x4A, 0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) ^ 0x80000000);
}

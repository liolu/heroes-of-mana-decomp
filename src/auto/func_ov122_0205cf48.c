#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} D;

extern s32 CARD_GetBackupTotalSize(void);
extern s32 CARD_GetCurrentBackupType(void);
extern s32 CARD_IdentifyBackup(s32);
extern void CARD_Init(void);
extern s32 CARD_IsEnabled(void);
extern void CARD_LockBackup(u16);
extern void CARD_UnlockBackup(u16);
extern s32 func_0200cc18(void);
extern void func_0200cc70(u16);
extern void func_020170bc(s32);
extern D data_ov122_020664a4;

s32 func_ov122_0205cf48(void) {
    CARD_Init();
    data_ov122_020664a4.f0 = 0;
    data_ov122_020664a4.f8 = func_0200cc18();
    if (data_ov122_020664a4.f8 == -3) {
        return 0;
    }
    if (CARD_IsEnabled() == 0) {
        func_020170bc(1);
    }
    CARD_LockBackup((u16) data_ov122_020664a4.f8);
    if (CARD_IdentifyBackup(0x1202) == 0) {
        CARD_UnlockBackup((u16) data_ov122_020664a4.f8);
        func_0200cc70((u16) data_ov122_020664a4.f8);
        return 0;
    }
    if ((u8) CARD_GetCurrentBackupType() != 2) {
        CARD_UnlockBackup((u16) data_ov122_020664a4.f8);
        func_0200cc70((u16) data_ov122_020664a4.f8);
        return 0;
    }
    data_ov122_020664a4.f0 = CARD_GetBackupTotalSize();
    return 1;
}

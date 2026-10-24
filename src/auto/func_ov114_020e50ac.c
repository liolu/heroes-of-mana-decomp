#include "m2c.h"

typedef struct {
    s32 size;
    s32 lock;
} S;

extern S data_ov114_020e6680;
void CARD_Init(void);
s32 func_0200cc18(void);
void func_0200fddc(void);
s32 CARD_IsEnabled(void);
void func_020170bc(s32);
void CARD_LockBackup(u16);
s32 CARD_IdentifyBackup(s32);
void CARD_UnlockBackup(u16);
s32 CARD_GetCurrentBackupType(void);
s32 CARD_GetBackupTotalSize(void);
void func_0200cc70(u16);

s32 func_ov114_020e50ac(void) {
    CARD_Init();
    data_ov114_020e6680.size = 0;
    data_ov114_020e6680.lock = func_0200cc18();
    if (data_ov114_020e6680.lock == -3) {
        func_0200fddc();
        return 0;
    }
    if (CARD_IsEnabled() == 0) {
        func_020170bc(1);
    }
    CARD_LockBackup(data_ov114_020e6680.lock);
    if (CARD_IdentifyBackup(0x1202) == 0) {
        CARD_UnlockBackup(data_ov114_020e6680.lock);
        func_0200cc70(data_ov114_020e6680.lock);
        return 0;
    }
    if ((CARD_GetCurrentBackupType() & 0xFF) != 2) {
        CARD_UnlockBackup(data_ov114_020e6680.lock);
        func_0200cc70(data_ov114_020e6680.lock);
        return 0;
    }
    data_ov114_020e6680.size = CARD_GetBackupTotalSize();
    return 1;
}

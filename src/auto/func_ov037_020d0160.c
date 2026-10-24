#include "m2c.h"

void ReleaseRetryData(void);
void MTG_StartEvent(void);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void Routine_SetEvPos(s32);
void SiteSwitching(s32);
void EventDurringTitle(s32);
void WaitSyncCounter(s32);
void ObjSet(s32, s32, s32, s32);
void OS_SleepThread(s32);

typedef struct {
    u8 pad[0xD4];
    u32 lo : 16;
    u32 hi : 16;
    u8 pad2[0x760 - 0xD8];
    u32 f760;
} G;
extern G *data_ov000_02051548;

void func_ov037_020d0160(void) {
    while (1) {
        if (data_ov000_02051548->lo != 0x2199) {
            ReleaseRetryData();
            MTG_StartEvent();
            Routine_KyotenChange(0xD);
            ObjSet_allclear();
            CameraMoveAndWait(1, 0, 0x14, 0x15, 0x3E8, 0x2EE, 0xBE);
            Routine_SetEvPos(0);
            SiteSwitching(2);
            EventDurringTitle(0x2199);
        }
        WaitSyncCounter(0x78);
        ObjSet(0xF01, 0xE, 0xD, 0);
        ObjSet(0xF02, 0xE, 0xD, 0);
        ObjSet(0xF03, 0xE, 0xC, 0);
        ObjSet(0xF04, 0xE, 0xD, 0);
        WaitSyncCounter(0x3C);
        ObjSet(0xF04, 0x1B, 1, 0);
        ObjSet(0xF01, 0x1B, 1, 0);
        ObjSet(0xF02, 0x1B, 1, 0);
        ObjSet(0xF03, 0x1B, 1, 0);
        WaitSyncCounter(0x78);
        data_ov000_02051548->f760 = data_ov000_02051548->f760 & ~1;
        OS_SleepThread(0);
        data_ov000_02051548->lo = 0x2199;
    }
}

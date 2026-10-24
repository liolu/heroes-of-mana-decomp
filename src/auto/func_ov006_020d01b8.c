#include "m2c.h"

void ReleaseRetryData(void);
void EventDurringTitle(s32);
void Routine_FadeOutAll(void);
void InitializeKuniAndUnit(void);
void KuniNameSet(s32, s32);
void AddCarisumaToParty(s32, s32);
void SetTitleNameNo(s32);
void Routine_KyotenChange(s32);
void WaitSyncCounter(s32);
void ObjSet_allclear(void);
void cameraTargetIconOFF(void);
void HpBar_Status_IconOFF(void);
void MTG_BGM_FadeOutAndChange(s32);
void StartPictureEvent(s32);
void TG_eventTitle(s32);
void StartMovie(s32);
void Routine_BGMvolChange(s32, s32);
void Routine_SoundEffect(s32);
void MemoStoryFlag(s32, s32);
void func_ov006_020d0160(void);
void TG_setPartyBeforeWorldmap(s32);
void Routine_SaveGo(void);
void SiteSwitching(s32);
void Routine_CameraFree(void);
void cameraTargetIconON(void);
void HpBar_Status_IconON(void);
void OS_SleepThread(s32);
void EndScriptRoutine(void);

typedef struct {
    u8 pad0[0x3A];
    u16 h3a;
    u8 pad3c[0xD4 - 0x3C];
    u32 wd4;
    u8 padd8[0x760 - 0xD8];
    u32 b0 : 1;
    u32 rest : 31;
} G;
extern G *data_ov000_02051548;

void func_ov006_020d01b8(void) {
    s32 i;
    u16 s;
    while (1) {
        s = (u16) data_ov000_02051548->wd4;
        if (s != 0) {
            if (s == 0x63) {
                goto L;
            }
            ReleaseRetryData();
            EventDurringTitle(0);
        }
        {
            Routine_FadeOutAll();
            InitializeKuniAndUnit();
            KuniNameSet(0, 1);
            for (i = 0; i < 2; i++) {
                AddCarisumaToParty(i + 1, i);
            }
            SetTitleNameNo(1);
            Routine_KyotenChange(1);
            WaitSyncCounter(10);
            ObjSet_allclear();
            cameraTargetIconOFF();
            HpBar_Status_IconOFF();
            WaitSyncCounter(10);
            MTG_BGM_FadeOutAndChange(2);
            WaitSyncCounter(0x40);
            StartPictureEvent(10);
            WaitSyncCounter(0x20);
            TG_eventTitle(1);
            MTG_BGM_FadeOutAndChange(0x1F);
            WaitSyncCounter(0x20);
            WaitSyncCounter(0x30);
            StartPictureEvent(11);
            StartMovie(12);
            Routine_BGMvolChange(0, 0x40);
            WaitSyncCounter(0x60);
            Routine_SoundEffect(0x25B);
            WaitSyncCounter(0x100);
            MTG_BGM_FadeOutAndChange(11);
            StartPictureEvent(12);
            WaitSyncCounter(0x80);
            MemoStoryFlag(1, 0);
            func_ov006_020d0160();
            SetTitleNameNo(2);
            TG_setPartyBeforeWorldmap(1);
            MTG_BGM_FadeOutAndChange(0x26);
            EventDurringTitle(0x63);
            Routine_SaveGo();
            EventDurringTitle(0x63);
        }
    L:
        SiteSwitching(0);
        Routine_CameraFree();
        cameraTargetIconON();
        HpBar_Status_IconON();
        data_ov000_02051548->h3a = 2;
        data_ov000_02051548->b0  = 0;
        OS_SleepThread(0);
        EndScriptRoutine();
    }
}

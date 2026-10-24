/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G {
    u8 p0[0x10];
    u32 f10_a : 29;
    u32 f10_b : 1;
    u32 f10_c : 2;
    u32 f14;
    u8 p1[0x22];
    s16 f3a;
    u8 p2[0x8c];
    u32 fc8;
    u8 p3[0x192];
    u16 f25e;
} G;
typedef struct H {
    u8 p[0x14c];
    s32 v;
} H;
extern G *data_ov000_02051548;
extern H *data_ov000_0205154c;
void func_02001ba0(void);
void func_02001d60(s32, s32);
void ReadUnitLogic(s32);
void ChangeGamenMode(void);
void FadeInScreen(s32);
s32 onceLoopOnAna(s32, s32, s32);
void FadeOutScreen(s32);
void SND_StopSeq(s32);
void ReleaseSeireiKazu_ShisetuLevTable(void);
void ReleaseStock_VSMotoData(void);
void ReleaseNowGameData(void);
void ReleaseRetryData(void);
void ReleaseAllColorRoll(void);
void ReleaseTrsCommand(void);
void ReleaseObjTrsDataOneWork(void);
void TrsGameWorkRelease(void);
void ReleaseWmWorks(void);
void ReleaseWirelessIconPal(s32);
void ResetWirelessIconBit(s32);
void UnReadUnitLogic(void);
void StopAllAikyoEffect(void);
void ReleaseWorkForMapChange(void);
void ReleaseSenarioScript(void);

void AnaMain(s32 a) {
    data_ov000_02051548->f25e = 0;
    if (a != 0) {
        func_02001ba0();
        func_02001d60(-1, 0);
        data_ov000_02051548->fc8 &= ~2;
        ReadUnitLogic(0);
        ChangeGamenMode();
        FadeInScreen(3);
    }
    data_ov000_0205154c->v      = 0;
    *(volatile u16 *) 0x4000060 = (*(volatile u16 *) 0x4000060 & ~0x3000) | 8;
    while (onceLoopOnAna(1, 1, 0x3f) != 0) {
    }
    FadeOutScreen(3);
    SND_StopSeq(0);
    ReleaseSeireiKazu_ShisetuLevTable();
    ReleaseStock_VSMotoData();
    ReleaseNowGameData();
    ReleaseRetryData();
    ReleaseAllColorRoll();
    if (data_ov000_02051548->f10_b != 0) {
        ReleaseTrsCommand();
        ReleaseObjTrsDataOneWork();
        TrsGameWorkRelease();
        ReleaseWmWorks();
        ReleaseWirelessIconPal(0);
        ReleaseWirelessIconPal(1);
        ResetWirelessIconBit(0);
        ResetWirelessIconBit(1);
    }
    UnReadUnitLogic();
    StopAllAikyoEffect();
    data_ov000_02051548->f14 &= ~6;
    ReleaseWorkForMapChange();
    data_ov000_02051548->f3a = -1;
    ReleaseSenarioScript();
}

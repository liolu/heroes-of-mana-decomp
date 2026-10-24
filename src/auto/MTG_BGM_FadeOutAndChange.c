/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void Routine_BGMchange(s32);
void Routine_BGMvolChange(s32, s32);
void WaitSyncCounter(s32);
extern M2C_UNK data_ov003_020ad3cc;

void MTG_BGM_FadeOutAndChange(s32 bgm) {
    Routine_BGMvolChange(0, 0x1E);
    WaitSyncCounter(0x1E);
    WaitSyncCounter(0xA);
    Routine_BGMchange(bgm);
    Routine_BGMvolChange(0x64, 1);
    WaitSyncCounter(5);
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u32 f10 : 1;
    u32 pad10 : 31;
    u32 pad14;
    u32 scr : 2;
    u32 pad18 : 30;
    u32 pad1c : 20;
    u32 bgmFlag : 1;
    u32 bgm : 8;
} G;
extern G *data_ov000_02051548;
s32 func_0202d478(s32, s32);
void SetBrightnessEng(s32, s32);
void onceLoopOnAna(s32, s32, s32);
void VBlankIntrWaitInGame(void);
s32 CallTrsForLoop(void);
void BGM_Change(s32);
void ReflectSystemConfig(void);
void FadeInScreenByCount(s32 a, s32 b, s32 c) {
    s32 i;
    if (a != (a & data_ov000_02051548->scr)) {
        a &= a ^ data_ov000_02051548->scr;
        i = -b;
        if (i <= 0) {
            do {
                SetBrightnessEng(a, func_0202d478(i * 16, b));
                if (c != 0) {
                    onceLoopOnAna(0, 1, 0x1f);
                } else {
                    VBlankIntrWaitInGame();
                    if (CallTrsForLoop() == 0) {
                        data_ov000_02051548->f10 = 1;
                    }
                }
                i++;
            } while (i <= 0);
        }
        SetBrightnessEng(a, 0);
        data_ov000_02051548->scr = a | data_ov000_02051548->scr;
        if (data_ov000_02051548->bgmFlag != 0) {
            BGM_Change(data_ov000_02051548->bgm);
            ReflectSystemConfig();
            data_ov000_02051548->bgmFlag = 0;
        }
    }
}

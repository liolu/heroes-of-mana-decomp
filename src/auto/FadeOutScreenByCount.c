/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    u32 f10 : 1;
    u32 r10 : 31;
    u8 pad1[4];
    u32 scr : 2;
    u32 r18 : 30;
} G;

extern G *data_ov000_02051548;
s32 CallTrsForLoop(void);
void SetBrightnessEng(s32, s32);
void VBlankIntrWaitInGame(void);
s32 func_0202d478(s32, s32);
void onceLoopOnAna(s32, s32, s32);

void FadeOutScreenByCount(s32 screens, s32 count, s32 flag) {
    s32 i;
    s32 v;
    s32 end;
    if (screens & data_ov000_02051548->scr) {
        end = -count;
        i   = 0;
        if (end <= 0) {
            v = 0;
            do {
                SetBrightnessEng(screens, func_0202d478(v, count));
                if (flag != 0) {
                    onceLoopOnAna(0, 1, 0x1F);
                } else {
                    VBlankIntrWaitInGame();
                    if (CallTrsForLoop() == 0) {
                        data_ov000_02051548->f10 = 1;
                    }
                }
                i -= 1;
                v -= 0x10;
            } while (i >= end);
        }
        SetBrightnessEng(screens, -0x10);
        data_ov000_02051548->scr = ~screens & data_ov000_02051548->scr;
    }
}

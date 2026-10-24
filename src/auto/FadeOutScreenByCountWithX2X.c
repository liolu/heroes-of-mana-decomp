/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u32 f10 : 1;
    u32 pad10 : 31;
    u32 pad14;
    u32 scr : 2;
    u32 pad18 : 30;
} G;
extern G *data_ov000_02051548;
s32 func_0202d478(s32, s32);
void SetBrightnessEng(s32, s32);
void onceLoopOnAna(s32, s32, s32);
void VBlankIntrWaitInGame(void);
s32 CallTrsForLoop(void);
void FadeOutScreenByCountWithX2X(s32 a, s32 n, s32 c, s32 s, s32 e) {
    s32 i;
    s32 acc;
    if (a & data_ov000_02051548->scr) {
        i = 0;
        if (n > 0) {
            acc = i;
            do {
                SetBrightnessEng(a, s + func_0202d478(acc, n));
                if (c != 0) {
                    onceLoopOnAna(0, 1, 0x1f);
                } else {
                    VBlankIntrWaitInGame();
                    if (CallTrsForLoop() == 0) {
                        data_ov000_02051548->f10 = 1;
                    }
                }
                acc += e - s;
                i++;
            } while (i < n);
        }
        SetBrightnessEng(a, e);
        data_ov000_02051548->scr = ~a & data_ov000_02051548->scr;
    }
}

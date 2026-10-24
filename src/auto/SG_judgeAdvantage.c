/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x8C];
    u32 flags;
} Ctx;

extern Ctx *data_ov000_02051548;

void GetHpOrResourceAndMax(s32, s32 *, s32 *);
s32 GetUnitStatus(s32);
s32 GetNowBGM_No(void);
void Routine_BGMchange(s32);

void SG_judgeAdvantage(s32 bgm) {
    s32 a;
    s32 amax;
    s32 b;
    s32 bmax;
    u32 fa;
    u32 fb;
    u32 fl;

    a    = 0;
    amax = 0;
    b    = 0;
    bmax = 0;
    GetHpOrResourceAndMax(0, &a, &amax);
    GetHpOrResourceAndMax(0xB, &b, &bmax);
    fl   = data_ov000_02051548->flags;
    bmax = bmax >> 2;
    amax = amax >> 2;
    fa   = fl & 0x20;
    fb   = fl & 0x10;
    if (GetUnitStatus(0xB) == 2 || GetUnitStatus(0xB) == 3) {
        if (b <= bmax && fa != 0x20) {
            data_ov000_02051548->flags |= 0x20;
            fa = data_ov000_02051548->flags & 0x20;
            if (fb != 0x10 || GetNowBGM_No() != 4) {
                Routine_BGMchange(4);
            }
        }
        if (b > bmax && fa == 0x20) {
            data_ov000_02051548->flags ^= 0x20;
            if (fb != 0x10) {
                Routine_BGMchange(bgm);
            }
        }
    }
    if (a <= amax && fb != 0x10) {
        data_ov000_02051548->flags |= 0x10;
        fb = data_ov000_02051548->flags & 0x10;
        if (fa != 0x20 || GetNowBGM_No() != 4) {
            Routine_BGMchange(4);
        }
    }
    if (a > amax && fb == 0x10) {
        data_ov000_02051548->flags ^= 0x10;
        if (fa != 0x20) {
            Routine_BGMchange(bgm);
        }
    }
}

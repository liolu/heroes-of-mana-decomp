/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 unk0;
    u32 f4a : 21;
    u32 f4b : 5;
    u32 f4c : 5;
    u32 f4d : 1;
    u32 alpha : 5;
    u32 r : 8;
    u32 g : 8;
    u32 b21 : 1;
    u32 flag : 1;
    u32 b23 : 9;
} S;

s32 GetUsualAlpha(void *);
void FinishScriptAlpha(void *);

void ScriptAlphaToDis(S *arg0, s32 arg1, s32 arg2) {
    if (!arg0->flag) {
        arg0->alpha = GetUsualAlpha(arg0);
        arg0->r     = 0;
        arg0->g     = arg2;
    } else {
        arg0->r = 0;
        arg0->g = arg2;
    }
    arg0->f4b  = arg1;
    arg0->flag = 1;
    arg0->f4c  = ((volatile S *) arg0)->alpha;
    if (arg2 == 0) {
        FinishScriptAlpha(arg0);
    }
}
/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad;
    u32 f0 : 21;
    u32 alpha : 5;
    u32 x : 5;
    u32 g : 1;
    u32 w0 : 5;
    u32 a : 8;
    u32 b : 8;
    u32 c : 1;
    u32 flag : 1;
    u32 rest : 9;
} S;
s32 GetUsualAlpha(S *);
void FinishScriptAlpha(S *);
void ScriptAlphaNormal(S *s, s32 arg) {
    if (s->flag) {
        s32 al   = GetUsualAlpha(s);
        s->a     = 0;
        s->b     = arg;
        s->alpha = al;
        s->flag  = 1;
        s->x     = s->w0;
        if (arg == 0) {
            FinishScriptAlpha(s);
        }
    }
}

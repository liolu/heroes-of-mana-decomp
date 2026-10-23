/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x38];
    u8 b38;
} U;
U *Get_aONEOBJadrsByCharno(s32);
s32 CheckAikyoEffect(s32, s32);

s32 IsThereAikyoEffect(s32 a, s32 chr) {
    s32 v = -1;
    if (chr != -1) {
        U *u = Get_aONEOBJadrsByCharno(chr);
        if (u != NULL) {
            v = u->b38;
        }
    }
    return CheckAikyoEffect(a, v);
}

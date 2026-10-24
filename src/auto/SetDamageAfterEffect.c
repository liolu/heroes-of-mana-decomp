/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G {
    u8 pad[0x10];
    u32 a : 28;
    u32 b : 1;
    u32 c : 1;
    u32 d : 2;
} G;
typedef struct E {
    u32 f : 1;
    u32 g : 31;
    u8 pad[0x1e];
    u16 id;
    u8 pad2[0xec];
} E;
extern G *data_ov000_02051548;
extern E data_ov003_020b0cf0[];
void SetDamageAfterEffectWithAttackID(s32, s32, s32, s32, s32, s32);

void SetDamageAfterEffect(s32 a, s32 b, s32 c, s32 d, s32 e) {
    if (!(data_ov000_02051548->c && data_ov000_02051548->b)) {
        if (data_ov003_020b0cf0[b].f) {
            SetDamageAfterEffectWithAttackID(a, b, c, d, e, data_ov003_020b0cf0[b].id);
        }
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct R {
    u8 pad[0x20];
    u32 f20;
} R;
typedef struct E {
    u8 pad[8];
    u32 f8;
} E;
typedef struct O {
    u8 pad[8];
    u32 f8;
    u8 pad2[0xdc];
    E *e8;
} O;
extern R *data_ov000_02051548;
void Ring_SoundEffect(s32);
void PutOneHITmark(O *, s32, s32);

void SetHitMarkForDamageSense(O *o, s32 k) {
    if ((data_ov000_02051548->f20 << 19) >> 31) {
        Ring_SoundEffect(0x23C);
    } else if (k != 0 && ((o->e8->f8 << 9) >> 31) == 0) {
        if (((o->f8 << 2) >> 31) != 0 && k == 1) {
            PutOneHITmark(o, 0x12, 1);
        } else {
            PutOneHITmark(o, (k - 1) * 2, 1);
        }
    } else {
        Ring_SoundEffect(0x23C);
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G {
    u8 pad[0x1c];
    u32 a : 9;
    u32 f : 1;
    u32 b : 22;
} G;
extern G *data_ov000_02051548;
void SetKageTexAndPal(void);
void SetFlyArmTexAndPal(void);
void SetHitMarkTexAndPal(void);
void SetSnowAndStonePal(s32);
void SetNoneAnimeTex(void *, s32, s32);

void SetETC_TexAndPal(s32 a) {
    if (!data_ov000_02051548->f) {
        data_ov000_02051548->f = 1;
        SetKageTexAndPal();
        SetFlyArmTexAndPal();
        SetHitMarkTexAndPal();
        SetSnowAndStonePal(a);
        SetNoneAnimeTex((u8 *) data_ov000_02051548 + 0x510, 2, 2);
        SetNoneAnimeTex((u8 *) data_ov000_02051548 + 0x528, 2, 0xa);
    }
}

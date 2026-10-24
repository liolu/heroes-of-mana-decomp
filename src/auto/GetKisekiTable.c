/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void OnStartFly(s32, s32, s32, s32);
void OnStartcul2(s32, s32, s32, s32, s32, s32);
void OnStartcul2ninja(s32, s32, s32, s32, s32);
void OnStartcul4onlyWater(s32, s32, s32, s32, s32);
typedef struct Gm {
    u8 pad[0x10];
    u32 f10;
} Gm;
extern Gm *data_ov000_02051548;

s32 GetKisekiTable(s32 kind, s32 a, s32 b, s32 c, s32 d, s32 e) {
    switch (kind) {
        case 1:
            OnStartFly(a, b, c, d);
            break;
        case 3:
            OnStartcul2ninja(a, b, c, d, e);
            break;
        case 5:
            OnStartcul4onlyWater(a, b, c, d, e);
            break;
        case 2:
            OnStartcul2(a, b, c, d, e, 1);
            break;
        default:
            OnStartcul2(a, b, c, d, e, 0);
            break;
    }
    data_ov000_02051548->f10 &= ~0x04000000;
}

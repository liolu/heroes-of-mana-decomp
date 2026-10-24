/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void SetTrsDataForEtc(void *, s32);

typedef struct G {
    u8 pad[0x10];
    u32 a : 28;
    u32 b : 1;
    u32 c : 1;
    u32 d : 2;
} G;
typedef struct T {
    u32 a : 5;
    u32 b : 5;
    u32 c : 7;
    u32 d : 7;
    u32 e : 8;
} T;
extern G *data_ov000_02051548;

void TrsDeathToChild(u8 *obj, u32 v) {
    T t;
    if (data_ov000_02051548->c && !data_ov000_02051548->b) {
        t.a = 3;
        t.c = obj[0x38];
        t.b = 1;
        t.d = v;
        t.e = *(u16 *) (obj + 0xd8);
        SetTrsDataForEtc(&t, 4);
    }
}

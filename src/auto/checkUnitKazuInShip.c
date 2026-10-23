/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Tmp {
    u32 a : 5;
    u32 b : 3;
    u32 c : 8;
    u32 d : 16;
} Tmp;
typedef struct Root {
    u8 pad[0x10];
    u32 p0 : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 p1 : 2;
    u32 q0 : 8;
    u32 k : 4;
    u32 q1 : 20;
    u8 pad2[8];
    u32 r0 : 12;
    u32 f12 : 1;
    u32 r1 : 19;
} Root;
extern Root *data_ov000_02051548;
void SetTrsDataForEtc(void *, s32);
void PutNowCanMakeUnitKazu(void);
void checkUnitKazuInShip(u32 n) {
    Tmp t;
    if (data_ov000_02051548->f29 && !data_ov000_02051548->f28) {
        t.a = 8;
        t.b = 3;
        t.c = n;
        SetTrsDataForEtc(&t, 4);
    }
    if (n == data_ov000_02051548->k && data_ov000_02051548->f12) {
        PutNowCanMakeUnitKazu();
    }
}

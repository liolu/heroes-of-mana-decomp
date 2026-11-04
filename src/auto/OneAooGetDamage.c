/* compiler: 2.0/sp1p5 -profile */
/* near start: 16 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 lo : 28;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 hi : 2;
} G10;
typedef struct {
    u32 b0 : 1;
    u32 rest : 31;
} B0;
typedef struct {
    u32 a : 14;
    u32 k : 8;
    u32 rest : 10;
} K0;
typedef struct {
    u8 pad[0x10];
    G10 g10;
} GG;
extern GG *data_ov000_02051548;

void SetTrsDataForEtc(u32 *p, u32 n, u32 v);
void RagTimeSetToX(u8 *a, s32 b);
s32 CheckDamageGet(u8 *a);

void OneAooGetDamage(u8 *r5, u32 r4) {
    u32 loc;
    u32 r0;
    u32 r1;
    u32 r2;
    u8 *P;

    if (data_ov000_02051548->g10.b29 != 0 && data_ov000_02051548->g10.b28 == 0) {
        r1  = loc;
        r1  = (r1 & ~0x1Fu) | 6;
        loc = r1;
        r2  = loc & 0xFFFFE01F;
        r1  = r5[0x38];
        r1  = (r1 << 24) | 0;
        r1  = r2 | (r1 >> 19);
        r1  = r1 & 0xFFE01FFF;
        r0  = r4 << 24;
        r2  = r1 | (r0 >> 11);
        loc = r2;
        SetTrsDataForEtc(&loc, 4, r2);
    }
    if (r4 != 3) {
        RagTimeSetToX(r5, 0);
    }
    P = (u8 *) data_ov000_02051548;
    if (((*(u32 *) (P + 0x24)) << 23) >> 31) {
        *(u32 *) (r5 + 0xC) = (*(u32 *) (r5 + 0xC) & ~0x38000000u) | 0x18000000u;
    } else if (((*(u32 *) (r5 + 8)) << 2) >> 31) {
        *(u32 *) (r5 + 0xC) = (*(u32 *) (r5 + 0xC) & ~0x38000000u) | 0x18000000u;
    } else {
        switch (((K0 *) r5)->k) {
            case 0:
            case 5:
            case 6:
                break;
            default:
                goto other;
        }
        {
            r1                  = *(u32 *) (r5 + 0xC);
            r0                  = r4 << 29;
            *(u32 *) (r5 + 0xC) = (r1 & ~0x700u) | (r0 >> 21);
            r4                  = ((B0 *) (r5 + 4))->b0;
            CheckDamageGet(r5);
            r1                = *(u32 *) (r5 + 4);
            *(u32 *) (r5 + 4) = (r1 & ~1u) | (r4 & 1);
        }
        return;
    other: { *(u32 *) (r5 + 0xC) = (*(u32 *) (r5 + 0xC) & ~0x38000000u) | 0x18000000u; }
    }
}

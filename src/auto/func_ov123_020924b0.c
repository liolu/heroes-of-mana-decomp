/* compiler: 1.2/sp3 */
/* near start: 4 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern void MI_CpuFill8(void *, u8, u32);
extern s32 func_ov123_0209209c(void *, u8, void *);
extern u8 func_ov123_020921cc(u8 *);

typedef struct E {
    u8 a[0x15];
    u8 f15;
    u8 b[0x16];
    u16 f2c;
    u8 c[0xC0 - 0x2E];
} E;
typedef struct S {
    u8 pad0[0x444];
    u8 st[0x2c];
    E arr[1];
} S;

s32 func_ov123_020924b0(u8 *p) {
    E *q     = (E *) (p + 0x470) + p[0xD13];
    p[0xD0D] = func_ov123_020921cc(p);
    MI_CpuFill8(p + 0xCB8, 0, 0x52);
    if (func_ov123_0209209c(p, p[0xD0D], p + 0xCB8) != 0) {
        p[0xD0B] = (p[0xD0B] & ~0xC) | 4;
        if (!((q->f2c >> 4) & 1)) {
            (p + p[0xD13] * 4)[0x444] = 3;
            return 9;
        }
        if (p[0xD0D] == 6 && q->f15 == 0) {
            (p + p[0xD13] * 4)[0x444] = 3;
            return 9;
        }
    } else {
        p[0xD0B] = p[0xD0B] & ~0xC;
        if (((q->f2c >> 4) & 1) == 1) {
            (p + p[0xD13] * 4)[0x444] = 3;
            return 9;
        }
    }
    p[0xD15] = 0;
    p[0xD14] = 0;
    return 8;
}

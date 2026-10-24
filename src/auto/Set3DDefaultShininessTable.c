/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void G3_Shininess(u32 *);

void Set3DDefaultShininessTable(void) {
    u8 tbl[128];
    u8 i;
    s64 x;
    u8 *p = tbl;

    for (i = 0; i < 0x7F; i++) {
        x    = i * 2 + 1;
        p[i] = (x * x * x * x) >> 24;
    }
    p[0x7F] = 0xFF;
    G3_Shininess((u32 *) tbl);
}

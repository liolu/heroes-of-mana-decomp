/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct UI {
    u16 valid : 1;
    u16 pad : 1;
    u16 id : 10;
    u16 rest : 4;
} UI;
typedef struct A {
    u8 pad[0x2c];
    u8 *p;
} A;
extern A *data_0203673c;
UI *Search_UNIT_INFO(u32 id) {
    s32 i;
    UI *u = (UI *) (data_0203673c->p + 0x2c8) + 0x400;
    for (i = 0; i < 0xf0; i++, u++) {
        if (u->valid && id == (((u32) * (u16 *) u << 20) >> 22)) {
            return u;
        }
    }
    return 0;
}

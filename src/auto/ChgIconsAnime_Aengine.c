/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x2a];
    u16 a;
    u16 pad2;
    u16 b;
    u8 pad3[6];
    u16 c;
} I;
void ChgIconsAnime_Aengine(I *p, u16 v) {
    if (p->a != v) {
        p->b = 0;
        p->a = v;
        p->c = 0x8000;
    }
}

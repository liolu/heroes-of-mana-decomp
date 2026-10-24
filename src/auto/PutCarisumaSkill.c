/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct A {
    u32 a : 13;
    u32 idx : 4;
    u32 b : 15;
} A;
typedef struct R {
    u8 pad[0x28];
    u8 *tab;
} R;
extern A *data_ov109_020ea340;
extern R *data_0203673c;
void PutCarisumaSkillNamePlate(s32);
void PutCarisumaSkillName(s32, s32);

void PutCarisumaSkill(void) {
    s32 i;
    s32 j;
    u32 mask;
    u32 k;
    A *a = data_ov109_020ea340;
    R *g = data_0203673c;
    k    = a->idx;
    mask = *(u16 *) (g->tab + k * 0x2d0 + 0x2b0);
    i    = 0;
    for (j = 0x10; j < 0x20; j++) {
        if (mask & 1) {
            PutCarisumaSkillNamePlate(i);
            PutCarisumaSkillName(j, i);
            i++;
        }
        mask >>= 1;
    }
}

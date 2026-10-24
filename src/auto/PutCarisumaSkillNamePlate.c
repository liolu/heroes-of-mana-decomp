/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x2c];
    s32 f2c;
    u8 pad2[0x0c];
    u8 f3c[0x318];
    u8 f354;
} S;
extern S *data_ov109_020ea340;
void SetStatusIcon(s32 id, s32 b, s32 x, s32 y, s32 a4, s32 a5, s32 a6, void *a7, s32 a8, s32 a9);
void PutCarisumaSkillNamePlate(s32 a) {
    S *s = data_ov109_020ea340;
    SetStatusIcon(0xff04, 0, ((u32) (a << 31) >> 24) + 0x40, (a >> 1) * 32 + 0x28, s->f354, 1, 0, s->f3c, s->f2c, 1);
}

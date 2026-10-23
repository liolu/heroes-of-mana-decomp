/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 type;
    u8 pad[12];
} E;

typedef struct {
    u8 pad[0xc];
    E *ents;
    u32 *tab;
} G;

extern G *data_ov003_020aea84;

void SetPalette(s32 a, s32 b) {
    if (b != 0) {
        *(volatile u32 *) 0x40004ac =
            (data_ov003_020aea84->tab[0] + data_ov003_020aea84->tab[b]) >> (4 - (data_ov003_020aea84->ents[a].type == 2));
    } else {
        *(volatile u32 *) 0x40004ac = data_ov003_020aea84->tab[0] >> (4 - (data_ov003_020aea84->ents[a].type == 2));
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct P {
    u32 pad : 13;
    u32 cur : 4;
    u32 rest : 15;
} P;
typedef struct En {
    u32 kind : 4;
    u32 id : 4;
    u32 rest : 24;
    u32 w1;
} En;
typedef struct Rm {
    u8 pad[0x21c];
    En e[9];
    u8 pad2[0x2d0 - 0x21c - 72];
} Rm;
typedef struct G {
    u8 pad[0x28];
    Rm *rooms;
} G;
extern P *data_ov109_020ea340;
extern G *data_0203673c;
s32 GetShisetuNo(u32 id) {
    s32 i;
    for (i = 0; i < 9; i++) {
        if (data_0203673c->rooms[data_ov109_020ea340->cur].e[i].kind != 0) {
            if (data_0203673c->rooms[data_ov109_020ea340->cur].e[i].id == id) {
                return i;
            }
        }
    }
    return -1;
}

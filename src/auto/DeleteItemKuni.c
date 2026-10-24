/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 id : 9;
    u16 qty : 7;
} Item;
typedef struct {
    u32 a : 8;
    u32 count : 8;
    u32 b : 16;
    u32 p[3];
    Item items[256];
    u8 pad[0x2d0 - 0x210];
} Team;
typedef struct {
    u8 p[0x28];
    Team *teams;
} G;
extern G *data_0203673c;

void DeleteItemKuni(s32 id, s32 n, s32 team) {
    Item *p = data_0203673c->teams[team].items;
    s32 i   = 0;
    do {
        if (p->id == 0) {
            break;
        }
        if (p->id == id) {
            s32 left = p->qty - n;
            if (left <= 0) {
                s32 j = i;
                if (j < 0xff) {
                    do {
                        j++;
                        p->id  = p[1].id;
                        p->qty = p[1].qty;
                        p++;
                    } while (j < 0xff);
                }
                p->id  = 0;
                p->qty = 0;
                {
                    Team *t = &data_0203673c->teams[team];
                    if ((u32) i < t->count && t->count != 0) {
                        t->count--;
                    }
                }
            } else {
                p->qty = left;
            }
            break;
        }
        i++;
        p++;
    } while (i < 0x100);
}

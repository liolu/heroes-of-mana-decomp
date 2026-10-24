/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void ReleaseUnitListGraData(void);
void putOneUnitIcon(u32, s32);

typedef struct {
    u32 pad0 : 13;
    u32 sel : 4;
    u32 pad17 : 5;
    u32 first : 5;
    u32 num : 5;
} LW0;
typedef struct {
    u32 pad : 23;
    u32 f23 : 4;
    u32 pad2 : 5;
} LW4;
typedef struct {
    LW0 w0;
    LW4 w4;
    u8 pad8[0x364 - 8];
    u32 count;
    u32 ids[16];
    u32 flags[16];
} L;
typedef struct {
    u32 pad0 : 2;
    u32 id : 9;
    u32 pad11 : 21;
    u32 pad4a : 5;
    u32 b5 : 1;
    u32 pad4b : 26;
    u32 pad8a : 23;
    u32 b23 : 1;
    u32 pad8b : 8;
    u8 pad_c[0x34 - 0xC];
} Party;
typedef struct {
    u8 pad[0x15];
    u8 b15;
    u8 pad2[0x20 - 0x16];
} Kind;
typedef struct {
    u8 pad0[0x210];
    u32 pad210a : 14;
    u32 v : 14;
    u32 pad210b : 4;
    u8 pad214[0x264 - 0x214];
    u16 ids[0x25];
    u8 pad_end[0x2D0 - 0x264 - 0x4A];
} Tbl;
typedef struct {
    u8 pad0[4];
    Kind *kinds;
    u8 pad8[0x24 - 8];
    Party *party;
    Tbl *tbl;
} G;
extern G *data_0203673c;
extern L *data_ov109_020ea340;

void PutListRelifeIcon(void) {
    Tbl *t;
    s32 i;
    u16 id;
    Party *p;
    u32 kid;
    s32 j;
    s32 y;
    t                          = (Tbl *) ((u8 *) data_0203673c->tbl + data_ov109_020ea340->w0.sel * 0x2D0);
    i                          = 0;
    data_ov109_020ea340->count = 0;
    do {
        id = t->ids[i];
        if (id != 0xFFFF) {
            p = &data_0203673c->party[id];
            if (p->b5 != 0 && p->b23 != 0) {
                kid                                                  = p->id;
                data_ov109_020ea340->ids[data_ov109_020ea340->count] = kid;
                if (data_0203673c->kinds[kid].b15 <= t->v) {
                    data_ov109_020ea340->flags[data_ov109_020ea340->count] = 0;
                } else {
                    data_ov109_020ea340->flags[data_ov109_020ea340->count] = 1;
                }
                data_ov109_020ea340->count = data_ov109_020ea340->count + 1;
            }
        }
        i++;
    } while (i < 0x25);
    data_ov109_020ea340->w4.f23 = 0;
    data_ov109_020ea340->w0.num = data_ov109_020ea340->count;
    ReleaseUnitListGraData();
    j = 0;
    y = 0x54;
    for (;;) {
        u32 idx = j + data_ov109_020ea340->w0.first;
        if (idx >= data_ov109_020ea340->count) {
            break;
        }
        putOneUnitIcon(idx, y);
        j++;
        y += 0x18;
        if (j >= 6) {
            break;
        }
    }
}

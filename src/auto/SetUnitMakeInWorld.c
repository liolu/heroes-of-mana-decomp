/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 k : 4;
    u32 pad : 13;
    u32 cnt : 4;
    u32 pad2 : 11;
    u32 w2;
} Item;
typedef struct {
    u8 pad[0x21C];
    Item it[8];
    u8 pad2[0x74];
} Ent;
typedef struct {
    u8 pad[0x28];
    Ent *tbl;
} B;
typedef struct {
    u32 pad : 13;
    u32 idx : 4;
} A;
extern A *data_ov109_020ea340;
extern B *data_0203673c;
s32 GetShisetuNo(void *);
void MakeUnitOne(Ent *, s32);
void SetUnitMakeInWorld(void *self, s32 a, s32 b) {
    s32 s = GetShisetuNo(self);
    if (s != -1) {
        data_0203673c->tbl[data_ov109_020ea340->idx].it[s].cnt = b;
        if (data_0203673c->tbl[data_ov109_020ea340->idx].it[s].k == 2) {
            while (1) {
                MakeUnitOne(&data_0203673c->tbl[data_ov109_020ea340->idx], a);
                if (data_0203673c->tbl[data_ov109_020ea340->idx].it[s].cnt == 0) {
                    break;
                }
                data_0203673c->tbl[data_ov109_020ea340->idx].it[s].cnt =
                    data_0203673c->tbl[data_ov109_020ea340->idx].it[s].cnt - 1;
            }
        }
    }
}

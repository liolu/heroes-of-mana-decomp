/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad0 : 13;
    u32 idx : 4;
    u32 pad1 : 15;
    u8 pad[0x354 - 4];
    u8 v354;
} G1;
typedef struct {
    u8 pad[0x28];
    u8 *ents;
} G2;
typedef struct {
    u8 pad[0x338];
    u16 f : 1;
    u8 pad2[0x44c - 0x33a];
    u16 cnt;
    u16 v;
} H;
extern G1 *data_ov109_020ea340;
extern G2 *data_0203673c;
extern H *data_ov000_02051550;
void DeleteNameByNoAnimeObjByID(s32, s32, s32);
s32 GetNowUnitKazu(void *);
void *getNameString(s32, s32, s32 *);
void PutStringByObj(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void OS_FreeToHeap(u32, s32, void *);
void PutNowCanMakeUnitKazu(void) {
    s32 len;
    void *name;
    u32 t;
    DeleteNameByNoAnimeObjByID(1, 0, 2);
    t                        = data_ov109_020ea340->v354 + 2;
    data_ov000_02051550->cnt = GetNowUnitKazu(data_0203673c->ents + data_ov109_020ea340->idx * 0x2d0);
    data_ov000_02051550->v   = 0x19;
    name                     = getNameString(7, 0x1b, &len);
    data_ov000_02051550->f   = 1;
    PutStringByObj(name, (s32) name + len, (u16) t, 0xa0, 0, 1, 0, 0, 0, 1, 2);
    if (name != 0) {
        OS_FreeToHeap(0, -1, name);
    }
    data_ov000_02051550->f = 0;
}

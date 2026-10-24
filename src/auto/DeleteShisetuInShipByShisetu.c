/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 type : 4;
    u32 id : 4;
    u32 rest : 24;
    u32 w1;
} Slot;
typedef struct {
    u8 pad[0x21c];
    Slot slot[1];
} Player;
typedef struct {
    u8 pad[0x28];
    u8 *players;
} Root;
typedef struct {
    u8 pad[0x10];
    u32 a : 28;
    u32 c : 1;
    u32 b : 1;
    u32 d : 2;
    u8 pad2[0xc];
    u32 e : 12;
    u32 f : 1;
    u32 g : 19;
} Glob;
void Make2DeleteForCarisuma(void);
void Make2DeleteForUnit(s32, u8);
void PutNowCanMakeUnitKazu(void);
void ReleaseUpFactoryData(u32);
void SetTrsObjCommand(s32, s32, s32, s32);
extern Root *data_0203673c;
extern Glob *data_ov000_02051548;
extern u8 data_ov003_020aba00[];

void DeleteShisetuInShipByShisetu(s32 a, s32 b) {
    if (((Player *) (data_0203673c->players + a * 0x2D0))->slot[b].type == 3) {
        if (b != 6) {
            Make2DeleteForUnit(a, data_ov003_020aba00[b]);
            if (data_ov000_02051548->f != 0) {
                PutNowCanMakeUnitKazu();
            }
        } else {
            Make2DeleteForCarisuma();
            if (data_ov000_02051548->f != 0) {
                PutNowCanMakeUnitKazu();
            }
        }
    }
    if (data_ov000_02051548->f != 0) {
        ReleaseUpFactoryData(((Player *) (data_0203673c->players + a * 0x2D0))->slot[b].id);
    }
    ((Player *) (data_0203673c->players + a * 0x2D0))->slot[b].type = 0;
    if (data_ov000_02051548->b != 0 && data_ov000_02051548->c != 0) {
        SetTrsObjCommand(2, a, b, 0);
    }
}

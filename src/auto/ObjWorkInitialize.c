/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad0[0x20];
    u32 f20_lo : 3;
    u32 f20_mid : 4;
    u32 f20_hi : 25;
    u8 pad1[0x450];
    s16 s474;
    s16 s476;
    u16 b478_0 : 1;
    u16 b478_1 : 1;
    u16 b478_r : 14;
    u8 pad2[0x12];
    s16 s48c;
    s16 s48e;
    u16 b490_0 : 1;
    u16 b490_1 : 1;
    u16 b490_r : 14;
    u8 pad3[0x2fa];
    u8 c78c[8];
    u8 c794[4];
} G;
typedef struct {
    u8 pad[0x600];
    s16 s600;
    u8 pad2[0x4ae];
    s16 sab0;
} H;
void ClearCanUseObjPalMap(s32);
void ClearCanUseVramMap(s32);
void ClearTensouOam(s32);
void deleteComObj(void *);
void deleteObjCharDataInVBlank(void);
extern G *data_ov000_02051548;
extern H *data_ov000_0205154c;

void ObjWorkInitialize(void) {
    deleteComObj((u8 *) data_ov000_02051548 + 0x78C);
    deleteComObj((u8 *) data_ov000_02051548 + 0x794);
    deleteComObj((u8 *) data_ov000_02051548 + 0x790);
    deleteComObj((u8 *) data_ov000_02051548 + 0x798);
    ClearCanUseVramMap(0);
    ClearCanUseVramMap(1);
    deleteObjCharDataInVBlank();
    ClearCanUseObjPalMap(0);
    ClearCanUseObjPalMap(1);
    data_ov000_0205154c->s600 = 0;
    data_ov000_0205154c->sab0 = 0;
    ClearTensouOam(0);
    ClearTensouOam(1);
    data_ov000_02051548->b478_0  = 0;
    data_ov000_02051548->s476    = 0;
    data_ov000_02051548->b490_0  = 0;
    data_ov000_02051548->s48e    = 0;
    data_ov000_02051548->s474    = 0;
    data_ov000_02051548->b478_1  = 0;
    data_ov000_02051548->s48c    = 0;
    data_ov000_02051548->b490_1  = 0;
    data_ov000_02051548->f20_mid = 0;
}

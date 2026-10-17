#include "m2c.h"
typedef struct {
    u32 pad0[7];
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    u32 pad2c[3];
    u32 callback;
    u32 callback_arg;
    u8 pad40[0xd4];
    u32 flag;
} CardCommon;
typedef struct {
    u32 pad[8];
    void *read_func;
} RomStat;
extern CardCommon cardi_common;
extern RomStat cardi_rom_base;
void CARDi_InitCommon(void);
void *CARDi_GetRomAccessor(void);
void CARD_InitPulledOutCallback(void);
void CARD_Init(void) {
    CardCommon *const p = &cardi_common;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        cardi_rom_base.pad[0]    = 0;
        CARDi_InitCommon();
        cardi_rom_base.read_func = CARDi_GetRomAccessor();
        CARD_InitPulledOutCallback();
    }
}

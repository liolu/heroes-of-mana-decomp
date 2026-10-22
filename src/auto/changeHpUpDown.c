/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void ChangeUnitIconOnBengine(void *);
u32 GetNikoCyanIconNo(u16, u32 *);
void redrawUnitConditionHpKazu(u16);
extern u8 *data_ov000_02051548;

typedef struct {
    void *ptr;
    u8 pad[0x10C];
} Entry;

extern Entry data_ov003_020b0dd8[];

void changeHpUpDown(void *arg0) {
    u32 v;
    u8 *g;
    u32 t;

    if ((((u32) (M2C_FIELD(arg0, u32 *, 8) << 2)) >> 0x1F) != 0) {
        ChangeUnitIconOnBengine(arg0);
    }
    if ((M2C_FIELD(arg0, u8 **, 0x84) != NULL) && (GetNikoCyanIconNo(M2C_FIELD(arg0, u16 *, 0xD8), &v) != 0)) {
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x84), u16 *, 0x2E) = 0;
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x84), u16 *, 0x2A) = v;
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x84), u16 *, 0x36) = 0x8000;
    }
    g = data_ov000_02051548;
    if (((((u32) (M2C_FIELD(g, s32 *, 0x18) << 0xF)) >> 0x18) == 2) &&
        (M2C_FIELD(arg0, u8 *, 0x38) == (((u32) (M2C_FIELD(g, s32 *, 0x10) << 6)) >> 0x18))) {
        t = ((u32) (M2C_FIELD(g, s32 *, 0x10) << 6)) >> 0x18;
        redrawUnitConditionHpKazu(M2C_FIELD(data_ov003_020b0dd8[t].ptr, u16 *, 0x10));
    }
}
/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 searchHookSamePosObj(s8, s8);
void *GetShipAooSt(u32);

typedef struct {
    u16 a : 7;
    u16 b : 7;
    u16 c : 2;
} HB;

s32 IsThereHookPosition(void *arg0) {
    HB *hb;
    void *p;

    if (searchHookSamePosObj(M2C_FIELD(arg0, s8 *, 0x60), M2C_FIELD(arg0, s8 *, 0x61)) != -1) {
        p = GetShipAooSt((u32) (M2C_FIELD(arg0, s32 *, 8) << 5) >> 0x1C);
        if (p == NULL) {
            return 0;
        }
        hb = (HB *) ((u8 *) p + 0xA8);
        if ((((u32) (M2C_FIELD(p, s32 *, 0) << 0x1F) >> 0x1F) != 0) &&
            (((u32) (M2C_FIELD(p, s32 *, 8) * 4) >> 0x1F) != 0) &&
            (hb->c == 2) &&
            (hb->a == M2C_FIELD(arg0, s8 *, 0x60)) &&
            (hb->b == M2C_FIELD(arg0, s8 *, 0x61))) {
            return 1;
        }
    }
    return 0;
}

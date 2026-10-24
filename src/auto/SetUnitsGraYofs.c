/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a967c;
void ReadAnaFileOfsSize(s32, void *, s32);

typedef struct {
    u8 pad[4];
    s32 base;
    u8 pad2[4];
    s32 *ofs;
} Res;

void SetUnitsGraYofs(u8 *p) {
    s16 buf[16];
    Res *r = *(Res **) (p + 0x10);
    ReadAnaFileOfsSize(r->base + (r->ofs[1] & 0xFFFFFF), buf, 12);
    *(s16 *) (p + 0x9E) = buf[5];
}

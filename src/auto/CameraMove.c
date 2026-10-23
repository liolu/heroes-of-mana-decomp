/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x1c0];
    s32 x1c0;
    s32 x1c4;
    s32 x1c8;
    s32 x1cc;
    s32 x1d0;
    u8 pad1[0x20c - 0x1d4];
    s32 t20c;
    s32 s210;
    s32 t214;
    s32 s218;
    s32 t21c;
    s32 s220;
    s32 c224;
    s32 c228;
    s32 c22c;
    s32 c230;
    s32 v234[3];
    u8 pad2[0x290 - 0x240];
    s32 *p290;
} G;

extern G *data_ov000_02051548;
void MIi_CpuCopy16(void *, void *, s32);
s32 GetHighPlace(s32, s32);
void *Get_aONEOBJadrsByCharno(s32);
void SetCameraObject(void *, s32);

void CameraMove(s32 spd, s32 mode, s32 a, s32 b, s32 e, s32 c, s32 d) {
    G *g;
    if (mode & 0x300) {
        if (mode & 0x100) {
            data_ov000_02051548->t20c = data_ov000_02051548->c228;
            data_ov000_02051548->s210 = spd;
            data_ov000_02051548->t214 = data_ov000_02051548->c22c;
            data_ov000_02051548->s218 = spd;
            data_ov000_02051548->t21c = data_ov000_02051548->c230;
            data_ov000_02051548->s220 = spd;
        }
        if (mode & 0x200) {
            data_ov000_02051548->t20c = data_ov000_02051548->c228;
            data_ov000_02051548->s210 = spd;
            data_ov000_02051548->t214 = data_ov000_02051548->c22c;
            data_ov000_02051548->s218 = spd;
            data_ov000_02051548->t21c = data_ov000_02051548->c230;
            data_ov000_02051548->s220 = spd;
            data_ov000_02051548->x1d0 = data_ov000_02051548->c224;
            MIi_CpuCopy16(data_ov000_02051548->v234, &data_ov000_02051548->x1c0, 12);
            data_ov000_02051548->x1cc = spd;
        }
        return;
    }
    switch (mode) {
        case 0:
            g       = data_ov000_02051548;
            g->x1d0 = 0;
            if (a != -1) {
                data_ov000_02051548->x1c0 = ((a - 0x14) << 14) + 0x2000;
            }
            if (b != -1) {
                data_ov000_02051548->x1c8 = ((b - 0x14) << 14) + 0x2000;
            }
            g       = data_ov000_02051548;
            g->x1c4 = GetHighPlace((g->x1c0 + 0x50000) / 0x4000, (g->x1c8 + 0x50000) / 0x4000) * (0x28 << *g->p290);
            data_ov000_02051548->x1cc = spd;
            break;
        case 1:
        default:
            if (a != -1) {
                void *o = Get_aONEOBJadrsByCharno(a);
                if (o != 0) {
                    SetCameraObject(o, spd);
                }
            }
            break;
    }
    if (c != -1) {
        data_ov000_02051548->t20c = c;
        data_ov000_02051548->s210 = spd;
    }
    if (d != -1) {
        data_ov000_02051548->t214 = d;
        data_ov000_02051548->s218 = spd;
    }
    if (e != -1) {
        data_ov000_02051548->t21c = e;
        data_ov000_02051548->s220 = spd;
    }
}

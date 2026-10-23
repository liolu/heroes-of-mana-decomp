/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void CancelTransTex2Vram(void *);
void DeleteObjPatOne(u16, u32);
void RagTimeSetToX(void *, u16);
void ReleaseTexBefore(s32);
void SetObjActionToNONE(void *);
void SetUseWaza(void *, s32, s32);
void changeAnimationObj(void *, s32, u32);
void *getNewPattern(u16, s32);
extern u8 *data_0203673c;

void Status2Normal(u8 *obj) {
    u32 *u;
    u32 r4;
    u32 t;
    u32 f;
    u32 *p;
    u16 *pat;

    u = *(u32 **) (obj + 0xE8);
    if (u != NULL) {
        if (((u[2] << 8) >> 31) == 0) {
            if (((*(u32 *) (obj + 8) << 2) >> 31) == 0) {
                r4 = ((*(u32 *) (*(u8 **) (data_0203673c + 0x10) + ((*u << 13) >> 24) * 4 + 8)) << 14) >> 31;
                if (*(u16 *) (obj + 0xDC) != 0) {
                    *(u16 *) (obj + 0xDC) = 0;
                }
                t = (*(u32 *) (*(u8 **) (data_0203673c + 0x10) + ((**(u32 **) (obj + 0xE8) << 13) >> 24) * 4 + 8) << 6) >> 29;
                switch (t) {
                    case 3:
                    case 4:
                    case 5:
                        if (((*(u32 *) (obj + 8) << 2) >> 31) == 0) {
                            *(u32 *) (obj + 0xBC) = *(u32 *) (obj + 0xC0);
                            pat                   = *(u16 **) (obj + 0x10);
                            DeleteObjPatOne(pat[0], ((u32) pat[1] << 16) >> 30);
                            *(void **) (obj + 0x10) = getNewPattern(*(u16 *) (obj + 0x1A), 0);
                            ReleaseTexBefore(*(s32 *) (obj + 0xB8));
                            ReleaseTexBefore(*(s32 *) (obj + 0xB4));
                            *(s32 *) (obj + 0xB8) = -1;
                            *(s32 *) (obj + 0xB4) = -1;
                            CancelTransTex2Vram(obj);
                            *(s32 *) (obj + 0x10C) = 0;
                            *(u32 *) obj |= 0x40000000;
                            *(u32 *) obj |= 0x80;
                            SetObjActionToNONE(obj);
                            changeAnimationObj(obj, 0, (*(u32 *) obj << 21) >> 29);
                        }
                        break;
                    case 2:
                        SetObjActionToNONE(obj);
                        changeAnimationObj(obj, 0, (*(u32 *) obj << 21) >> 29);
                        break;
                    default:
                        break;
                }
                p = *(u32 **) (obj + 0xE8);
                t = (*p << 13) >> 24;
                *p &= 0xFFF807FF;
                if (t == 7) {
                    SetUseWaza(obj, 0, 0);
                }
                if (r4 != 0) {
                    RagTimeSetToX(obj, *(u16 *) (obj + 0x18));
                }
            }
        }
    }
}

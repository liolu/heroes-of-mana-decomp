/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 flag : 1;
    u32 rest : 31;
} Flag158;

extern u8 *data_ov000_0205154c;
extern u16 data_ov003_020a990c[];

s32 SearchCanUseObjPalNo(u32, u16);
void MIi_CpuCopy16(void *, void *, s32);
void TensouICON_pallet_B(u16, s32);
void OS_FreeToHeap(u32, s32, void *);
void *getIconObjPalData(s32 *, s32);

void IconPalTrans(void) {
    s32 off;
    s32 pal;
    u16 m;
    s32 r6;
    void *data;
    s32 sp0;
    s32 i;
    u16 k;
    s32 pal2;
    u8 *q;

    data = getIconObjPalData(&sp0, 0);
    r6   = 0;
    off  = 0;
    do {
        pal = SearchCanUseObjPalNo((u32) ((sp0 + ((u32) (sp0 >> 4) >> 0x1B)) << 0xB) >> 0x10, r6);
        k   = 0;
        *(s16 *) (data_ov000_0205154c + off + 0x56C) = pal;
        if ((sp0 / 32) > 0) {
            do {
                q = (u8 *) (off + (s32) data_ov000_0205154c);
                *(u16 *) (q + 0x602) |= 1 << (pal + k);
                k++;
            } while ((s32) k < (sp0 / 32));
        }
        if (((Flag158 *) (data_ov000_0205154c + off + 0x158))->flag == 1) {
            MIi_CpuCopy16(data, (u8 *) *(u32 *) (data_ov000_0205154c + off + 0x160) + (pal << 5), sp0);
        }
        MIi_CpuCopy16(data, data_ov000_0205154c + 0x368 + off + (pal << 5), sp0);
        if (r6 == 1) {
            pal2                                         = SearchCanUseObjPalNo(4, r6);
            m                                            = 0;
            *(s16 *) (data_ov000_0205154c + off + 0x56E) = pal2;
            do {
                q = (u8 *) (off + (s32) data_ov000_0205154c);
                *(u16 *) (q + 0x602) |= 1 << (pal2 + m);
                m++;
            } while ((u32) 4U > m);
            for (i = 0; i < 3; i++) {
                TensouICON_pallet_B(data_ov003_020a990c[i], i);
            }
        }
        r6++;
        off += 0x4B0;
    } while ((s32) r6 < 2);
    if (0 != data) {
        OS_FreeToHeap(0, -1, data);
    }
}

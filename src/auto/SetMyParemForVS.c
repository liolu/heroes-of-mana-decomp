/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 p0 : 11;
    u32 a : 12;
    u32 p1 : 9;
} F8;
typedef struct {
    u32 lo : 12;
    u32 mid : 12;
    u32 p1 : 8;
} FC;
typedef struct {
    u32 p0 : 28;
    u32 side : 1;
    u32 p1 : 3;
} F10;
typedef struct {
    u8 pad0[8];
    F8 f8;
    FC fc;
    F10 f10;
    u8 pad1[0x38 - 0x14];
    s16 s38;
} G;
typedef struct {
    u8 c;
    u8 month;
    u8 day;
    u8 pad;
    u16 name[10];
    u16 len;
    u8 rest[0x50 - 0x1a];
} Info;

extern G *data_ov000_02051548;
extern u8 data_ov003_020b532c[];
extern u8 data_ov003_020b533c[], data_ov003_020b533b[], data_ov003_020b5337[], data_ov003_020b5338[], data_ov003_020b5339[];
extern u8 data_ov003_020b5334[], data_ov003_020b5335[];

void MIi_CpuClear16(s32, void *, s32);
void OS_GetOwnerInfo(Info *);
void MIi_CpuCopy16(void *, void *, s32);
s32 func_02002954(s32);
u8 *GetCanSelMapInVS(void);
void OS_FreeToHeap(u32, s32, void *);
u8 GetCanSelMapNoVS(s32, s32);

void SetMyParemForVS(void) {
    Info info;
    s32 i;
    s32 flag;
    s32 r;
    u8 v;
    u8 *m;
    G *g;
    u8 *d;

    MIi_CpuClear16(0, data_ov003_020b532c, 0x48);
    OS_GetOwnerInfo(&info);
    MIi_CpuCopy16(info.name, data_ov003_020b533c + (data_ov000_02051548->f10.side << 5), info.len * 2);
    data_ov003_020b533b[data_ov000_02051548->f10.side << 5] = info.month;
    data_ov003_020b5337[data_ov000_02051548->f10.side << 5] = data_ov000_02051548->f8.a;
    data_ov003_020b5338[data_ov000_02051548->f10.side << 5] = data_ov000_02051548->fc.lo;
    data_ov003_020b5339[data_ov000_02051548->f10.side << 5] = data_ov000_02051548->fc.mid;
    r                                                       = func_02002954(0);
    if (data_ov000_02051548->s38 == 0x18) {
        r = 8;
    }
    data_ov003_020b5334[data_ov000_02051548->f10.side << 5] = (u8) r;
    data_ov003_020b5335[data_ov000_02051548->f10.side << 5] = (u8) r;
    if (data_ov000_02051548->f10.side == 0) {
        m = GetCanSelMapInVS();
        if (m != NULL) {
            flag = 0;
            d    = data_ov003_020b532c;
            for (i = 0; i < 5; i++) {
                d[3] = m[i];
                if (m[i] != 0) {
                    flag = 1;
                }
                d++;
            }
            if (m != NULL) {
                OS_FreeToHeap(0, -1, m);
            }
            if (flag == 0) {
                data_ov003_020b532c[3] |= 2;
            }
        } else {
            d = data_ov003_020b532c;
            for (i = 0; i < 5; i++) {
                d[3] = 0;
                d++;
            }
            data_ov003_020b532c[3] = 1;
        }
        data_ov003_020b532c[0] = GetCanSelMapNoVS(0, 1);
    }
}

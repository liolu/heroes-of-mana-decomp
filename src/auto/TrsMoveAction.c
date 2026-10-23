/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f0 : 1;
} W0;
typedef struct {
    u32 f0 : 1;
    u32 f1 : 1;
} W4;
typedef struct {
    u32 pad : 29;
    u32 f29 : 1;
} W8;
typedef struct {
    u32 pad : 29;
    u32 f29 : 1;
    u32 r : 2;
} WG;
typedef struct {
    W0 w0;
    W4 w4;
    W8 w8;
    u8 pc[0xaa - 0xc];
    struct {
        u8 pad : 7;
        u8 f7 : 1;
    } b;
    u8 pad2[0x110 - 0xab];
} T;
typedef struct {
    u32 w;
} Wd;
void TrsEtcDataWork(void);
s32 checkConnect(void);
s32 EndGiveDataCheck(void);
void SetObjTrsDataOne(T *);
void SetObjTrsDataOne_forMove(T *);
void SetAnchorTrs(T *);
void TrsFlyArmWork(void);
void TrsSetWorkEtc(void);
extern u8 *data_ov000_02051548;
extern T data_ov003_020b0cf0[];

void TrsMoveAction(void) {
    s32 i;
    T *p = data_ov003_020b0cf0;
    if (((WG *) (data_ov000_02051548 + 0x10))->f29 != 0 && checkConnect() == 1 && EndGiveDataCheck() == 1) {
        TrsEtcDataWork();
        for (i = 0; i < 0x42; i++, p++) {
            if (p->w0.f0 == 0) {
                continue;
            }
            if (p->w4.f0 != 0) {
                if (*(u32 *) (data_ov000_02051548 + 0x4d0) > 0x7ec) {
                    goto done;
                }
                SetObjTrsDataOne(p);
                p->w4.f0 = 0;
            }
            if (p->w4.f1 != 0) {
                if (*(u32 *) (data_ov000_02051548 + 0x4d0) > 0x7f4) {
                    goto done;
                }
                SetObjTrsDataOne_forMove(p);
                p->w4.f1 = 0;
            }
            if (p->w8.f29 != 0 && p->b.f7 != 0) {
                p->b.f7 = 0;
                SetAnchorTrs(p);
            }
        }
    done:
        TrsFlyArmWork();
        TrsSetWorkEtc();
    }
}

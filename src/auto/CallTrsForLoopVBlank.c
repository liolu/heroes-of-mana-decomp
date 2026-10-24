/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 hdr : 5;
    u32 rest : 27;
    u8 data[0x48];
} Pkt;

typedef struct {
    u32 pad : 2;
    u32 mode : 4;
    u32 b : 22;
    u32 c : 1;
    u32 d : 1;
    u32 e : 2;
} Fl;

typedef struct {
    u8 pad[0x10];
    Fl fl;
} Ctx;

typedef struct {
    u32 a : 11;
    u32 cnt : 8;
    u32 p : 4;
    u32 q : 3;
    u32 r : 6;
} T;

typedef struct {
    u32 x[2];
    T t;
} T2;

extern Ctx *data_ov000_02051548;
extern T data_ov003_020b54f0;
extern T2 data_ov003_020b54e8;
extern u8 data_ov003_020b532c[];
extern u8 ModeConnect[];
extern u8 ParentModeConnect[];

s32 SyncCallTransBigSizeData(u8 *, s32);
s32 WH_GetBitmap(void);
s32 Send_startTrsTrig(void);
void GoTrsObjCommand(void);
void TrsEtcDataWork(void);
void TrsSetWorkEtc(void);
void MIi_CpuCopy16(u8 *, u8 *, s32);
void SetTrsDataForEtc(Pkt *, s32);

s32 CallTrsForLoopVBlank(void) {
    Pkt pa;
    Pkt pb;
    s32 r;

    if (data_ov000_02051548->fl.d == 0) {
        return 1;
    }
    if (data_ov000_02051548->fl.c != 0) {
        r = SyncCallTransBigSizeData(ModeConnect, 1);
    } else {
        r = SyncCallTransBigSizeData(ParentModeConnect, 0);
        if (WH_GetBitmap() != 1) {
            if (Send_startTrsTrig() == 1) {
                data_ov003_020b54f0.cnt = data_ov003_020b54f0.cnt - 1;
            }
        } else {
            data_ov003_020b54e8.t.cnt = 10;
        }
    }
    data_ov003_020b54f0.q = data_ov003_020b54f0.q + 1;
    if (r == 1) {
        GoTrsObjCommand();
        TrsEtcDataWork();
        TrsSetWorkEtc();
        if (data_ov003_020b54e8.t.q == 0) {
            if (data_ov000_02051548->fl.c != 0) {
                u32 m = data_ov000_02051548->fl.mode;
                if (m == 4) {
                    pa.hdr = 9;
                    MIi_CpuCopy16(data_ov003_020b532c, pa.data, 0x48);
                    SetTrsDataForEtc(&pa, 0x4C);
                } else if (m == 10) {
                    pb.hdr = 9;
                    MIi_CpuCopy16(data_ov003_020b532c, pb.data, 0x48);
                    SetTrsDataForEtc(&pb, 0x4C);
                }
            }
        }
    }
    return r;
}

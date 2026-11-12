/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    u32 a : 2;
    u32 st : 4;
    u32 pad6 : 4;
    u32 cnt : 8;
    u32 b : 10;
    u32 net : 1;
    u32 ok : 1;
    u32 c : 2;
    u32 pad14 : 8;
    u32 d14 : 4;
    u32 e14 : 20;
    u8 pad18[0x1cc - 0x18];
    s32 w1cc;
    u8 pad1d0[0x258 - 0x1d0];
    u16 h258;
} SW;
typedef struct {
    u32 f : 5;
    u32 r : 27;
    u8 d[0x48];
} Trs;
typedef struct {
    u8 pad[0x10];
    void (*fn)(void);
} Vt;
typedef struct {
    u8 pad[0xf44];
    Vt *vt;
} Glb;

extern SW *data_ov000_02051548;
extern u8 data_ov003_020b532c[];
extern Glb data_ov003_020b54e8;

void MIi_CpuCopy16(void *, void *, s32);
void SetTrsDataForEtc(void *, s32);
void func_ov121_020f3294(s32, s32);
s32 func_ov121_020ece28(void);
void func_ov121_020f34dc(s32);
void VBlankIntrWait(void);
s32 CallTrsForLoop(void);
void SetTrsObjCommand(s32, s32, s32, s32);
void ReleaseTrsData(void);
void ana_InitDisplay3D(void);
s32 checkConnectParent(void);

s32 Sample_SetUp2PlayerVS(void) {
    Trs t;
    s32 a = 10;
    s32 b = 11;
    s32 z;
    s32 ret;

    if (data_ov000_02051548->net == 0) {
        t.f = 9;
        MIi_CpuCopy16(data_ov003_020b532c, t.d, 0x48);
        SetTrsDataForEtc(&t, 0x4c);
        func_ov121_020f3294(0x20, 0x400);
        z                        = 0;
        data_ov000_02051548->cnt = 0;
        for (;;) {
            if (data_ov000_02051548->cnt == 0) {
                s32 r = func_ov121_020ece28();
                switch (r) {
                    case 4:
                        func_ov121_020f34dc(0x20);
                        {
                            ret = 4;
                            goto end;
                        }
                    case 5:
                        data_ov000_02051548->cnt = 5;
                        break;
                    case 0xe:
                        data_ov003_020b54e8.vt->fn();
                        {
                            ret = 0xe;
                            goto end;
                        }
                }
            } else {
                VBlankIntrWait();
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->ok == 0) {
                data_ov003_020b54e8.vt->fn();
                {
                    ret = 0xf;
                    goto end;
                }
            }
            if (data_ov000_02051548->cnt == 1) {
                break;
            }
            if (data_ov000_02051548->cnt != 0) {
                SetTrsObjCommand(a, b, z, z);
                data_ov000_02051548->cnt--;
            }
            if (data_ov000_02051548->st == 0xb) {
                func_ov121_020f34dc(0x20);
                {
                    ret = 0xd;
                    goto end;
                }
            }
        }
        func_ov121_020f34dc(0x20);
        func_ov121_020f3294(0x2000, 0x40000000);
        for (;;) {
            if (data_ov000_02051548->st == 6) {
                break;
            }
            {
                s32 r = func_ov121_020ece28();
                switch (r) {
                    case 4:
                        func_ov121_020f34dc(0x2000);
                        {
                            ret = 4;
                            goto end;
                        }
                    case 0xe:
                        data_ov003_020b54e8.vt->fn();
                        {
                            ret = 0xe;
                            goto end;
                        }
                }
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->ok == 0) {
                data_ov003_020b54e8.vt->fn();
                {
                    ret = 0xf;
                    goto end;
                }
            }
            if (data_ov000_02051548->st == 0xb) {
                func_ov121_020f34dc(0x2000);
                {
                    ret = 0xd;
                    goto end;
                }
            }
        }
        func_ov121_020f34dc(0x2000);
        data_ov000_02051548->cnt = 0;
        ReleaseTrsData();
        ana_InitDisplay3D();
        data_ov000_02051548->d14  = 0;
        data_ov000_02051548->w1cc = 1;
        data_ov000_02051548->h258 = data_ov003_020b532c[0];
    } else {
        func_ov121_020f3294(0x200, 0x400);
        z                        = 0;
        data_ov000_02051548->cnt = 0;
        for (;;) {
            if (checkConnectParent() == 0) {
                data_ov003_020b54e8.vt->fn();
                {
                    ret = 0xf;
                    goto end;
                }
            }
            if (data_ov000_02051548->cnt == 0) {
                s32 r = func_ov121_020ece28();
                switch (r) {
                    case 4:
                        func_ov121_020f34dc(0x20);
                        {
                            ret = 4;
                            goto end;
                        }
                    case 5:
                        data_ov000_02051548->cnt = 5;
                        break;
                    case 0xe:
                        data_ov003_020b54e8.vt->fn();
                        {
                            ret = 0xe;
                            goto end;
                        }
                }
            } else {
                VBlankIntrWait();
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->ok == 0) {
                data_ov003_020b54e8.vt->fn();
                {
                    ret = 0xf;
                    goto end;
                }
            }
            if (data_ov000_02051548->cnt == 1) {
                break;
            }
            if (data_ov000_02051548->cnt != 0) {
                SetTrsObjCommand(a, b, z, z);
                data_ov000_02051548->cnt--;
            }
            if (data_ov000_02051548->st == 0xb) {
                func_ov121_020f34dc(0x20);
                {
                    ret = 0xd;
                    goto end;
                }
            }
        }
        func_ov121_020f34dc(0x20);
        func_ov121_020f3294(0x2000, 0x40000000);
        data_ov000_02051548->cnt = 0;
        for (;;) {
            if (data_ov000_02051548->st == 6) {
                break;
            }
            {
                s32 r = func_ov121_020ece28();
                switch (r) {
                    case 4:
                        func_ov121_020f34dc(0x2000);
                        {
                            ret = 4;
                            goto end;
                        }
                    case 0xe:
                        data_ov003_020b54e8.vt->fn();
                        {
                            ret = 0xe;
                            goto end;
                        }
                }
            }
            if (CallTrsForLoop() == 0 || data_ov000_02051548->ok == 0) {
                data_ov003_020b54e8.vt->fn();
                {
                    ret = 0xf;
                    goto end;
                }
            }
            if (data_ov000_02051548->st == 0xb) {
                func_ov121_020f34dc(0x2000);
                {
                    ret = 0xd;
                    goto end;
                }
            }
        }
        func_ov121_020f34dc(0x2000);
    }
    ret = 5;
end:
    return ret;
}

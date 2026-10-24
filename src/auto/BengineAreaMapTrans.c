/* compiler: 2.0/sp1p5 -profile */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct P {
    int a, b, c, d;
} P;
typedef struct G1 {
    char pad[0x604];
    u16 h604;
} G1;
typedef struct G2 {
    char pad[0x258];
    u16 h258;
    char pad2[0x484 - 0x25a];
    int a484;
    short *a488;
} G2;
extern G1 *data_ov000_0205154c;
extern G2 *data_ov000_02051548;
extern void *ReadFileAndUncomp(int, P *, int *);
extern void DC_FlushAll(void);
extern void GXS_BeginLoadBGExtPltt(void);
extern void GXS_LoadBGExtPltt(void *, int, int);
extern void GXS_EndLoadBGExtPltt(void);
extern void OS_FreeToHeap(int, int, void *);
extern void MIi_CpuCopy16(void *, int, int);

void BengineAreaMapTrans(void) {
    int sp4, sp0;
    P pb, pa;
    void *r4;
    data_ov000_0205154c->h604 = 0x1c;
    *(u32 *) 0x04001000       = (*(u32 *) 0x04001000 & ~0x1f00) | (data_ov000_0205154c->h604 << 8);
    data_ov000_02051548->a484 = 0x06210000;
    data_ov000_02051548->a488 = (short *) 0x05000400;
    pb.a                      = 0;
    pb.b                      = 0;
    pb.c                      = data_ov000_02051548->h258;
    r4                        = ReadFileAndUncomp(3, &pb, &sp4);
    DC_FlushAll();
    GXS_BeginLoadBGExtPltt();
    GXS_LoadBGExtPltt(r4, 0x4000, 0x200);
    GXS_LoadBGExtPltt(r4, 0x6000, 0x200);
    GXS_EndLoadBGExtPltt();
    if (r4 != 0) {
        OS_FreeToHeap(0, -1, r4);
    }
    r4                         = 0;
    *data_ov000_02051548->a488 = 0;
    pa.b                       = 1;
    pa.a                       = 0;
    pa.c                       = data_ov000_02051548->h258;
    r4                         = ReadFileAndUncomp(3, &pa, &sp0);
    MIi_CpuCopy16(r4, data_ov000_02051548->a484, 0x10000);
    if (r4 != 0) {
        OS_FreeToHeap(0, -1, r4);
    }
}

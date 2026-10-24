/* compiler: 2.0/sp1p5 -profile */
typedef struct W {
    char pad[0x10];
    struct {
        int a, b;
    } *p10;
    struct {
        int a, b, c;
    } *p14;
    char pad2[0xac - 0x18];
    void *pac;
    char pad3[0xbc - 0xb0];
    int pbc;
    char pad4[0x110 - 0xc0];
} W;
typedef struct U {
    char pad[0x110];
} U;
typedef struct G {
    char pad[0x1c];
    unsigned f1c;
    char pad2[0x240 - 0x20];
    int a240, a244;
} G;
extern G *data_ov000_02051548;
extern U data_ov003_020b0cf0[];
extern W data_ov003_020b08b0[];
extern void ReleaseHitMarkSt(void);
extern void ReleaseFlyArmAll(void);
extern void InitializeMap_Object(void);
extern void ReleaseNoneAnimeTex(void *);
extern void ReleaseObjWorkOne(void *);
extern void DeleteTexPalMap(int, int);
extern void DeleteAllObjPal(int);
extern void DeleteAllObjPat(int);
extern void OS_FreeToHeap(int, int, void *);
extern void MIi_CpuClear16(int, void *, int);

void ReleaseObjWork(void) {
    U *u = data_ov003_020b0cf0;
    W *w;
    int i;
    W *w2;
    int j;
    ReleaseHitMarkSt();
    ReleaseFlyArmAll();
    InitializeMap_Object();
    ReleaseNoneAnimeTex((char *) data_ov000_02051548 + 0x510);
    ReleaseNoneAnimeTex((char *) data_ov000_02051548 + 0x528);
    i = 0;
    do {
        ReleaseObjWorkOne(u);
        i++;
        u++;
    } while (i < 0x42);
    w = data_ov003_020b08b0;
    i = 0;
    do {
        if (w->p14 != 0) {
            DeleteTexPalMap(w->pbc, w->p14->c);
        }
        i++;
        w++;
    } while (i < 4);
    DeleteAllObjPal(data_ov000_02051548->a244);
    data_ov000_02051548->a244 = 0;
    DeleteAllObjPat(data_ov000_02051548->a240);
    j                         = 0;
    w2                        = data_ov003_020b08b0;
    data_ov000_02051548->a240 = 0;
    data_ov000_02051548->f1c &= ~0x200;
    do {
        if (w2->p10 != 0 && w2->p10->b != 0 && w2->pac != 0) {
            OS_FreeToHeap(0, -1, w2->pac);
            w2->pac = 0;
        }
        MIi_CpuClear16(0, w2, 0x110);
        j++;
        w2++;
    } while (j < 4);
    MIi_CpuClear16(0, data_ov003_020b0cf0, 0x4620);
}

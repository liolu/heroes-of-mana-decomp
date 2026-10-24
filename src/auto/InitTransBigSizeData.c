/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 p0[0x168];
    int f168;
    u8 p16c[8];
    u32 p174 : 5;
    u32 b5 : 1;
    u32 b6 : 1;
    u32 p7 : 1;
    u32 b8 : 8;
    u32 rest : 16;
    u8 p178[4];
    int f17c;
    void *f180;
    u8 p184[12];
    int f190;
    int f194;
    int f198;
    int f19c;
} G;
extern G data_ov003_020b5380;
void GetDataMP(void);
void WH_SetReceiver(void (*)(void));
void OS_FreeToHeap(int, int, void *);
void InitTransBigSizeData(int a, int b) {
    WH_SetReceiver(GetDataMP);
    data_ov003_020b5380.f168 = 0;
    if (data_ov003_020b5380.f180 != 0) {
        OS_FreeToHeap(0, -1, data_ov003_020b5380.f180);
        data_ov003_020b5380.f180 = 0;
    }
    data_ov003_020b5380.b5   = 0;
    data_ov003_020b5380.b6   = 0;
    data_ov003_020b5380.f190 = 0;
    data_ov003_020b5380.f194 = a;
    data_ov003_020b5380.f198 = b;
    data_ov003_020b5380.f19c = 0;
    data_ov003_020b5380.b8   = 0;
    data_ov003_020b5380.f17c = 0;
}

/* compiler: 2.0/sp1p5 -profile */
typedef struct Gd {
    unsigned char p0[0x1C];
    unsigned int w1c_lo : 29;
    unsigned int w1c_f : 1;
    unsigned int w1c_hi : 2;
    unsigned int w20;
    unsigned int w24_lo : 8;
    unsigned int w24_f : 1;
    unsigned int w24_hi : 23;
    unsigned char p1[0x10];
    short s38;
    short s3a;
    unsigned char p2[0x8C];
    unsigned int wc8_f : 1;
    unsigned int wc8_hi : 31;
    int wcc;
    unsigned char p3[0x698 - 0xD0];
    unsigned char thr[0xC0];
    int w758;
    int w75c;
} Gd;
extern Gd *data_ov000_02051548;
extern int data_ov003_020ad070[];
extern void ReleaseSenarioScript(void);
extern void MIi_CpuClear16(int, int, int);
extern int func_0200d998(void);
extern void OS_InitThread(void);
extern void func_02000f44(int);
extern void OS_CreateThread(void *, int, int, int, int, int);

void SetUpSenarioScript(int n) {
    ReleaseSenarioScript();
    if (n < 0x66) {
        data_ov000_02051548->w24_f = 1;
        data_ov000_02051548->w1c_f = 0;
        data_ov000_02051548->wcc   = 0;
        data_ov000_02051548->s38   = n;
        data_ov000_02051548->w758  = data_ov000_02051548->w75c;
        MIi_CpuClear16(0, data_ov000_02051548->w758, 0x1400);
        if (func_0200d998() != 1) {
            OS_InitThread();
        }
        func_02000f44(n + 0x16);
        OS_CreateThread(data_ov000_02051548->thr, data_ov003_020ad070[n], 0x7B, data_ov000_02051548->w758 + 0x1400, 0x1400,
                        10);
        data_ov000_02051548->wc8_f = 0;
        data_ov000_02051548->s3a   = -1;
    }
}

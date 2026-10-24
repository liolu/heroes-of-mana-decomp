/* compiler: 2.0/sp1p5 -profile */
typedef struct Gl {
    unsigned int pad0[4];
    unsigned int pad : 28;
    unsigned int f : 1;
} Gl;
extern void WH_Finalize(void);
extern int WH_GetSystemState(void);
extern void func_0200fb08(void);
extern int WH_GetLastError(void);
extern int WH_End(void);
extern Gl *data_ov000_02051548;

void SafeDisconnect(void) {
    int n = 0;
    WH_Finalize();
    if (WH_GetSystemState() != 1) {
        do {
            func_0200fb08();
            if (data_ov000_02051548->f != 0) {
                if (WH_GetSystemState() == 3) {
                    n++;
                    if (n >= 0x1C20) {
                        WH_Finalize();
                        n = 0;
                    }
                } else {
                    n = 0;
                }
            }
            if (WH_GetSystemState() == 9 || WH_GetSystemState() == 10) {
                if (WH_GetLastError() != 0x14) {
                    break;
                }
                WH_Finalize();
            }
        } while (WH_GetSystemState() != 1);
    }
    if (WH_GetSystemState() == 1) {
        WH_End();
        if (WH_GetSystemState() != 0) {
            do {
                if (WH_GetSystemState() != 9 && WH_GetSystemState() != 10) {
                    break;
                }
                WH_End();
            } while (WH_GetSystemState() != 0);
        }
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x174];
    u32 w174;
    u8 pad3[8];
    void *w180;
    u8 pad4[4];
    s32 w188;
    u8 pad5[4];
    s32 w190;
} Snd;
extern Snd data_ov003_020b5380;
void func_0200fddc(void);
void OS_FreeToHeap(s32, s32, void *);
void SendOnePack(void);

void OkSend(s32 arg0) {
    s32 n;
    if (arg0 == 0) {
        func_0200fddc();
    }
    n = data_ov003_020b5380.w190;
    if (n == 0) {
        data_ov003_020b5380.w174 &= ~0x20;
        if (data_ov003_020b5380.w180 != 0) {
            OS_FreeToHeap(0, -1, data_ov003_020b5380.w180);
            data_ov003_020b5380.w180 = 0;
        }
    } else {
        if (n != -1) {
            data_ov003_020b5380.w188 += n;
        }
        SendOnePack();
    }
}

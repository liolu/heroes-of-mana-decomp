/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s32 data_02036798;
extern struct {
    void *fn;
    s32 prio;
} data_0203679c;
extern struct {
    void *fn;
    s32 prio;
} data_020367a8;
extern s8 data_02036790;
extern s32 data_02036794;
extern void BeginSleep();
extern void func_02003b7c();
void SND_Init(void);
void PM_PrependPreSleepCallback(void *);
void PM_AppendPostSleepCallback(void *);
void NNSi_SndInitResourceMgr(void);
void NNSi_SndCaptureInit(void);
void func_0200436c(void);

void func_02003c1c(void) {
    if (data_02036798 != 0) {
        return;
    }
    data_02036798 = 1;
    SND_Init();
    data_0203679c.fn   = (void *) BeginSleep;
    data_0203679c.prio = 0;
    data_020367a8.fn   = (void *) func_02003b7c;
    data_020367a8.prio = 0;
    PM_PrependPreSleepCallback(&data_0203679c);
    PM_AppendPostSleepCallback(&data_020367a8);
    NNSi_SndInitResourceMgr();
    NNSi_SndCaptureInit();
    func_0200436c();
    data_02036790 = -1;
    data_02036794 = 1;
}

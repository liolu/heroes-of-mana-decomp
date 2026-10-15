/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef void (*ThreadDestructor)(void *arg);
typedef struct OSThread {
    u8 pad_00[0xb4];
    ThreadDestructor destructor;
} OSThread;
typedef struct {
    u8 pad_00[8];
    OSThread **currentThreadPtr;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 OSi_SystemCallbackInSwitchThread;
extern void func_0200fa98(void);
extern void OSi_ExitThread_Destroy(void);

/* ExitCurrentThreadWithArg_02002a00 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/ExitCurrentThreadWithArg_02002a00.c (license: MIT), reused by tools/donor_match.py */
void OSi_ExitThread(void *arg) {
    OSThread *currentThread     = *OSi_SystemCallbackInSwitchThread.currentThreadPtr;
    ThreadDestructor destructor = currentThread->destructor;

    if (destructor != 0) {
        currentThread->destructor = 0;
        destructor(arg);
        func_0200fa98();
    }
    OSi_ExitThread_Destroy();
}

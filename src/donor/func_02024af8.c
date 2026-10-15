/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* raise from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/signal.c (license: none), reused by
 * tools/donor_match.py */
extern void exit(int status);
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadSwitchCallback)(OSThread *oldThread, OSThread *newThread);
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThreadInfo {
    u16 isSchedulerWaiting;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    OSThreadSwitchCallback callback;
} OSThreadInfo;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
extern OSThreadInfo OSi_ThreadInfo;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &OSi_ThreadInfo;
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline u32 OS_GetThreadId(OSThread *thread) {
    return thread->id;
}
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void OS_LockMutex(OSMutex *mutex);
extern void func_0200e644(OSMutex *mutex);
extern BOOL func_0200e6dc(OSMutex *mutex);
enum critical_regions {
    atexit_funcs_access   = 0,
    malloc_pool_access    = 1,
    stdin_access          = 2,
    stdout_access         = 3,
    stderr_access         = 4,
    files_access          = 5,
    console_status_access = 6,
    signal_funcs_access   = 7,
    thread_access         = 8,
    num_critical_regions  = 9
};
extern OSMutex __cs[num_critical_regions];
extern int __cs_id[num_critical_regions];
extern int __cs_ref[num_critical_regions];
static inline void __begin_critical_region(int region) {
    OSThread *currentThread;

    if (func_0200e6dc(&__cs[region]) == 0) {
        currentThread    = OS_GetCurrentThread();
        __cs_id[region]  = OS_GetThreadId(currentThread);
        __cs_ref[region] = 1;
    } else {
        currentThread = OS_GetCurrentThread();
        if (OS_GetThreadId(currentThread) == __cs_id[region]) {
            __cs_ref[region]++;
        } else {
            OS_LockMutex(&__cs[region]);
            currentThread    = OS_GetCurrentThread();
            __cs_id[region]  = OS_GetThreadId(currentThread);
            __cs_ref[region] = 1;
        }
    }
}
static inline void __end_critical_region(int region) {
    if (--__cs_ref[region] == 0) {
        func_0200e644(&__cs[region]);
    }
}
typedef void (*sig_func)(int sig);
extern sig_func signal_funcs[7];
int func_02024af8(int sig) {
    sig_func signal_func;

    if (sig < 1 || sig > 7) {
        return -1;
    }

    __begin_critical_region(signal_funcs_access);

    signal_func = signal_funcs[sig - 1];

    if ((unsigned int) signal_func != 1) {
        signal_funcs[sig - 1] = 0;
    }

    __end_critical_region(signal_funcs_access);

    if ((unsigned int) signal_func == 1 || ((int) signal_func == 0 && sig == 1)) {
        return 0;
    }

    if ((unsigned int) signal_func == 0) {
        exit(0);
    }

    signal_func(sig);
    return 0;
}

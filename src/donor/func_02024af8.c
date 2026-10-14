/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* raise from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/signal.c (license: none), reused by
 * tools/donor_match.py */
extern void func_02020ad8(int status);
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
extern OSThreadInfo data_02038660;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &data_02038660;
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
extern void func_0200e5c0(OSMutex *mutex);
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
extern OSMutex data_02041d88[num_critical_regions];
extern int data_02041d40[num_critical_regions];
extern int data_02041d64[num_critical_regions];
static inline void __begin_critical_region(int region) {
    OSThread *currentThread;

    if (func_0200e6dc(&data_02041d88[region]) == 0) {
        currentThread         = OS_GetCurrentThread();
        data_02041d40[region] = OS_GetThreadId(currentThread);
        data_02041d64[region] = 1;
    } else {
        currentThread = OS_GetCurrentThread();
        if (OS_GetThreadId(currentThread) == data_02041d40[region]) {
            data_02041d64[region]++;
        } else {
            func_0200e5c0(&data_02041d88[region]);
            currentThread         = OS_GetCurrentThread();
            data_02041d40[region] = OS_GetThreadId(currentThread);
            data_02041d64[region] = 1;
        }
    }
}
static inline void __end_critical_region(int region) {
    if (--data_02041d64[region] == 0) {
        func_0200e644(&data_02041d88[region]);
    }
}
typedef void (*sig_func)(int sig);
extern sig_func data_02042164[7];
int func_02024af8(int sig) {
    sig_func signal_func;

    if (sig < 1 || sig > 7) {
        return -1;
    }

    __begin_critical_region(signal_funcs_access);

    signal_func = data_02042164[sig - 1];

    if ((unsigned int) signal_func != 1) {
        data_02042164[sig - 1] = 0;
    }

    __end_critical_region(signal_funcs_access);

    if ((unsigned int) signal_func == 1 || ((int) signal_func == 0 && sig == 1)) {
        return 0;
    }

    if ((unsigned int) signal_func == 0) {
        func_02020ad8(0);
    }

    signal_func(sig);
    return 0;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MBi_InitTaskThread from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_task.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef u32 OSIntrMode;
extern OSIntrMode func_0200fa98(void);
extern OSIntrMode func_0200faac(OSIntrMode state);
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    int systemErrno;
};
extern void func_0200d9a8(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_0200de08(OSThread *thread);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
extern const u16(*ctrdgi_fl_maxtime);
typedef void (*MB_TASK_FUNC)(struct MBiTaskInfo_tag *);
typedef struct MBiTaskInfo_tag {
    struct MBiTaskInfo_tag *next;
    u32 busy : 1;
    u32 priority : 31;
    MB_TASK_FUNC task;
    MB_TASK_FUNC callback;
    u32 param[4];
} MBiTaskInfo;
extern void func_0201f794(void *p_work, u32 size);
extern void func_0201f830(MBiTaskInfo *pt);
typedef struct {
    OSThread th[1];
    MBiTaskInfo *volatile list;
    MBiTaskInfo end_task;
} MBiTaskWork;
extern MBiTaskWork *data_02041620;
void func_0201f67c(void *arg);
void func_0201f794(void *p_work, u32 size) {
    OSIntrMode bak_cpsr = func_0200fa98();

    if (!data_02041620) {
        MBiTaskWork *const p = (MBiTaskWork *) p_work;

        ((void) 0);
        ((void) 0);

        data_02041620 = p;
        func_0201f830(&p->end_task);

        p->list = 0;
        size    = (u32) ((size - sizeof(MBiTaskWork)) & ~3);

        func_0200d9a8(p->th, func_0201f67c, p, (u8 *) (p + 1) + size, size, 0);
        func_0200de08(p->th);
    }

    (void) func_0200faac(bak_cpsr);
}
void func_0201f830(MBiTaskInfo *pt);

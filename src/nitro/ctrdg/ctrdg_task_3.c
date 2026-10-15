/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_0200fa98(void);
extern void func_0200faac(int state);
extern void MI_CpuFill8(void *dst, int value, int size);
extern void OS_SleepThread(void *queue);
extern void OS_ExitThread(void);
extern char ctrdgi_task_work;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void CTRDGi_TaskThread(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        MI_CpuFill8(&job, 0, 0x24);
        enabled = func_0200fa98();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            OS_SleepThread(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_0200faac(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                              = func_0200fa98();
        done                                 = job.done;
        *((char *) &ctrdgi_task_work + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &ctrdgi_task_work != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_0200faac(enabled);
        } else {
            OS_ExitThread();
            return;
        }
    }
}

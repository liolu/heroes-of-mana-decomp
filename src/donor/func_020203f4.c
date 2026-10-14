/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200fa98(void);
extern void func_0200faac(int state);
extern void func_020103a0(void *dst, int value, int size);
extern void func_0200dd50(void *queue);
extern void func_0200daa4(void);
extern char data_02041808;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;
void func_020203f4(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_020103a0(&job, 0, 0x24);
        enabled = func_0200fa98();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_0200dd50(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_0200faac(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_0200fa98();
        done                              = job.done;
        *((char *) &data_02041808 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_02041808 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_0200faac(enabled);
        } else {
            func_0200daa4();
            return;
        }
    }
}

typedef struct Task {
    struct Task *next;
    unsigned int busy : 1;
    unsigned int prio : 31;
    int a;
    int b;
} Task;
typedef struct Work {
    unsigned char pad[0xC0];
    Task *head;
    Task list;
} Work;
int MBi_IsTaskAvailable(void);
void func_0200fddc(void);
unsigned int OS_GetThreadPriority(void *);
void OS_WakeupThreadDirect(void *);
int func_0200fa98(void);
void func_0200faac(int);
extern Work *mbi_task_work;
void MBi_SetTask(Task *task, int arg1, int arg2, unsigned int prio) {
    Work *w = mbi_task_work;
    int irq;
    Task *p;
    Task *n;
    if (MBi_IsTaskAvailable() == 0) {
        func_0200fddc();
    }
    if (task->busy) {
        func_0200fddc();
    }
    if (prio > 31) {
        unsigned int cur = OS_GetThreadPriority(w);
        if (prio == 32) {
            if (cur != 0) {
                prio = cur - 1;
            } else {
                prio = 0;
            }
        } else if (prio == 33) {
            if (cur < 31) {
                prio = cur + 1;
            } else {
                prio = 31;
            }
        } else if (prio == 34) {
            prio = cur;
        } else {
            prio = 31;
        }
    }
    irq        = func_0200fa98();
    task->busy = 1;
    task->prio = prio;
    task->a    = arg1;
    task->b    = arg2;
    if (*(Task *volatile *) &w->head == 0) {
        if (task == &w->list) {
            mbi_task_work = 0;
        }
        w->head = task;
        OS_WakeupThreadDirect(w);
    } else {
        p = w->head;
        if (task == &w->list) {
            n = p->next;
            if (n != 0) {
                do {
                    p = n;
                    n = n->next;
                } while (n != 0);
            }
            p->next       = task;
            mbi_task_work = 0;
        } else if (prio < p->prio) {
            w->head    = task;
            task->next = p;
        } else {
            for (; (n = p->next) != 0 && prio >= n->prio; p = n) {
            }
            task->next = n;
            p->next    = task;
        }
    }
    func_0200faac(irq);
}

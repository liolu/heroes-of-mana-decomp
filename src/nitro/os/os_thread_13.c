/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_0200fa98(void);
extern void func_0200faac(int);
extern void OSi_InsertThreadToList(void *);
extern void OSi_RescheduleThread(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead OSi_SystemCallbackInSwitchThread;
extern Node OSi_IdleThread;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int OS_SetThreadPriority(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = OSi_SystemCallbackInSwitchThread.head;
    intr = func_0200fa98();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &OSi_IdleThread) {
        func_0200faac(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            OSi_SystemCallbackInSwitchThread.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        OSi_InsertThreadToList(target);
        OSi_RescheduleThread();
    }
    func_0200faac(intr);
    return 1;
}

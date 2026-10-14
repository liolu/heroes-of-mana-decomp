/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200fa98(void);
extern void func_0200faac(int);
extern void func_0200d7a8(void *);
extern void func_0200de58(void);
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
extern ListHead data_0203863c;
extern Node data_02038670;
int func_0200dff4(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_0203863c.head;
    intr = func_0200fa98();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_02038670) {
        func_0200faac(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_0203863c.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_0200d7a8(target);
        func_0200de58();
    }
    func_0200faac(intr);
    return 1;
}

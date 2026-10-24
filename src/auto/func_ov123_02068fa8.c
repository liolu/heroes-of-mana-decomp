/* compiler: 1.2/sp2p3 */
extern int OS_IrqHandler;
void OS_WakeupThread(void *);
typedef struct {
    int a;
    int b;
    int *c;
    int d;
} S;
void func_ov123_02068fa8(S *p) {
    if (p->c != &OS_IrqHandler) {
        return;
    }
    p->d = p->d - 1;
    if (p->d != 0) {
        return;
    }
    p->c = 0;
    OS_WakeupThread(p);
}

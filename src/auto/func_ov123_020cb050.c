/* compiler: 1.2/sp3 */
/* near start: 6 diffs with profile "1.2/sp3" */
typedef unsigned short u16;
typedef struct N {
    struct N *prev;
    struct N *next;
    u16 h8;
    u16 ha;
} N;
typedef struct Pl {
    char pad[0x1a0];
} Pl;
extern Pl *data_ov123_020e4754;
extern N *func_ov123_020c9410(int);
extern int OS_DisableIrqMask(int);
extern void OS_EnableIrqMask(int);
extern void func_ov123_020cad94(N *, N *);
extern void func_0200fddc(void);

N *func_ov123_020cb050(int idx, int sz, int dir, int *out) {
    N *n;
    N *p;
    int off;
    int irq;
    int len;
    off   = idx * 0x1a0;
    n     = func_ov123_020c9410(*(int *) ((char *) data_ov123_020e4754 + off + 0x19c));
    len   = (sz + 3 & ~3) >> 2;
    n->ha = len;
    irq   = OS_DisableIrqMask(1);
    if (dir != 0) {
        p = (N *) ((char *) &data_ov123_020e4754[idx] + 0x180);
        if (p != (N *) ((char *) &data_ov123_020e4754[idx] + 0x18c)) {
            do {
                N *nx = p->next;
                int s = p->h8 + p->ha;
                if (s + len <= nx->h8) {
                    n->h8 = s;
                    func_ov123_020cad94(nx, n);
                    break;
                }
                p = nx;
            } while (p != (N *) ((char *) data_ov123_020e4754 + off + 0x18c));
        }
        if (p == (N *) ((char *) data_ov123_020e4754 + off + 0x18c)) {
            func_0200fddc();
        }
    } else {
        p = (N *) ((char *) &data_ov123_020e4754[idx] + 0x18c);
        if (p != (N *) ((char *) &data_ov123_020e4754[idx] + 0x180)) {
            do {
                N *pv = p->prev;
                int s = p->h8 - len;
                if (s >= pv->h8 + pv->ha) {
                    n->h8 = s;
                    func_ov123_020cad94(p, n);
                    break;
                }
                p = pv;
            } while (p != (N *) ((char *) data_ov123_020e4754 + off + 0x180));
        }
        if (p == (N *) ((char *) data_ov123_020e4754 + off + 0x180)) {
            func_0200fddc();
        }
    }
    *out = n->h8;
    OS_EnableIrqMask(irq);
    return n;
}

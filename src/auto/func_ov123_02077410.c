/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    char *name;
} E;
typedef struct {
    u8 p[0x814];
    E **v;
    s32 n;
} L;
extern int func_02024d8c(char *, char *);
E *func_ov123_02077410(L *l, char *s) {
    s32 i;
    E **v;
    s32 n = l->n;
    i     = 0;
    if (i < n) {
        v = l->v;
        do {
            if (func_02024d8c(v[i]->name, s) == 0) {
                return v[i];
            }
            i++;
        } while (i < n);
    }
    return 0;
}

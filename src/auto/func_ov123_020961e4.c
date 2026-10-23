/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    char *name;
    s32 val;
} E;
typedef struct {
    u8 pad[0x1a38];
    E e[0x20];
} T;
s32 func_02024d8c(char *, char *);
s32 func_ov123_020961e4(T *t, char *key) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (t->e[i].name == NULL) {
            break;
        }
        if (func_02024d8c(key, t->e[i].name) == 0) {
            return t->e[i].val;
        }
    }
    return 0;
}

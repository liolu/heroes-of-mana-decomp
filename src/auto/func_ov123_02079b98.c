/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 p0;
    u8 kind;
    u16 swp;
    int id;
} P;
typedef struct {
    u8 p[0xc];
    int **q;
} Q;
Q *func_ov123_02073aec(void *);
int func_ov123_0207acd0(void *);

int func_ov123_02079b98(void *a, int b0, P *c) {
    u16 b   = b0;
    c->kind = 2;
    c->swp  = (u16) (((b >> 8) & 0xff) | ((b << 8) & 0xff00));
    c->id   = func_ov123_0207acd0(a);
    if (c->id == -1) {
        Q *t = func_ov123_02073aec(a);
        if (t == 0) {
            return 0;
        }
        c->id = **t->q;
    }
    return 1;
}

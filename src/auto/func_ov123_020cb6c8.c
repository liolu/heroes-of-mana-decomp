/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Node Node;
struct Node {
    s32 p0;
    Node *next;
    void (*fn)(Node *, s32);
    s32 arg;
};

typedef struct Ent {
    u8 p0[4];
    s32 f4;
    u8 p1[8];
    Node *head;
    u8 p2[0x20];
    s32 count;
    u8 flag;
    u8 p3[7];
} Ent;

extern u8 data_ov123_020e478c[];
s32 func_ov123_020c9410(s32 v);
void func_ov123_020cb5a0(s32 idx, u8 *p);

void func_ov123_020cb6c8(s32 idx) {
    Ent *e;
    Node *n;
    s32 i;
    s32 r;

    e = *(Ent **) data_ov123_020e478c + idx;
    if (e->flag == 0) {
        return;
    }
    n = e->head;
    if ((u8 *) n != (u8 *) e + 0x20) {
        do {
            n->fn(n, n->arg);
            n = n->next;
        } while ((u8 *) n != (u8 *) (*(Ent **) data_ov123_020e478c + idx) + 0x20);
    }
    i = 0;
    if ((*(Ent **) data_ov123_020e478c + idx)->count > 0) {
        do {
            r = func_ov123_020c9410((*(Ent **) data_ov123_020e478c + idx)->f4);
            if (r == 0) {
                return;
            }
            func_ov123_020cb5a0(idx, (u8 *) r);
            i++;
        } while (i < (*(Ent **) data_ov123_020e478c + idx)->count);
    }
}

#include "m2c.h"
struct Node {
    virtual s8 *getName();
    u8 x[4];
    Node *next;
};
struct Key {
    s8 *key;
    s32 len;
};
struct Root {
    u8 p[4];
    Node *head;
};
extern "C" {
Root *func_ov004_020b8dc0(void);
Node *func_ov004_020b8e5c(Key *k);
}
Node *func_ov004_020b8e5c(Key *k) {
    Node *n;
    for (n = func_ov004_020b8dc0()->head; n != 0; n = n->next) {
        s8 *name = n->getName();
        s32 i    = 0;
        s32 len  = k->len;
        s32 r;
        for (; i < len; i++) {
            if (name[i] == 0) {
                r = 0;
                goto done;
            }
            if (k->key[i] != name[i]) {
                r = 0;
                goto done;
            }
        }
        r = name[len] == 0 ? 1 : 0;
    done:
        if (r != 0) {
            return n;
        }
    }
    return 0;
}

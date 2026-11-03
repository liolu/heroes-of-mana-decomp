/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Node {
    s32 a;
    s32 id;
    s32 b;
    struct Node *next;
} Node;

typedef struct Head {
    s32 a;
    Node *first;
} Head;

void *func_ov123_02067bac(void);

void *func_ov123_02068af8(s32 arg0) {
    u8 *p   = (u8 *) func_ov123_02067bac() + 0x2000;
    Head *h = *(Head **) (p + 0x270);
    Node *n = NULL;

    if (h != NULL) {
        if (*(u32 *) (p + 0x274) > 12) {
            n = h->first;
            while (n != NULL) {
                if (n->id == arg0) {
                    break;
                }
                n = n->next;
            }
        }
    }
    return n;
}

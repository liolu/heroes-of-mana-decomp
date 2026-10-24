/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct L L;
struct L {
    void *item;
    L *next;
};
L *func_0200ed38(s32, s32, s32);

void AddPutOrderSub(L **head, u8 *item) {
    L *n;
    L *h = *head;
    if (h == NULL) {
        n       = func_0200ed38(0, -1, 8);
        n->item = item;
        n->next = NULL;
        *head   = n;
    } else if (*(s32 *) ((u8 *) h->item + 0x78) > *(s32 *) (item + 0x78)) {
        n       = func_0200ed38(0, -1, 8);
        n->item = item;
        n->next = *head;
        *head   = n;
    } else {
        AddPutOrderSub(&h->next, item);
    }
}

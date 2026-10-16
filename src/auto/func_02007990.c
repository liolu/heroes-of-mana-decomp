/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct List {
    void *head;
    void *tail;
    u16 count;
    u16 offset;
} List;
typedef struct Link {
    void *prev;
    void *next;
} Link;
void SetFirstObject();
void func_02007990(List *list, void *obj) {
    Link *l;
    if (list->head == NULL) {
        SetFirstObject();
        return;
    }
    l                                                  = (Link *) ((u32) obj + list->offset);
    l->prev                                            = NULL;
    l->next                                            = list->head;
    ((Link *) ((u32) list->head + list->offset))->prev = obj;
    list->head                                         = obj;
    list->count++;
}

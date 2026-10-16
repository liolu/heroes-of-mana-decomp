/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Link {
    void *prev;
    void *next;
} Link;
typedef struct List {
    void *head;
    void *tail;
    u16 count;
    u16 offset;
} List;

void func_020078b4(List *list, void *obj) {
    Link *link = (Link *) ((u32) obj + list->offset);
    if (link->prev == NULL) {
        list->head = link->next;
    } else {
        ((Link *) ((u32) link->prev + list->offset))->next = link->next;
    }
    if (link->next == NULL) {
        list->tail = link->prev;
    } else {
        ((Link *) ((u32) link->next + list->offset))->prev = link->prev;
    }
    link->prev = NULL;
    link->next = NULL;
    list->count--;
}

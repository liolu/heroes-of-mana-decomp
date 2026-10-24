/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    u8 pad[0x7c];
    struct N *next;
} N;
void DeleteOneObj(void *);
void deleteComObjOne(N **p) {
    N *o = *p;
    if (o != 0) {
        if (o->next != 0) {
            deleteComObjOne((N **) ((u8 *) o + 0x7c));
        }
        DeleteOneObj(p);
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Nd {
    s32 obj;
    u32 id : 8;
    u32 rest : 24;
    struct Nd *next;
} Nd;
void DeleteNoAnimeObjOnlyOne(s32);
void OS_FreeToHeap(u32, s32, void *);
extern u8 *data_ov000_02051550;
void DeleteNameByNoAnimeObjByID(s32 a, s32 b, u8 id) {
    Nd **pp;
    Nd *n;
    Nd *next;
    pp = (Nd **) (data_ov000_02051550 + a * 0xd0 + 0x9c + b * 0x14);
    n  = *pp;
    while (n != 0) {
        if (id == n->id) {
            s32 obj = n->obj;
            next    = n->next;
            DeleteNoAnimeObjOnlyOne(obj);
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
            *pp = next;
        } else {
            pp = &n->next;
        }
        n = *pp;
    }
}

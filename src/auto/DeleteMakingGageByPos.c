/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u8 pad[0x58];
    void *a;
    void *b;
} E;
extern u8 *data_ov109_020ea340;
void deleteComObjBySt(void *, void *);

void DeleteMakingGageByPos(s32 n) {
    s32 off = n * 0x14;
    E *e    = (E *) (data_ov109_020ea340 + off);
    if (e->a != 0) {
        deleteComObjBySt(data_ov109_020ea340 + 0x3c, e->a);
        ((E *) (data_ov109_020ea340 + off))->a = 0;
        e                                      = (E *) (data_ov109_020ea340 + off);
        if (e->b != 0) {
            deleteComObjBySt(data_ov109_020ea340 + 0x3c, e->b);
            ((E *) (data_ov109_020ea340 + off))->b = 0;
        }
    }
}

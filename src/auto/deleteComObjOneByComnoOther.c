/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020aac64;
typedef struct O {
    u8 p0[0xc];
    u32 lo : 4;
    u32 flag : 1;
    u32 hi : 27;
    u8 p1[0x60];
    u16 no;
    u8 p2[10];
    struct O *next;
} O;
void DeleteOneObj(O **);

void deleteComObjOneByComnoOther(O **pp, int no, int flag) {
    if (*pp != 0) {
        if ((*pp)->next != 0) {
            deleteComObjOneByComnoOther(&(*pp)->next, no, flag);
        }
        if ((*pp)->no != no && flag == (*pp)->flag) {
            DeleteOneObj(pp);
        }
    }
}

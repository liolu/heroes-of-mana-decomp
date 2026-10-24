/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void DeleteAob2Data(void *);
void DeletePalDataFromVram(void *);
void OS_FreeToHeap(int, int, void *);
extern u8 data_ov003_020aad0c;

typedef struct O {
    u8 p0[0xc];
    u32 lo : 21;
    u32 nopal : 1;
    u32 hi : 10;
    u8 data[0x68];
    int *link;
    struct O *next;
} O;

void DeleteOneObj(O **pp) {
    O *o = *pp;
    *pp  = o->next;
    DeleteAob2Data(o->data);
    if (o->link != 0) {
        *o->link = 0;
    }
    if (o->nopal == 0) {
        DeletePalDataFromVram(o->data);
    }
    if (o != 0) {
        OS_FreeToHeap(0, -1, o);
    }
}

#include "m2c.h"

typedef struct {
    s32 a, b;
} P;
void func_ov004_020c6030(P *a, P *b) {
    *a = *(P *) ((u8 *) b + 0x24);
}

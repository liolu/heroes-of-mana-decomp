/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x1a4];
    s32 f1a4;
} Ms;
void deleteComObjBySt(void *, s32);
extern u8 *data_ov000_02051548;
extern Ms *data_ov000_02051550;
void DeleteMessageNextIcon(void) {
    u8 *a;
    a = data_ov000_02051548;
    if (a == NULL || data_ov000_02051550->f1a4 == 0) {
        return;
    }
    deleteComObjBySt(a + 0x78c, data_ov000_02051550->f1a4);
    data_ov000_02051550->f1a4 = 0;
}

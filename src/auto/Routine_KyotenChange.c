/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x258];
    s16 v;
} G;
extern G *data_ov000_02051548;
void ObjSet_allclear(void);
void ChangeGamenMode(void);
void StockCameraPositon(void);

void Routine_KyotenChange(s16 x) {
    ObjSet_allclear();
    data_ov000_02051548->v = x;
    ChangeGamenMode();
    StockCameraPositon();
}

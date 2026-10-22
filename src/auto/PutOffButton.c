/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *SearchComObjByComno(void *);                  /* extern */
extern M2C_UNK data_ov109_020ea2b8;
extern void *data_ov109_020ea340;

void PutOffButton(void) {
    void *temp_r0;

    if (M2C_FIELD(data_ov109_020ea340, u16 *, 0xC) != 0xFFFF) {
        temp_r0 = SearchComObjByComno(data_ov109_020ea340 + 0x3C);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s16 *, 0x2E) = 0;
            M2C_FIELD(temp_r0, s16 *, 0x2A) = (s16) M2C_FIELD(temp_r0, s16 *, 0x72);
            M2C_FIELD(temp_r0, u16 *, 0x36) = 0x8000U;
        }
        M2C_FIELD(data_ov109_020ea340, u16 *, 0xC) = 0xFFFFU;
    }
}

#include "m2c.h"
typedef struct {
    u16 done;
    u16 unk;
    u16 *buffer;
} RegA;
typedef struct {
    u8 pad[0x1c];
    void *cb;
    void *arg;
} PmSt;
extern RegA data_0203a6ac[5];
extern PmSt data_0203a66c;
s32 func_020158f4(void);
void PMi_SendPxiData(u32 d);
u32 func_02015c18(u32 reg, u16 *buffer, void *callback, void *arg) {
    if (!func_020158f4()) {
        return 1;
    }
    data_0203a66c.cb          = callback;
    data_0203a66c.arg         = arg;
    data_0203a6ac[reg].done   = 0;
    data_0203a6ac[reg].buffer = buffer;
    PMi_SendPxiData(0x03006500 | (reg & 0xff));
    return 0;
}

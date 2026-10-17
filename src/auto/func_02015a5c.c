#include "m2c.h"
typedef struct {
    u16 done;
    u16 pad[3];
} RegA;
typedef struct {
    u16 *buffer;
    u32 pad;
} RegB;
typedef struct {
    u8 pad[4];
    s32 f4;
    s32 f8;
    u8 pad2[0x18];
    u32 *f24;
} PmSt;
extern RegA data_0203a6ac[5];
extern RegB data_0203a6b0[5];
extern PmSt data_0203a66c;
void func_02015978(u32 result);
void func_02015a5c(u32 tag, u32 data, s32 err) {
    u16 command;
    u16 result;
    if (err) {
        func_02015978(2);
        return;
    }
    command = (u16) ((data & 0x7f00) >> 8);
    result  = data & 0xff;
    if (command >= 0x70 && command <= 0x74) {
        s32 index = command - 0x70;
        u16 *buf  = data_0203a6b0[index].buffer;
        u16 value = (u8) result;
        if (buf) {
            *buf = value;
        }
        data_0203a6ac[index].done = 1;
        result                    = 0;
    } else if (command == 0x60) {
        data_0203a66c.f4 = 1;
    } else if (command == 0x62) {
        data_0203a66c.f8 = 1;
    } else if (command == 0x67) {
        if (data_0203a66c.f24) {
            *data_0203a66c.f24 = result;
        }
        result = 0;
    }
    func_02015978(result);
}

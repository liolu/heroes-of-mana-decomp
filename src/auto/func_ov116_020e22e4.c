#include "m2c.h"
void VBlankIntrWaitInGame(void);
void func_ov116_020e22e0(void);
void func_ov116_020e21a4(void);
void func_ov116_020e2170(void);
void func_ov116_020e3b10(void);
void func_ov116_020e3ad4(void);
typedef struct {
    u32 lo : 16;
    u32 b16 : 1;
    u32 hi : 15;
} Fl;
typedef struct {
    u8 pad[0x9a8];
    Fl f;
} D;
extern D data_ov116_020e71a8;
void func_ov116_020e22e4(void) {
    VBlankIntrWaitInGame();
    func_ov116_020e22e0();
    *(u16 *) 0x4000304 = (data_ov116_020e71a8.f.b16 << 15) | (*(u16 *) 0x4000304 & ~0x8000);
    func_ov116_020e21a4();
    func_ov116_020e2170();
    func_ov116_020e3b10();
    func_ov116_020e3ad4();
}

#include "m2c.h"

s32 CalRnd(void);
void ObjSet(s32, s32, s32, s32);
void Routine_BGMchange(s32);

void func_ov092_020d04c0(void) {
    s32 r = CalRnd();
    switch (r % 5) {
        case 0:
            ObjSet(0xF25, 0x1C, 2, 0x10C);
            Routine_BGMchange(0x12);
            break;
        case 1:
            ObjSet(0xF25, 0x1C, 3, 0x10D);
            Routine_BGMchange(0x16);
            break;
        case 2:
            ObjSet(0xF25, 0x1C, 4, 0x10E);
            Routine_BGMchange(0x2B);
            break;
        case 3:
            ObjSet(0xF25, 0x1C, 5, 0x10F);
            Routine_BGMchange(0x13);
            break;
        case 4:
            ObjSet(0xF25, 0x1C, 6, 0x100);
            Routine_BGMchange(0x29);
            break;
    }
}

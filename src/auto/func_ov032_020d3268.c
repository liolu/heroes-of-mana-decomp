#include "m2c.h"

typedef struct {
    u8 pad[0x54];
    s32 flags;
    s32 v0;
    s32 v1;
    s32 v2;
} Gl;
extern Gl *data_ov000_02051548;
s32 GetUnitStatus(s32);
void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(s32);
void RecoverHpOrResourceByPer(s32, s32);
void ObjSet(s32, s32, s32, s32);

void func_ov032_020d3268(void) {
    if (GetUnitStatus(0xF04) == 0) {
        Routine_SetEvPosFadeIn();
        Routine_SetEvPos(5);
        RecoverHpOrResourceByPer(0xF04, 0x64);
        ObjSet(0xF04, 0x1C, 6, 0xC);
        data_ov000_02051548->flags ^= 8;
        switch (data_ov000_02051548->v0) {
            case 0:
                ObjSet(0xF04, 7, 0x10, 0xC);
                ObjSet(0xF04, 3, 4, 0);
                break;
            case 1:
                ObjSet(0xF04, 7, 0xB, 0x1A);
                ObjSet(0xF04, 3, 0, 0);
                break;
            case 2:
                ObjSet(0xF04, 7, 0x1E, 0xA);
                ObjSet(0xF04, 3, 4, 0);
                break;
            case 3:
                ObjSet(0xF04, 7, 0x1E, 0x1B);
                ObjSet(0xF04, 3, 6, 0);
                break;
            case 4:
                ObjSet(0xF04, 7, 7, 0xC);
                ObjSet(0xF04, 3, 4, 0);
                break;
            case 5:
                ObjSet(0xF04, 7, 0x15, 0x13);
                ObjSet(0xF04, 3, 0, 0);
                break;
        }
    } else if (GetUnitStatus(0xF05) == 0) {
        Routine_SetEvPosFadeIn();
        Routine_SetEvPos(6);
        RecoverHpOrResourceByPer(0xF05, 0x64);
        ObjSet(0xF05, 0x1C, 6, 0xC);
        data_ov000_02051548->flags ^= 0x10;
        switch (data_ov000_02051548->v1) {
            case 0:
                ObjSet(0xF05, 7, 0x10, 0xC);
                ObjSet(0xF05, 3, 4, 0);
                break;
            case 1:
                ObjSet(0xF05, 7, 0xB, 0x1A);
                ObjSet(0xF05, 3, 0, 0);
                break;
            case 2:
                ObjSet(0xF05, 7, 0x1E, 0xA);
                ObjSet(0xF05, 3, 4, 0);
                break;
            case 3:
                ObjSet(0xF05, 7, 0x1E, 0x1B);
                ObjSet(0xF05, 3, 6, 0);
                break;
            case 4:
                ObjSet(0xF05, 7, 7, 0xC);
                ObjSet(0xF05, 3, 4, 0);
                break;
            case 5:
                ObjSet(0xF05, 7, 0x15, 0x13);
                ObjSet(0xF05, 3, 0, 0);
                break;
        }
    } else if (GetUnitStatus(0xF06) == 0) {
        Routine_SetEvPosFadeIn();
        Routine_SetEvPos(7);
        RecoverHpOrResourceByPer(0xF06, 0x64);
        ObjSet(0xF06, 0x1C, 6, 0xC);
        data_ov000_02051548->flags ^= 0x20;
        switch (data_ov000_02051548->v2) {
            case 0:
                ObjSet(0xF06, 7, 0x10, 0xC);
                ObjSet(0xF06, 3, 4, 0);
                break;
            case 1:
                ObjSet(0xF06, 7, 0xB, 0x1A);
                ObjSet(0xF06, 3, 0, 0);
                break;
            case 2:
                ObjSet(0xF06, 7, 0x1E, 0xA);
                ObjSet(0xF06, 3, 4, 0);
                break;
            case 3:
                ObjSet(0xF06, 7, 0x1E, 0x1B);
                ObjSet(0xF06, 3, 6, 0);
                break;
            case 4:
                ObjSet(0xF06, 7, 7, 0xC);
                ObjSet(0xF06, 3, 4, 0);
                break;
            case 5:
                ObjSet(0xF06, 7, 0x15, 0x13);
                ObjSet(0xF06, 3, 0, 0);
                break;
        }
    }
}

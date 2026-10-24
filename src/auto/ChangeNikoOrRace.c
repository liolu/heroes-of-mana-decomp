/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x18];
    u32 p0 : 9;
    u32 kind : 8;
    u32 p1 : 15;
    u32 pad1;
    u32 q0 : 3;
    u32 pal : 4;
    u32 q1 : 25;
    u8 pad2[0xb0];
    u32 r0 : 18;
    u32 niko : 1;
    u32 r1 : 13;
    u8 pad3[0x60];
    s32 heap;
} G;
extern G *data_ov000_02051548;
void deleteComObjByComno(void *, s32);
void OS_FreeToHeap(s32, s32, s32);
void PutNikoCyanIcon(void);
void PutUnitRaceIcon(void);
void ResetObjPalMapX(u32, s32, s32);
void Ring_SoundEffect(s32);
void SetUpNikoChanIcon(void);
void DeleteUnitRaceIcon(void);
void ChangeNikoOrRace(void) {
    u32 k = data_ov000_02051548->kind;
    if (k != 1 && k != 2) {
    } else {
        data_ov000_02051548->niko = data_ov000_02051548->niko ^ 1;
        if (data_ov000_02051548->niko != 0) {
            deleteComObjByComno((u8 *) data_ov000_02051548 + 0x78c, 0xffb1);
            if (data_ov000_02051548->heap != 0) {
                OS_FreeToHeap(0, -1, data_ov000_02051548->heap);
                data_ov000_02051548->heap = 0;
            }
            if (data_ov000_02051548->pal != 0) {
                ResetObjPalMapX(data_ov000_02051548->pal, 1, 0);
                data_ov000_02051548->pal = 0;
            }
            PutUnitRaceIcon();
        } else {
            DeleteUnitRaceIcon();
            SetUpNikoChanIcon();
            PutNikoCyanIcon();
        }
        Ring_SoundEffect(0x66);
    }
}

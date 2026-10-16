/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Id {
    u32 a;
    u32 b;
} Id;
s32 func_02004ea0(u32, void *, u32, u32);
void NNS_SndArcGetFileID(Id *);
s32 FS_OpenFileFast(void *, Id);
u32 NNS_SndArcGetFileOffset(u32);

u32 func_02006678(u8 *obj, u32 arg) {
    Id id;
    if (func_02004ea0(arg, obj + 0xa8, 0x40, 0) != 0x40) {
        return 0;
    }
    NNS_SndArcGetFileID(&id);
    if (FS_OpenFileFast(obj + 0x5c, id) == 0) {
        return 0;
    }
    *(u32 *) (obj + 0xa4) = NNS_SndArcGetFileOffset(arg);
    return 1;
}

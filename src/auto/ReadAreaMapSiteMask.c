/* compiler: 1.2/sp3 -profile */
/* near start: 1 diffs with profile "1.2/sp3 -profile" */
#include "m2c.h"
typedef struct G {
    u8 pad[0x4F8];
    void *mask;
} G;
extern G *data_ov000_02051548;
void OS_FreeToHeap(s32, s32, void *);
void *ReadFileAndUncomp(s32, s32 *, s32 *);
void ReadAreaMapSiteMask(void) {
    s32 sp0;
    s32 st[3];
    void *z = 0;
    if (data_ov000_02051548->mask != NULL) {
        OS_FreeToHeap((s32) z, (s32) z - 1, data_ov000_02051548->mask);
        data_ov000_02051548->mask = NULL;
    }
    st[0]                     = 5;
    st[1]                     = 9;
    st[2]                     = 0;
    data_ov000_02051548->mask = ReadFileAndUncomp(3, st, &sp0);
}

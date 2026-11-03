/* near start: 2 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
typedef struct {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
} Col;
s32 func_0202d478(s32, s32);

void func_ov119_020f0d28(Col *a, Col *b, Col *dst, s32 w, s32 den) {
    u32 q;
    u32 q2;
    u32 q3;
    u16 t;
    dst->a = 0;
    if (w >= den) {
        *(u16 *) dst = (*(u16 *) dst & ~0x1F) | (((u32) (*(u16 *) b << 0x1B) >> 0x1B) & 0x1F);
        dst->g       = b->g;
        dst->b       = b->b;
        return;
    }
    q            = *(u16 *) a << 0x1B;
    *(u16 *) dst = (*(u16 *) dst & ~0x1F) |
                   ((u16) (func_0202d478(w * (((u32) (*(u16 *) b << 0x1B) >> 0x1B) - (q >> 0x1B)), den) + (q >> 0x1B)) & 0x1F);
    q2           = *(u16 *) a << 0x16;
    *(u16 *) dst = (*(u16 *) dst & ~0x3E0) |
                   ((u32) ((u16) (func_0202d478(w * (((u32) (*(u16 *) b << 0x16) >> 0x1B) - (q2 >> 0x1B)), den) + (q2 >> 0x1B))
                           << 0x1B) >>
                    0x16);
    q3           = *(u16 *) a << 0x11;
    *(u16 *) dst = (*(u16 *) dst & ~0x7C00) |
                   ((u32) ((u16) (func_0202d478(w * (((u32) (*(u16 *) b << 0x11) >> 0x1B) - (q3 >> 0x1B)), den) + (q3 >> 0x1B))
                           << 0x1B) >>
                    0x11);
}

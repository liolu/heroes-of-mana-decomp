/* compiler: 1.2/sp3 */
/* r30 a2: struct with real offsets (arr at 0xD8, idx at 0x100) from target asm */
typedef int s32;
typedef unsigned int u32;

typedef struct {
    u32 pad[54];
    u32 arr[10];
    s32 idx;
} Ring;

u32 func_ov123_0208c6d0(Ring *o, u32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (o->arr[i] == v) {
            return 1;
        }
    }
    o->idx         = (o->idx + 1) % 10;
    o->arr[o->idx] = v;
    return 0;
}

/* compiler: 2.0/sp1p5  */
/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_0200f320();
extern void func_0200f3b0();
// clang-format off
asm void func_0200f30c(void) {
    stmfd sp!, {r0, lr}
    bl func_0200f320
    bl func_0200f3b0
    ldmfd sp!, {r0, lr}
    bx lr
}
// clang-format on

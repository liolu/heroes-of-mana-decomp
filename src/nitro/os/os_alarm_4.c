/* compiler: 2.0/sp1p5  */

extern void OSi_ArrangeTimer();
// clang-format on

/* func_0200e4a0 from projets/rayman-rr/src/auto/func_0200e4a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void OSi_AlarmHandler(void) {
    stmfd sp!, {r0, lr}
    bl OSi_ArrangeTimer
    ldmfd sp!, {r0, lr}
    bx lr
}

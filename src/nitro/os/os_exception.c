/* compiler: 2.0/sp1p5  */

extern void OSi_SetExContext();
extern void OSi_DisplayExContext();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void OSi_GetAndDisplayContext(void) {
    stmfd sp!, {r0, lr}
    bl OSi_SetExContext
    bl OSi_DisplayExContext
    ldmfd sp!, {r0, lr}
    bx lr
}

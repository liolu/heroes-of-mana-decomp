/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020060c0 from projets/blue-dragon-awakened-shadow/src/donor/func_020060c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void GX_SendFifo48B(register const void *src, register volatile void *fifo) {
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    bx      lr
}
// clang-format on

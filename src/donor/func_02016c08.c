/* compiler: 2.0/sp1p5  */
/* func_0200f764 from projets/rayman-rr/src/auto/func_0200f764.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
extern s32 data_0203a6d8;
// clang-format off
asm void func_02016c08(void) {
    ldr ip, =data_0203a6d8
L_0200f768:
    ldr r0, [ip, #0x0]
    cmp r0, #0x1
    beq L_0200f768
    bx lr
}
// clang-format on

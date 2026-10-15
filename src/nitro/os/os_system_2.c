#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_DisableInterrupts_IrqAndFiq(void) {
    mrs r0, cpsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_RestoreInterrupts_IrqAndFiq(void) {
    mrs r1, cpsr
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}

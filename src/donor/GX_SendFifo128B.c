/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SendFifo128B from https://github.com/ntrtwl/NitroSDK libraries/gx/src/gxasm.c (license: none), reused by
 * tools/donor_match.py */
extern void GX_SendFifo128B(register const void *pSrc, register void *pDest);
// clang-format off
asm void GX_SendFifo128B (register const void *pSrc, register void *pDest)
{
#line 71
	stmfd sp !, {r4 - r8}
	ldmia r0 !, {r2 - r8, r12}
	stmia r1, {r2 - r8, r12}
	ldmia r0 !, {r2 - r8, r12}
	stmia r1, {r2 - r8, r12}
	ldmia r0 !, {r2 - r8, r12}
	stmia r1, {r2 - r8, r12}
	ldmia r0 !, {r2 - r8, r12}
	stmia r1, {r2 - r8, r12}
	ldmfd sp !, {r4 - r8}
	bx lr

}
// clang-format on

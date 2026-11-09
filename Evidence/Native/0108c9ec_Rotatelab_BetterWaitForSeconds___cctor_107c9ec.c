/* IL2CPP: Rotatelab.BetterWaitForSeconds$$.cctor
void Rotatelab_BetterWaitForSeconds___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.BetterWaitForSeconds$$.cctor
   void Rotatelab_BetterWaitForSeconds___cctor (const MethodInfo* method); */

void Rotatelab_BetterWaitForSeconds___cctor_107c9ec(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0108cadc + 0x108c9fc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cae0 + 0x108ca10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cae4 + 0x108ca1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cae8 + 0x108ca28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108caec + 0x108ca34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108caf0 + 0x108ca40));
    *pcVar5 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108caf4 + 0x108ca54));
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar3,4,**(undefined4 **)(_UNK_0108caf8 + 0x108ca6c));
  piVar6 = *(int **)(_UNK_0108cafc + 0x108ca84);
  **(undefined4 **)(*piVar6 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),uVar3);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108cb00 + 0x108caa4));
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar3,4,**(undefined4 **)(_UNK_0108cb04 + 0x108cabc));
  puVar4 = (undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


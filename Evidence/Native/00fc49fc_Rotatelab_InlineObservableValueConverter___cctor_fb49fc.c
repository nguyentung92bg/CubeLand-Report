/* IL2CPP: Rotatelab.InlineObservableValueConverter$$.cctor
void Rotatelab_InlineObservableValueConverter___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.InlineObservableValueConverter$$.cctor
   void Rotatelab_InlineObservableValueConverter___cctor (const MethodInfo* method); */

void Rotatelab_InlineObservableValueConverter___cctor_fb49fc(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_00fc4a94 + 0xfc4a0c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4a98 + 0xfc4a20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4a9c + 0xfc4a2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4aa0 + 0xfc4a38));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc4aa4 + 0xfc4a4c));
  System_Collections_Generic_Dictionary_object__object____ctor_206890c
            (uVar3,7,**(undefined4 **)(_UNK_00fc4aa8 + 0xfc4a64));
  piVar4 = *(int **)(_UNK_00fc4aac + 0xfc4a78);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


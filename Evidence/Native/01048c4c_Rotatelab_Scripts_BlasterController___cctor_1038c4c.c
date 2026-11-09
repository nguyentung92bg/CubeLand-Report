/* IL2CPP: Rotatelab.Scripts.BlasterController$$.cctor
void Rotatelab_Scripts_BlasterController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$.cctor
   void Rotatelab_Scripts_BlasterController___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___cctor_1038c4c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01048d24 + 0x1048c5c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048d28 + 0x1048c70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048d2c + 0x1048c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048d30 + 0x1048c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048d34 + 0x1048c94));
    *pcVar5 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01048d38 + 0x1048ca8));
  Rotatelab_GameAction_Int32Enum__int____ctor_23a45c4
            (uVar3,0,**(undefined4 **)(_UNK_01048d3c + 0x1048cc0));
  piVar6 = *(int **)(_UNK_01048d40 + 0x1048cd8);
  **(undefined4 **)(*piVar6 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),uVar3);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01048d44 + 0x1048cf8));
  Rotatelab_GameAction___ctor_fdbff0(uVar3,0,0);
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


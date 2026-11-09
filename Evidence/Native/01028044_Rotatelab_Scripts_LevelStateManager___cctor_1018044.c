/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$.cctor
void Rotatelab_Scripts_LevelStateManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$.cctor
   void Rotatelab_Scripts_LevelStateManager___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager___cctor_1018044(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010280e0 + 0x1028054);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010280e4 + 0x1028068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010280e8 + 0x1028074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010280ec + 0x1028080));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010280f0 + 0x1028094));
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar3,**(undefined4 **)(_UNK_010280f4 + 0x10280b0),1,0);
  piVar4 = *(int **)(_UNK_010280f8 + 0x10280c4);
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


/* IL2CPP: Rotatelab.Vibration.VibrationManager$$.cctor
void Rotatelab_Vibration_VibrationManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Vibration.VibrationManager$$.cctor
   void Rotatelab_Vibration_VibrationManager___cctor (const MethodInfo* method); */

void Rotatelab_Vibration_VibrationManager___cctor_107eccc(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0108ed64 + 0x108ecdc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ed68 + 0x108ecf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ed6c + 0x108ecfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ed70 + 0x108ed08));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108ed74 + 0x108ed1c));
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar3,**(undefined4 **)(_UNK_0108ed78 + 0x108ed34),1);
  piVar4 = *(int **)(_UNK_0108ed7c + 0x108ed48);
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


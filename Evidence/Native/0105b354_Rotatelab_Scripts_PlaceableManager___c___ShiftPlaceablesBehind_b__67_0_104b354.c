/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftPlaceablesBehind>b__67_0
void Rotatelab_Scripts_PlaceableManager___c___ShiftPlaceablesBehind_b__67_0 (Rotatelab_Scripts_PlaceableManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftPlaceablesBehind>b__67_0
   void Rotatelab_Scripts_PlaceableManager___c___ShiftPlaceablesBehind_b__67_0
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftPlaceablesBehind_b__67_0_104b354(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0105b3c4 + 0x105b364);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b3c8 + 0x105b378));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0105b3cc + 0x105b38c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}


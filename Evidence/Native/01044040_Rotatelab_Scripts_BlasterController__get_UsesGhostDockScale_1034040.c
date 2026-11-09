/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_UsesGhostDockScale
bool Rotatelab_Scripts_BlasterController__get_UsesGhostDockScale (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_UsesGhostDockScale
   bool Rotatelab_Scripts_BlasterController__get_UsesGhostDockScale
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_Scripts_BlasterController__get_UsesGhostDockScale_1034040(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010440f0 + 0x1044054);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010440f4 + 0x1044068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010440f8 + 0x1044074));
    *pcVar4 = '\x01';
  }
  uVar1 = 0;
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0xbc);
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_010440fc + 0x1044098) + 0xb8);
    if (uVar3 <= *(byte *)(iVar2 + 0xb8)) {
      if (*(int *)(*(int *)(iVar2 + 100) + uVar3 * 4 + -4) != **(int **)(_UNK_010440fc + 0x1044098))
      {
        return 0;
      }
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01044100 + 0x10440cc));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = 0;
      if (*(char *)(iVar2 + 100) != '\0') {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


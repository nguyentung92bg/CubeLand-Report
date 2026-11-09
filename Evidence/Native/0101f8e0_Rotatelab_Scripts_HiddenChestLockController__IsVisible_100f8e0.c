/* IL2CPP: Rotatelab.Scripts.HiddenChestLockController$$IsVisible
bool Rotatelab_Scripts_HiddenChestLockController__IsVisible (Rotatelab_Scripts_HiddenChestLockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestLockController$$IsVisible
   bool Rotatelab_Scripts_HiddenChestLockController__IsVisible
   (Rotatelab_Scripts_HiddenChestLockController_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_HiddenChestLockController__IsVisible_100f8e0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar4 = (char *)(_UNK_0101f9d0 + 0x101f8f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f9d4 + 0x101f90c));
    *pcVar4 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101f9d8 + 0x101f920));
  iVar6 = 0;
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (iVar7 <= (int)uVar3) break;
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = iVar5 + iVar6;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = Rotatelab_Grid_GridManager__GetGridCell_1106d80
                      (iVar2,*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),
                       *(undefined4 *)(iVar5 + 0x18),0);
    iVar6 = iVar6 + 0xc;
    uVar1 = uVar3 + 1;
  } while (*(char *)(iVar5 + 8) != '\0');
  return iVar7 <= (int)uVar3;
}


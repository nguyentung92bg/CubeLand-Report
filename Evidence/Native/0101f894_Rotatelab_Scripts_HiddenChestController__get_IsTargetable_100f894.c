/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$get_IsTargetable
bool Rotatelab_Scripts_HiddenChestController__get_IsTargetable (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$get_IsTargetable
   bool Rotatelab_Scripts_HiddenChestController__get_IsTargetable
   (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_HiddenChestController__get_IsTargetable_100f894(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(int *)(param_1 + 0x50) < 1) ||
     (iVar2 = Rotatelab_Scripts_BaseTargetableController__get_IsTargetable_ff588c(param_1,0),
     iVar2 == 0)) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0101f9d0 + 0x101f8f8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f9d4 + 0x101f90c));
    *pcVar5 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101f9d8 + 0x101f920));
  iVar7 = 0;
  uVar1 = 0;
  do {
    uVar4 = uVar1;
    if (*(int *)(iVar2 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 0xc);
    if (iVar8 <= (int)uVar4) break;
    iVar6 = *(int *)(iVar2 + 0x1c);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = iVar6 + iVar7;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = Rotatelab_Grid_GridManager__GetGridCell_1106d80
                      (iVar3,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14),
                       *(undefined4 *)(iVar6 + 0x18),0,unaff_r4);
    iVar7 = iVar7 + 0xc;
    uVar1 = uVar4 + 1;
  } while (*(char *)(iVar6 + 8) != '\0');
  return iVar8 <= (int)uVar4;
}


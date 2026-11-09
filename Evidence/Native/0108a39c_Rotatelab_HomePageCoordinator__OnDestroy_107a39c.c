/* IL2CPP: Rotatelab.HomePageCoordinator$$OnDestroy
void Rotatelab_HomePageCoordinator__OnDestroy (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$OnDestroy
   void Rotatelab_HomePageCoordinator__OnDestroy (Rotatelab_HomePageCoordinator_o* __this, const
   MethodInfo* method); */

void Rotatelab_HomePageCoordinator__OnDestroy_107a39c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  
  pcVar5 = (char *)(_UNK_0108a494 + 0x108a3b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a498 + 0x108a3c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a49c + 0x108a3d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a4a0 + 0x108a3dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a4a4 + 0x108a3e8));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0108a4a8 + 0x108a3fc);
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (*(int *)(**(int **)(_UNK_0108a4ac + 0x108a410) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108a4b0 + 0x108a450));
  System_Action_Int32Enum____ctor_1f10670
            (uVar1,param_1,**(undefined4 **)(_UNK_0108a4b4 + 0x108a46c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_011372e8 + 0x113725c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011372ec + 0x1137270),uVar1,0);
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_011372f0 + 0x1137288);
  iVar3 = *(int *)(iVar2 + 0x38);
  do {
    iVar8 = 0;
    iVar4 = System_Delegate__Remove_2bbcc8c(iVar3,uVar1,0);
    if (iVar4 != 0) {
      uVar6 = *puVar7;
      iVar8 = thunk_FUN_00f00bc8(iVar4,uVar6);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar4,uVar6);
      }
    }
    iVar4 = FUN_00efd180((int *)(iVar2 + 0x38),iVar8,iVar3);
    bVar9 = iVar4 != iVar3;
    iVar3 = iVar4;
  } while (bVar9);
  return;
}


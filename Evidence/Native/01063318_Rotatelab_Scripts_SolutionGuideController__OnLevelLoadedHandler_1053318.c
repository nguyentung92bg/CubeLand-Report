/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$OnLevelLoadedHandler
void Rotatelab_Scripts_SolutionGuideController__OnLevelLoadedHandler (Rotatelab_Scripts_SolutionGuideController_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$OnLevelLoadedHandler
   void Rotatelab_Scripts_SolutionGuideController__OnLevelLoadedHandler
   (Rotatelab_Scripts_SolutionGuideController_o* __this, Rotatelab_SoLevelData_o* levelData, const
   MethodInfo* method); */

void Rotatelab_Scripts_SolutionGuideController__OnLevelLoadedHandler_1053318
               (int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  pcVar7 = (char *)(_UNK_010634e8 + 0x1063330);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010634ec + 0x1063344));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010634f0 + 0x1063350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010634f4 + 0x106335c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010634f8 + 0x1063368));
    *pcVar7 = '\x01';
  }
  puVar9 = *(undefined4 **)(_UNK_010634fc + 0x106337c);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  puVar10 = *(undefined4 **)(_UNK_01063500 + 0x1063390);
  uVar4 = thunk_FUN_00f00cdc(*puVar10);
  puVar11 = *(undefined4 **)(_UNK_01063504 + 0x10633ac);
  System_Action_object____ctor_1f11414(uVar4,param_1,*puVar11,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__remove_OnPlaceableLeftQueue_1040e3c(iVar3,uVar4);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterHighlight__Clear_ff6414(*(int *)(param_1 + 0x28),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0x8c);
  if (iVar3 == 0) {
    iVar5 = **(int **)(_UNK_01063508 + 0x1063408);
    iVar3 = *(int *)(iVar5 + 0x1c);
    if (iVar3 == 0) {
      FUN_00efd7c4(iVar5);
      iVar3 = *(int *)(iVar5 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
  }
  piVar6 = (int *)(param_1 + 0x20);
  *piVar6 = iVar3;
  thunk_FUN_00ec5080(piVar6);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar6 + 0xc) == 0) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  uVar4 = thunk_FUN_00f00cdc(*puVar10);
  System_Action_object____ctor_1f11414(uVar4,param_1,*puVar11,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__add_OnPlaceableLeftQueue_1040d8c(iVar3,uVar4);
  pcVar7 = (char *)(_UNK_0106330c + 0x106320c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063310 + 0x1063220));
    *pcVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x24) < *(int *)(*(int *)(param_1 + 0x20) + 0xc)) {
      iVar5 = *(int *)(param_1 + 0x28);
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01063314 + 0x106325c));
      iVar8 = *(int *)(param_1 + 0x20);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar8 + 0xc) <= *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = Rotatelab_Scripts_PlaceableManager__GetFrontBlaster_104ab24
                        (iVar3,*(undefined4 *)(iVar8 + *(uint *)(param_1 + 0x24) * 4 + 0x10));
      if (iVar5 != 0) {
        Rotatelab_Scripts_BlasterHighlight__ShowOn_ff62f8(iVar5,uVar4,0,0,0,0,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_010064e0 + 0x100642c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010064e4 + 0x1006440),0);
    *pcVar7 = '\x01';
  }
  puVar9 = (undefined4 *)(iVar3 + 0x1c);
  uVar4 = *puVar9;
  if (*(int *)(**(int **)(_UNK_010064e8 + 0x1006458) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar5 != 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterController__SetBulletCountHighlighted_10353e4
            (*(int *)(iVar3 + 0x1c),0,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
             *(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),
             *(undefined4 *)(iVar3 + 0x18),0);
  *puVar9 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar9 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar9 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


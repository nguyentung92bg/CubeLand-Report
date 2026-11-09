/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$IsLevelStuck
bool Rotatelab_Scripts_LevelStateManager__IsLevelStuck (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$IsLevelStuck
   bool Rotatelab_Scripts_LevelStateManager__IsLevelStuck (Rotatelab_Scripts_LevelStateManager_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_LevelStateManager__IsLevelStuck_101738c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_01027718 + 0x10273a4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102771c + 0x10273b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027720 + 0x10273c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027724 + 0x10273d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027728 + 0x10273dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102772c + 0x10273e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027730 + 0x10273f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027734 + 0x1027400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027738 + 0x102740c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102773c + 0x1027418));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027740 + 0x1027424));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027744 + 0x1027430));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027748 + 0x102743c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102774c + 0x1027448));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(int *)(*(int *)(param_1 + 0x20) + 0xc) < 1) &&
     (iVar1 = Rotatelab_Scripts_LevelStateManager__CanCheckLevelState_1017774(param_1), iVar1 != 0))
  {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01027750 + 0x102749c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      puVar8 = *(undefined4 **)(_UNK_01027754 + 0x10274d4);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) != 0) {
        puVar7 = *(undefined4 **)(_UNK_01027758 + 0x1027510);
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Rotatelab_Scripts_DockManager__get_ShootingBlasterCount_10044e4(iVar1);
        if (iVar1 < 1) {
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar9 = *(int **)(_UNK_0102775c + 0x1027558);
          iVar4 = *(int *)(iVar1 + 0x50);
          iVar1 = *piVar9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar9;
          }
          puVar2 = *(undefined4 **)(iVar1 + 0x5c);
          iVar5 = puVar2[1];
          if (iVar5 == 0) {
            if (*(int *)(iVar1 + 0x74) == 0) {
              FUN_00ec3934();
              puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
            }
            uVar6 = *puVar2;
            iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01027760 + 0x10275a4));
            System_Predicate_object____ctor_1876380
                      (iVar5,uVar6,**(undefined4 **)(_UNK_01027764 + 0x10275c4),0);
            piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
            *piVar9 = iVar5;
            thunk_FUN_00ec5080(piVar9,iVar5);
          }
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = System_Collections_Generic_List_object___Exists_267e190
                            (iVar4,iVar5,**(undefined4 **)(_UNK_01027768 + 0x10275fc));
          if (iVar1 == 0) {
            iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(iVar1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_List_object___GetEnumerator_267e7a4
                      (&uStack_38,*(int *)(iVar1 + 0xb4),
                       **(undefined4 **)(_UNK_0102776c + 0x1027644));
            uStack_44 = 0;
            puVar8 = *(undefined4 **)(_UNK_01027770 + 0x1027668);
            puStack_40 = &uStack_38;
            do {
              do {
                iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                  (&uStack_38,*puVar8);
                if (iVar1 == 0) {
                  func_0x00b882f8(&uStack_44);
                  return 1;
                }
                iVar1 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
                                  (uStack_2c,&uStack_3c,0);
              } while (iVar1 == 0);
              iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar1 = Rotatelab_Scripts_DockManager__CanPlaceBlaster_100597c(iVar1,uStack_3c);
            } while (iVar1 == 0);
            func_0x00b882f8(&uStack_44);
          }
        }
      }
    }
  }
  return 0;
}


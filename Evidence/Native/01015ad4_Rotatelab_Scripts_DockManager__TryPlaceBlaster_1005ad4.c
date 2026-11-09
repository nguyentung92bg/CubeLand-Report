/* IL2CPP: Rotatelab.Scripts.DockManager$$TryPlaceBlaster
bool Rotatelab_Scripts_DockManager__TryPlaceBlaster (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* targetBlaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$TryPlaceBlaster
   bool Rotatelab_Scripts_DockManager__TryPlaceBlaster (Rotatelab_Scripts_DockManager_o* __this,
   Rotatelab_Scripts_BlasterController_o* targetBlaster, const MethodInfo* method); */

int Rotatelab_Scripts_DockManager__TryPlaceBlaster_1005ad4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar9 = (char *)(_UNK_01016340 + 0x1015af0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016344 + 0x1015b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016348 + 0x1015b10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101634c + 0x1015b1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016350 + 0x1015b28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016354 + 0x1015b34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016358 + 0x1015b40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101635c + 0x1015b4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016360 + 0x1015b58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016364 + 0x1015b64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016368 + 0x1015b70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101636c + 0x1015b7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016370 + 0x1015b88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016374 + 0x1015b94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016378 + 0x1015ba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101637c + 0x1015bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016380 + 0x1015bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016384 + 0x1015bc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016388 + 0x1015bd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101638c + 0x1015bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016390 + 0x1015be8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016394 + 0x1015bf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016398 + 0x1015c00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101639c + 0x1015c0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010163a0 + 0x1015c18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010163a4 + 0x1015c24));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010163a8 + 0x1015c40));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  piVar15 = (int *)(iVar1 + 0xc);
  *piVar15 = param_2;
  thunk_FUN_00ec5080(piVar15,param_2);
  iVar2 = Rotatelab_Scripts_DockManager__CanPlaceBlaster_100597c(param_1,*piVar15);
  iVar6 = *piVar15;
  if (iVar2 == 0) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iVar6 + 0xbc);
    if (*(int *)(**(int **)(_UNK_010163ac + 0x1015d78) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
    if (iVar1 != 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010163b0 + 0x1015db0));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar1);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_010163b4 + 0x1015de0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Vibration_VibrationManager__VibrateWarning_107e730(0);
        if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar14 = *(int **)(_UNK_010163b8 + 0x1015e14);
        iVar6 = *(int *)(*piVar15 + 0x120);
        iVar1 = *piVar14;
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = *piVar14;
        }
        puVar11 = *(undefined4 **)(iVar1 + 0x5c);
        iVar3 = puVar11[5];
        if (iVar3 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            puVar11 = *(undefined4 **)(*piVar14 + 0x5c);
          }
          uVar4 = *puVar11;
          iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010163bc + 0x1015e60));
          System_Action_object____ctor_1f11414
                    (iVar3,uVar4,**(undefined4 **)(_UNK_010163c0 + 0x1015e80),0);
          piVar15 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x14);
          *piVar15 = iVar3;
          thunk_FUN_00ec5080(piVar15,iVar3);
        }
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___ForEach_267e6f0
                  (iVar6,iVar3,**(undefined4 **)(_UNK_010163c4 + 0x1015eb8));
      }
    }
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_48,*(int *)(iVar6 + 0x120),**(undefined4 **)(_UNK_010163c8 + 0x1015cd4));
    uStack_38 = uStack_48;
    uStack_34 = puStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    uStack_48 = 0;
    puVar12 = *(undefined4 **)(_UNK_010163cc + 0x1015cfc);
    puVar11 = *(undefined4 **)(_UNK_010163d0 + 0x1015d04);
    puStack_44 = &uStack_38;
    while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_38,*puVar12), iVar6 = iStack_2c, iVar3 != 0) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(iVar6,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_PlaceableManager__CompleteCurrentShiftPlaceablesAnimationImmediately_10441a0
                (iVar3,uVar4,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_38,**(undefined4 **)(_UNK_010163d4 + 0x1015ed0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(*piVar15,0);
    if (iVar6 != 0) {
      iVar6 = 4;
      piVar14 = *(int **)(_UNK_010163dc + 0x1015f20);
      while( true ) {
        if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar13 = iVar6 - 4;
        if (*(int *)(*(int *)(param_1 + 0x44) + 0xc) + -1 <= (int)uVar13) break;
        iVar3 = *(int *)(param_1 + 0x44);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar7 = *(int **)(iVar3 + iVar6 * 4);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = (**(code **)(*piVar7 + 0xe0))(piVar7,*(undefined4 *)(*piVar7 + 0xe4));
        if (iVar3 != 0) {
          iVar3 = *piVar14;
          uVar4 = *(undefined4 *)(param_1 + 0x44);
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar14;
          }
          puVar11 = *(undefined4 **)(iVar3 + 0x5c);
          iVar8 = puVar11[6];
          if (iVar8 == 0) {
            if (*(int *)(iVar3 + 0x74) == 0) {
              FUN_00ec3934();
              puVar11 = *(undefined4 **)(*piVar14 + 0x5c);
            }
            uVar10 = *puVar11;
            iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010163e0 + 0x1015fdc));
            System_Predicate_object____ctor_1876380
                      (iVar8,uVar10,**(undefined4 **)(_UNK_010163e4 + 0x1015ffc),0);
            piVar7 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x18);
            *piVar7 = iVar8;
            thunk_FUN_00ec5080(piVar7,iVar8);
          }
          uVar5 = System_Array__FindIndex_object__163c7ac
                            (uVar4,iVar6 + -3,iVar8,**(undefined4 **)(_UNK_010163e8 + 0x101602c));
          if ((int)uVar5 < 0) break;
          iVar3 = *(int *)(param_1 + 0x44);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar3 = *(int *)(iVar3 + uVar5 * 4 + 0x10);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar7 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                                    (iVar3,**(undefined4 **)(_UNK_010163ec + 0x1016080));
          iVar3 = *(int *)(param_1 + 0x44);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar7 + 0x130))
                    (piVar7,*(undefined4 *)(iVar3 + iVar6 * 4),*(undefined4 *)(*piVar7 + 0x134));
        }
        iVar6 = iVar6 + 1;
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar14 = *(int **)(_UNK_010163f0 + 0x101610c);
    iVar3 = *(int *)(*piVar15 + 0x120);
    iVar6 = *piVar14;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar14;
    }
    puVar11 = *(undefined4 **)(iVar6 + 0x5c);
    iVar8 = puVar11[7];
    if (iVar8 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        puVar11 = *(undefined4 **)(*piVar14 + 0x5c);
      }
      uVar4 = *puVar11;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010163f4 + 0x1016158));
      System_Comparison_object____ctor_1f2562c
                (iVar8,uVar4,**(undefined4 **)(_UNK_010163f8 + 0x1016178),0);
      piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x1c);
      *piVar14 = iVar8;
      thunk_FUN_00ec5080(piVar14,iVar8);
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___Sort_267f704
              (iVar3,iVar8,**(undefined4 **)(_UNK_010163fc + 0x10161b0));
    iVar6 = Rotatelab_Boosters_MagnetBoosterController__get_IsActive_1137284(0);
    if (iVar6 == 0) {
      Rotatelab_Scripts_DockManager___c__DisplayClass52_0___TryPlaceBlaster_g__PlaceBlasters_2_10064c8
                (iVar1);
    }
    else {
      pcVar9 = (char *)(_UNK_01016400 + 0x10161d8);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01016404 + 0x10161ec));
        *pcVar9 = '\x01';
      }
      piVar14 = *(int **)(_UNK_0101640c + 0x1016210);
      iVar6 = *piVar14;
      iVar3 = *(int *)(iVar6 + 0x74);
      **(undefined1 **)(**(int **)(_UNK_01016408 + 0x1016204) + 0x5c) = 1;
      if (iVar3 == 0) {
        FUN_00ec3934();
        iVar6 = *piVar14;
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x24);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_object___Raise_23a2f44
                (iVar6,*piVar15,**(undefined4 **)(_UNK_01016410 + 0x1016254));
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01016414 + 0x1016268));
      System_Action___ctor_2b10bac(uVar4,iVar1,**(undefined4 **)(_UNK_01016418 + 0x1016288),0);
      if (*(int *)(**(int **)(_UNK_0101641c + 0x101629c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2ce9f2c(&uStack_48,0x3f19999a,uVar4,0,0,0);
    }
  }
  return iVar2;
}


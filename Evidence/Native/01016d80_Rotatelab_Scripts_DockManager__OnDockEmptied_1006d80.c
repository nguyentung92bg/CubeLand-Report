/* IL2CPP: Rotatelab.Scripts.DockManager$$OnDockEmptied
void Rotatelab_Scripts_DockManager__OnDockEmptied (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BaseDockController_o* dock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnDockEmptied
   void Rotatelab_Scripts_DockManager__OnDockEmptied (Rotatelab_Scripts_DockManager_o* __this,
   Rotatelab_Scripts_BaseDockController_o* dock, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnDockEmptied_1006d80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 in_stack_ffffffc8;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_ffffffd0;
  undefined4 uVar16;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01017170 + 0x1016d98);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017174 + 0x1016dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017178 + 0x1016db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101717c + 0x1016dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017180 + 0x1016dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017184 + 0x1016ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017188 + 0x1016de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101718c + 0x1016df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017190 + 0x1016e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017194 + 0x1016e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01017198 + 0x1016e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101719c + 0x1016e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010171a0 + 0x1016e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010171a4 + 0x1016e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010171a8 + 0x1016e48));
    *pcVar6 = '\x01';
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_010171ac + 0x1016e64) + 0xb8);
    if ((*(byte *)(iVar1 + 0xb8) < uVar5) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_010171ac + 0x1016e64)))
    {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_010171cc + 0x1016e98) + 0xb8);
      if ((uVar5 <= *(byte *)(iVar1 + 0xb8)) &&
         (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_010171cc + 0x1016e98))
         ) {
        iVar1 = System_Array__IndexOf_object__163d440
                          (*(undefined4 *)(param_1 + 0x48),param_2,
                           **(undefined4 **)(_UNK_010171d0 + 0x1016ec8));
        piVar10 = *(int **)(_UNK_010171d4 + 0x1016ee0);
        uVar9 = *(undefined4 *)(param_1 + 0x48);
        iVar2 = *piVar10;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar10;
        }
        puVar4 = *(undefined4 **)(iVar2 + 0x5c);
        iVar7 = puVar4[0xc];
        if (iVar7 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
          }
          uVar8 = *puVar4;
          iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010171d8 + 0x1016f2c));
          System_Predicate_object____ctor_1876380
                    (iVar7,uVar8,**(undefined4 **)(_UNK_010171dc + 0x1016f4c),0);
          piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x30);
          *piVar10 = iVar7;
          thunk_FUN_00ec5080(piVar10,iVar7);
        }
        uVar5 = System_Array__FindIndex_object__163c7ac
                          (uVar9,iVar1 + 1,iVar7,**(undefined4 **)(_UNK_010171e0 + 0x1016f7c));
        if (-1 < (int)uVar5) {
          iVar1 = *(int *)(param_1 + 0x48);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar1 = *(int *)(iVar1 + uVar5 * 4 + 0x10);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar10 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                                     (iVar1,**(undefined4 **)(_UNK_010171e4 + 0x1016fd0));
          if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar10 + 0x130))(piVar10,param_2,*(undefined4 *)(*piVar10 + 0x134));
        }
        pcVar6 = (char *)(_UNK_0101745c + 0x1017208);
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01017460 + 0x101721c));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01017464 + 0x1017228));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01017468 + 0x1017234));
          *pcVar6 = '\x01';
        }
        if (*(char *)(param_1 + 100) != '\0') {
          uVar9 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0
                            (*(undefined4 *)(param_1 + 0x48),0);
          iVar1 = 0x10;
          uVar5 = 0;
          while( true ) {
            if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= (int)uVar5) break;
            iVar2 = *(int *)(param_1 + 0x48);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            iVar7 = *(int *)(param_1 + 0x60);
            iVar2 = *(int *)(iVar2 + uVar5 * 4 + 0x10);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(**(int **)(_UNK_0101746c + 0x10172c8) + 0x74) == 0) {
              FUN_00ec3934();
            }
            if (*(uint *)(iVar7 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            PrimeTween_Tween__Stop_2ced694(iVar7 + iVar1,0);
            iVar7 = *(int *)(param_1 + 0x60);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar8 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
            Rotatelab_Scripts_DockManager__GetGhostDockLocalPosition_100747c
                      (&piStack_48,param_1,uVar5,uVar9);
            PrimeTween_Tween__LocalPosition_2ce550c
                      (&piStack_48,uVar8,piStack_48,uStack_44,uStack_40,0x3e800000,0,0,0,0,0,1,0,0,0
                       ,0,0);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar7 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            puVar3 = (undefined8 *)(iVar7 + iVar1);
            *puVar3 = CONCAT44(uStack_44,piStack_48);
            puVar3[1] = CONCAT44(uStack_3c,uStack_40);
            thunk_FUN_00ec5080(puVar3 + 1,0);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar8 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                              (iVar2,**(undefined4 **)(_UNK_01017470 + 0x10173c4));
            if (*(int *)(**(int **)(_UNK_01017474 + 0x10173dc) + 0x74) == 0) {
              FUN_00ec3934();
            }
            iVar7 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
            if (iVar7 != 0) {
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                                (iVar2,**(undefined4 **)(_UNK_01017478 + 0x101741c));
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              Rotatelab_Scripts_BlasterController__RefreshGhostDockScale_1034104(iVar2,0);
            }
            iVar1 = iVar1 + 0x10;
            uVar5 = uVar5 + 1;
          }
        }
        return;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = System_Collections_Generic_List_object___IndexOf_267e86c
                        (iVar1,param_2,**(undefined4 **)(_UNK_010171b0 + 0x101702c));
      piVar10 = *(int **)(_UNK_010171b4 + 0x1017044);
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar10;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar7 = puVar4[0xb];
      if (iVar7 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar8 = *puVar4;
        iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010171b8 + 0x101708c));
        System_Predicate_object____ctor_1876380
                  (iVar7,uVar8,**(undefined4 **)(_UNK_010171bc + 0x10170ac),0);
        piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x2c);
        *piVar10 = iVar7;
        thunk_FUN_00ec5080(piVar10,iVar7);
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_Collections_Generic_List_object___FindLastIndex_267e5e8
                        (iVar1,uVar9,iVar7,**(undefined4 **)(_UNK_010171c0 + 0x10170e8));
      if (-1 < iVar1) {
        if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x54),iVar1,
                           **(undefined4 **)(_UNK_010171c4 + 0x101711c));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                          (iVar1,**(undefined4 **)(_UNK_010171c8 + 0x1017140));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar6 = (char *)(_UNK_0105f350 + 0x105f09c);
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0105f354 + 0x105f0b0),param_2,0);
          FUN_00ec37c0(*(undefined4 *)(_UNK_0105f358 + 0x105f0bc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0105f35c + 0x105f0c8));
          *pcVar6 = '\x01';
        }
        piVar10 = (int *)(iVar1 + 0x44);
        iVar2 = *piVar10;
        if (*(int *)(**(int **)(_UNK_0105f360 + 0x105f0e0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
        if (iVar2 != 0) {
          if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_BaseDockController__Empty_100b530(*piVar10,iVar1,0);
        }
        *piVar10 = (int)param_2;
        thunk_FUN_00ec5080(piVar10,param_2);
        if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_BaseDockController_object___Fill_1b27714
                  (*piVar10,iVar1,**(undefined4 **)(_UNK_0105f364 + 0x105f15c));
        iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
        if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = UnityEngine_Component__get_transform_35fe190(param_2,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__SetParent_3615994(iVar2,uVar9,1,0);
        Rotatelab_Scripts_UtilityPlaceableController__StopRotationTween_104d840(iVar1);
        if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_localPosition_3613b6c(&stack0xffffffc8,param_2[4],0);
        uVar15 = (undefined4)in_stack_ffffffd0;
        uVar8 = (undefined4)in_stack_ffffffc8;
        uVar14 = (undefined4)((ulonglong)in_stack_ffffffc8 >> 0x20);
        Rotatelab_Scripts_BasePlaceableController__LocalMove_10306f0
                  (&stack0xffffffc8,iVar1,uVar8,uVar14,uVar15,0x3ec00000,0,0,0,0);
        uVar9 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
        piStack_48 = param_2;
        if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_localRotation_3614f58(&stack0xffffffc8,param_2[4],0);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffd0 >> 0x20);
        uVar11 = uVar15;
        uVar12 = uVar14;
        uVar13 = uVar8;
        PrimeTween_Easing__op_Implicit_2ce2e54(&stack0xffffffc8,9,0);
        if (*(int *)(**(int **)(_UNK_0105f368 + 0x105f288) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__LocalRotation_2ce631c
                  (&stack0xffffffc8,uVar9,uVar13,uVar12,uVar11,uVar16,0x3e800000,uVar8,uVar14,uVar15
                   ,uVar16,uStack_28,1,0,0,0,0,0);
        *(undefined8 *)(iVar1 + 0x48) = in_stack_ffffffc8;
        *(undefined8 *)(iVar1 + 0x50) = in_stack_ffffffd0;
        thunk_FUN_00ec5080(iVar1 + 0x50,0);
        if (piStack_48[4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_localScale_36154c0(&uStack_44,piStack_48[4],0);
        Rotatelab_Scripts_UtilityPlaceableController__Scale_104e45c
                  (iVar1,uStack_44,uStack_40,uStack_3c);
        Rotatelab_Scripts_UtilityPlaceableController__SyncIdleAnimationWithDockedSameType_104f36c
                  (iVar1);
        return;
      }
    }
  }
  return;
}


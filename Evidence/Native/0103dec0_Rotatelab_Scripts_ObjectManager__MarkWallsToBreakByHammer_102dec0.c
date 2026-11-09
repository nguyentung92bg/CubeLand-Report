/* IL2CPP: Rotatelab.Scripts.ObjectManager$$MarkWallsToBreakByHammer
System_Collections_Generic_List_WallController__o* Rotatelab_Scripts_ObjectManager__MarkWallsToBreakByHammer (Rotatelab_Scripts_ObjectManager_o* __this, Rotatelab_Scripts_WallController_o* targetWall, int32_t wallCountToDestroy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$MarkWallsToBreakByHammer
   System_Collections_Generic_List_WallController__o*
   Rotatelab_Scripts_ObjectManager__MarkWallsToBreakByHammer (Rotatelab_Scripts_ObjectManager_o*
   __this, Rotatelab_Scripts_WallController_o* targetWall, int32_t wallCountToDestroy, const
   MethodInfo* method); */

int Rotatelab_Scripts_ObjectManager__MarkWallsToBreakByHammer_102dec0
              (int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0103e2b0 + 0x103dee0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2b4 + 0x103def4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2b8 + 0x103df00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2bc + 0x103df0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2c0 + 0x103df18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2c4 + 0x103df24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2c8 + 0x103df30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2cc + 0x103df3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2d0 + 0x103df48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2d4 + 0x103df54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2d8 + 0x103df60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e2dc + 0x103df6c));
    *pcVar5 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103e2e0 + 0x103df80));
  iVar6 = 0;
  System_Object___ctor_2bb93bc(iVar1,0);
  piVar4 = *(int **)(_UNK_0103e2e4 + 0x103dfa0);
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar7,0,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x60) + 0xc) != 0) {
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar6 = 0;
      iVar2 = UnityEngine_Object__op_Equality_36033f4(param_2,0,0);
      if (iVar2 == 0) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = UnityEngine_Component__get_transform_35fe190(param_2,0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar6,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        *(undefined4 *)(iVar1 + 0x10) = uStack_28;
        *(undefined8 *)(iVar1 + 8) = uStack_30;
        if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xc);
        iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103e2e8 + 0x103e08c));
        System_Collections_Generic_List_object____ctor_267d2e8
                  (iVar6,uVar7,**(undefined4 **)(_UNK_0103e2ec + 0x103e0a8));
        iVar2 = 0;
        puVar9 = *(undefined4 **)(_UNK_0103e2f0 + 0x103e0c0);
        while( true ) {
          if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(param_1 + 0x60) + 0xc) <= iVar2) break;
          if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(param_1 + 0x60),iVar2,*puVar9);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(char *)(iVar3 + 0x1c) == '\0') {
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar8 = *(int *)(iVar6 + 8);
            uVar10 = *(uint *)(iVar6 + 0xc);
            piVar4 = *(int **)(_UNK_0103e2f4 + 0x103e140);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar10 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar10 + 1;
              piVar4 = (int *)(iVar8 + uVar10 * 4 + 0x10);
              *piVar4 = iVar3;
              thunk_FUN_00ec5080(piVar4,iVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_267dae0
                        (iVar6,iVar3,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
            }
          }
          iVar2 = iVar2 + 1;
        }
        uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103e2f8 + 0x103e1a0));
        System_Comparison_object____ctor_1f2562c
                  (uVar7,iVar1,**(undefined4 **)(_UNK_0103e2fc + 0x103e1b8),0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___Sort_267f704
                  (iVar6,uVar7,**(undefined4 **)(_UNK_0103e300 + 0x103e1dc));
        iVar1 = *(int *)(iVar6 + 0xc);
        if (param_3 < *(int *)(iVar6 + 0xc)) {
          iVar1 = param_3;
        }
        if (iVar1 == 0) {
          iVar6 = 0;
        }
        else {
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar2,*puVar9)
              ;
              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              Rotatelab_Scripts_WallController__SetAsBreakingWall_105e7f0(iVar3,0);
              iVar2 = iVar2 + 1;
            } while (iVar1 != iVar2);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
          }
          System_Collections_Generic_List_object___RemoveRange_267f49c
                    (iVar6,iVar1,*(int *)(iVar6 + 0xc) - iVar1,
                     **(undefined4 **)(_UNK_0103e308 + 0x103e294));
        }
      }
    }
  }
  return iVar6;
}


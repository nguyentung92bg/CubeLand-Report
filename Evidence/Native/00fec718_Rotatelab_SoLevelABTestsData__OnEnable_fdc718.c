/* IL2CPP: Rotatelab.SoLevelABTestsData$$OnEnable
void Rotatelab_SoLevelABTestsData__OnEnable (Rotatelab_SoLevelABTestsData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01a9a05c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelABTestsData$$OnEnable
   void Rotatelab_SoLevelABTestsData__OnEnable (Rotatelab_SoLevelABTestsData_o* __this, const
   MethodInfo* method); */

void Rotatelab_SoLevelABTestsData__OnEnable_fdc718(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  
  pcVar3 = (char *)(_UNK_00fecc08 + 0xfec730);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc0c + 0xfec744));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc10 + 0xfec750));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc14 + 0xfec75c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc18 + 0xfec768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc1c + 0xfec774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc20 + 0xfec780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc24 + 0xfec78c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc28 + 0xfec798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fecc2c + 0xfec7a4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fecc30 + 0xfec7b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_isPlaying_35a7178(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + 0xc) != 0) {
      iVar1 = Rotatelab_SoLevelABTestsData__CalculateChecksum_fdcc60(param_1);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar10 = *(int **)(_UNK_00fecc34 + 0xfec81c);
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar10;
      }
      if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Save_SavedList_int___get_Count_1a89e04
                        (**(int **)(iVar2 + 0x5c),**(undefined4 **)(_UNK_00fecc38 + 0xfec850));
      if (*(int *)(iVar4 + 0xc) == iVar2 + -1) {
        iVar4 = *piVar10;
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          iVar4 = *piVar10;
        }
        if (**(int **)(iVar4 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = Rotatelab_Save_SavedList_int___get_Item_1a89e88
                          (**(int **)(iVar4 + 0x5c),0xfffffffe,
                           **(undefined4 **)(_UNK_00fecc3c + 0xfec8a4));
        if (iVar1 == iVar4) {
          uVar5 = 0;
          puVar9 = *(undefined4 **)(_UNK_00fecc40 + 0xfec8c4);
          while( true ) {
            if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(*(int *)(param_1 + 0xc) + 0xc) <= (int)uVar5) {
              return;
            }
            iVar1 = *(int *)(param_1 + 0xc);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar5) break;
            iVar4 = *piVar10;
            iVar1 = *(int *)(iVar1 + uVar5 * 4 + 0x10);
            if (*(int *)(iVar4 + 0x74) == 0) {
              FUN_00ec3934();
              iVar4 = *piVar10;
            }
            if (**(int **)(iVar4 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar4 = Rotatelab_Save_SavedList_int___get_Item_1a89e38
                              (**(int **)(iVar4 + 0x5c),uVar5,*puVar9);
            if (0 < iVar4) {
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (iVar4 <= *(int *)(*(int *)(iVar1 + 0xc) + 0xc)) {
                iVar2 = *(int *)(iVar1 + 0xc);
                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(uint *)(iVar2 + 0xc) <= iVar4 - 1U) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                System_Collections_Generic_Dictionary_int__object___set_Item_1fcfa9c
                          (*(int *)(param_1 + 0x10),*(int *)(iVar1 + 8) + -1,
                           *(undefined4 *)(iVar2 + (iVar4 - 1U) * 4 + 0x10),
                           **(undefined4 **)(_UNK_00fecc44 + 0xfec9d0));
              }
            }
            uVar5 = uVar5 + 1;
            piVar10 = *(int **)(_UNK_00fecc48 + 0xfec9f0);
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
      }
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      if (**(int **)(iVar4 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = 0;
      Rotatelab_Save_SavedList_int___Clear_1a8a0e0
                (**(int **)(iVar4 + 0x5c),0,**(undefined4 **)(_UNK_00fecc4c + 0xfeca3c));
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_00fecc50 + 0xfeca50));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c(iVar4,0);
      iVar2 = *(int *)(param_1 + 0xc);
      piVar11 = *(int **)(_UNK_00fecc54 + 0xfeca8c);
      while( true ) {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar5) break;
        if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar6 = *(int *)(iVar2 + 0x10 + uVar5 * 4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar8 = -1;
        if (iVar4 + 1 < *(int *)(iVar6 + 8)) {
          if (*(int *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar8 = UnityEngine_Random__Range_35f8b14(0,*(int *)(*(int *)(iVar6 + 0xc) + 0xc) + 1,0);
          if (0 < iVar8) {
            iVar7 = *(int *)(iVar6 + 0xc);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar7 + 0xc) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_Dictionary_int__object___set_Item_1fcfa9c
                      (*(int *)(param_1 + 0x10),*(int *)(iVar6 + 8) + -1,
                       *(undefined4 *)(iVar7 + (iVar8 - 1U) * 4 + 0x10),
                       **(undefined4 **)(_UNK_00fecc58 + 0xfecb5c));
            piVar10 = *(int **)(_UNK_00fecc5c + 0xfecb70);
          }
        }
        iVar6 = *piVar10;
        if (*(int *)(iVar6 + 0x74) == 0) {
          FUN_00ec3934();
          iVar6 = *piVar10;
        }
        if (**(int **)(iVar6 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Save_SavedList_int___Add_1a89f94(**(int **)(iVar6 + 0x5c),iVar8,0,*piVar11);
        uVar5 = uVar5 + 1;
      }
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      piVar10 = (int *)**(undefined4 **)(iVar4 + 0x5c);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *piVar11;
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(piVar10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(iVar2 + 8);
      uVar5 = *(uint *)(iVar2 + 0xc);
      iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x24);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = iVar1;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_261b948
                  (iVar2,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
      }
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Could not recover jumptable at 0x01a9a058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar10 + 0xf0))(piVar10,*(undefined4 *)(*piVar10 + 0xf4));
      return;
    }
  }
  return;
}


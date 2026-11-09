/* IL2CPP: Rotatelab.Networking.HiroController.<SetUserIDAsync>d__69$$MoveNext
void Rotatelab_Networking_HiroController__SetUserIDAsync_d__69__MoveNext (Rotatelab_Networking_HiroController__SetUserIDAsync_d__69_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0116d520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<SetUserIDAsync>d__69$$MoveNext
   void Rotatelab_Networking_HiroController__SetUserIDAsync_d__69__MoveNext
   (Rotatelab_Networking_HiroController__SetUserIDAsync_d__69_o __this, const MethodInfo* method);
    */

void Rotatelab_Networking_HiroController__SetUserIDAsync_d__69__MoveNext_115cb1c(uint *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int *piStack_58;
  uint uStack_54;
  int *piStack_50;
  uint *puStack_4c;
  uint **ppuStack_48;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  undefined1 uStack_29;
  uint uStack_28;
  uint *puStack_24;
  
  pcVar6 = (char *)(_UNK_0116d6e0 + 0x116cb38);
  puStack_24 = param_1;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6e4 + 0x116cb4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6e8 + 0x116cb58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6ec + 0x116cb64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6f0 + 0x116cb70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6f4 + 0x116cb7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6f8 + 0x116cb88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d6fc + 0x116cb94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d700 + 0x116cba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d704 + 0x116cbac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d708 + 0x116cbb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d70c + 0x116cbc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d710 + 0x116cbd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d714 + 0x116cbdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d718 + 0x116cbe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d71c + 0x116cbf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d720 + 0x116cc00));
    *pcVar6 = '\x01';
  }
  uStack_28 = *param_1;
  uStack_29 = 0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  uVar7 = param_1[4];
  pcVar6 = (char *)(_UNK_0116d724 + 0x116cc3c);
  if (uStack_28 == 0) {
    piStack_38 = (int *)param_1[5];
    uStack_34 = param_1[6];
    *param_1 = 0xffffffff;
    param_1[5] = 0;
    param_1[6] = 0;
    uStack_28 = 0xffffffff;
LAB_0116ccb8:
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116d780 + 0x116ccd0));
      *pcVar6 = '\x01';
    }
    piVar9 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar3 = *piStack_38;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      iVar11 = (int)(short)uStack_34;
      if (uVar7 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116d784 + 0x116ccf4)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xd0);
            goto LAB_0116d0c0;
          }
          uVar7 = uVar7 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116d784 + 0x116ccf4),2);
LAB_0116d0c0:
      (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
    }
    if (*(int *)(**(int **)(_UNK_0116d788 + 0x116d0e0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Rotatelab_Networking_HiroController__WipeAllDataOnAndroid_114c700();
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_0116d78c + 0x116d108) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Application__Quit_35a70e0(0);
    }
  }
  else {
    pcVar12 = (char *)(_UNK_0116d728 + 0x116cc50);
    pcVar13 = (char *)(_UNK_0116d72c + 0x116cc54);
    if (uStack_28 == 1) {
LAB_0116cc6c:
      ppuStack_48 = &puStack_24;
      puStack_4c = &uStack_28;
      piStack_50 = (int *)0x0;
      piStack_38 = (int *)puStack_24[5];
      uStack_34 = puStack_24[6];
      puStack_24[5] = 0;
      puStack_24[6] = 0;
      uStack_28 = 0xffffffff;
      *puStack_24 = 0xffffffff;
      do {
        do {
          if (*pcVar6 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0116d730 + 0x116d278));
            *pcVar6 = '\x01';
          }
          piVar9 = piStack_38;
          if (piStack_38 != (int *)0x0) {
            iVar3 = *piStack_38;
            uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
            iVar11 = (int)(short)uStack_34;
            if (uVar7 != 0) {
              piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_0116d734 + 0x116d29c)) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xd0);
                  goto LAB_0116d2e8;
                }
                uVar7 = uVar7 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116d734 + 0x116d29c),2);
LAB_0116d2e8:
            (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
          }
LAB_0116d2fc:
          piVar9 = *(int **)(_UNK_0116d798 + 0x116d308);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          Cysharp_Threading_Tasks_UniTask__Delay_32169f8(&piStack_58,0x7fffffff,0,8,0,0,0);
          thunk_FUN_00ec5080(&piStack_58,0);
          uStack_34 = uStack_54;
          piStack_38 = piStack_58;
          if (*pcVar12 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0116d79c + 0x116d380));
            *pcVar12 = '\x01';
          }
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          if (*pcVar13 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0116d7a0 + 0x116d3b4));
            *pcVar13 = '\x01';
          }
          piVar9 = piStack_38;
        } while (piStack_38 == (int *)0x0);
        iVar3 = *piStack_38;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar11 = (int)(short)uStack_34;
        if (uVar7 != 0) {
          piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_0116d7a4 + 0x116d3d8)) {
              puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
              goto LAB_0116d424;
            }
            uVar7 = uVar7 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116d7a4 + 0x116d3d8),0);
LAB_0116d424:
        iVar3 = (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
      } while (iVar3 != 0);
      uStack_28 = 1;
      *puStack_24 = 1;
      puStack_24[5] = (uint)piStack_38;
      puStack_24[6] = uStack_34;
      thunk_FUN_00ec5080(puStack_24 + 5,0);
      func_0x01174b6c(puStack_24 + 1,&piStack_38,puStack_24,
                      **(undefined4 **)(_UNK_0116d7a8 + 0x116d478));
      if (uStack_28 < 0x80000000) {
        return;
      }
      piVar9 = (int *)(*ppuStack_48)[7];
      if (piVar9 == (int *)0x0) {
        return;
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116d7ac + 0x116d4c0)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
            goto LAB_0116d508;
          }
          uVar7 = uVar7 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116d7ac + 0x116d4c0),0);
LAB_0116d508:
      (*(code *)*puVar4)(piVar9,puVar4[1]);
      return;
    }
    piVar9 = *(int **)(_UNK_0116d738 + 0x116cd40);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    puVar4 = *(undefined4 **)(_UNK_0116d73c + 0x116cd64);
    uVar2 = Rotatelab_Save_SavedValue_object___op_Implicit_1a8bd1c
                      (**(undefined4 **)(iVar3 + 0x5c),*puVar4);
    iVar3 = System_String__op_Equality_2a0975c(uVar2,puStack_24[3],0);
    if (iVar3 == 0) {
      iVar3 = *piVar9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar9;
      }
      uVar2 = Rotatelab_Save_SavedValue_object___op_Implicit_1a8bd1c
                        (**(undefined4 **)(iVar3 + 0x5c),*puVar4);
      iVar3 = System_String__IsNullOrEmpty_2a0a844(uVar2,0);
      if (iVar3 == 0) {
        iVar3 = *piVar9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar9;
        }
        uVar2 = System_String__Format_2a0c264
                          (**(undefined4 **)(_UNK_0116d744 + 0x116ce5c),
                           **(undefined4 **)(iVar3 + 0x5c),puStack_24[3],0);
        if (*(int *)(**(int **)(_UNK_0116d748 + 0x116ce7c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogWarning_35b0090(uVar2,0);
        if (**(int **)(*piVar9 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8
                  (**(int **)(*piVar9 + 0x5c),**(undefined4 **)(_UNK_0116d750 + 0x116cec8),
                   **(undefined4 **)(_UNK_0116d74c + 0x116cebc));
        piVar9 = (int *)**(undefined4 **)(*piVar9 + 0x5c);
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar9 + 0xf0))(piVar9,*(undefined4 *)(*piVar9 + 0xf4));
        if (*(int *)(**(int **)(_UNK_0116d754 + 0x116cf08) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uStack_29 = Rotatelab_Scripts_ControllerFirebase__ResetAnalyticsDataAsync_106091c(0);
        Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_29,0);
        if (*(int *)(**(int **)(_UNK_0116d758 + 0x116cf3c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = UnityEngine_Application__get_platform_35a81fc(0);
        if (iVar3 != 0xb) {
          iVar3 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                            (**(undefined4 **)(_UNK_0116d75c + 0x116cf68));
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar7 = Rotatelab_UI_GenericDialog__ShowWithinScopeWithNoButtons_11111d8
                            (iVar3,**(undefined4 **)(_UNK_0116d794 + 0x116d150),
                             **(undefined4 **)(_UNK_0116d790 + 0x116d144),0);
          puStack_24[7] = uVar7;
          thunk_FUN_00ec5080();
          ppuStack_48 = &puStack_24;
          puStack_4c = &uStack_28;
          piStack_50 = (int *)0x0;
          if (uStack_28 != 1) goto LAB_0116d2fc;
          goto LAB_0116cc6c;
        }
        iVar3 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                          (**(undefined4 **)(_UNK_0116d75c + 0x116cf68));
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_UI_GenericDialog__ShowAsync_1111a10
                  (&piStack_50,iVar3,**(undefined4 **)(_UNK_0116d760 + 0x116cf8c),
                   **(undefined4 **)(_UNK_0116d764 + 0x116cf98),
                   **(undefined4 **)(_UNK_0116d768 + 0x116cfa4),0,0);
        piVar9 = *(int **)(_UNK_0116d76c + 0x116cfc8);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        thunk_FUN_00ec5080(&piStack_50,0);
        uStack_34 = (uint)puStack_4c;
        piStack_38 = piStack_50;
        if (*pcVar12 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0116d770 + 0x116d01c));
          *pcVar12 = '\x01';
        }
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        if (*pcVar13 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0116d774 + 0x116d050));
          *pcVar13 = '\x01';
        }
        piVar9 = piStack_38;
        if (piStack_38 != (int *)0x0) {
          iVar3 = *piStack_38;
          uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
          iVar11 = (int)(short)uStack_34;
          if (uVar7 != 0) {
            piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(_UNK_0116d778 + 0x116d074)) {
                puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
                goto LAB_0116d1a0;
              }
              uVar7 = uVar7 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116d778 + 0x116d074),0);
LAB_0116d1a0:
          iVar3 = (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
          if (iVar3 == 0) {
            uStack_28 = 0;
            *puStack_24 = 0;
            puStack_24[5] = (uint)piStack_38;
            puStack_24[6] = uStack_34;
            thunk_FUN_00ec5080(puStack_24 + 5,0);
            func_0x01174b6c(puStack_24 + 1,&piStack_38,puStack_24,
                            **(undefined4 **)(_UNK_0116d77c + 0x116d1f0));
            return;
          }
        }
        goto LAB_0116ccb8;
      }
    }
    uVar10 = puStack_24[3];
    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = (uint *)(uVar7 + 0x14);
    *puVar8 = uVar10;
    thunk_FUN_00ec5080(puVar8,uVar10);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    if (**(int **)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8
              (**(int **)(iVar3 + 0x5c),puStack_24[3],**(undefined4 **)(_UNK_0116d740 + 0x116ce20));
  }
  puVar8 = puStack_24;
  pcVar6 = (char *)(_UNK_0116d7b0 + 0x116d544);
  cVar1 = *pcVar6;
  *puStack_24 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116d7b4 + 0x116d55c));
    *pcVar6 = '\x01';
  }
  piVar9 = (int *)puVar8[1];
  if (piVar9 != (int *)0x0) {
    iVar3 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0116d7b8 + 0x116d580)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xd0);
          goto LAB_0116d5c8;
        }
        uVar7 = uVar7 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116d7b8 + 0x116d580),2);
LAB_0116d5c8:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  return;
}


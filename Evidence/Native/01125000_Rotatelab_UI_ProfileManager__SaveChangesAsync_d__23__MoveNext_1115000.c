/* IL2CPP: Rotatelab.UI.ProfileManager.<SaveChangesAsync>d__23$$MoveNext
void Rotatelab_UI_ProfileManager__SaveChangesAsync_d__23__MoveNext (Rotatelab_UI_ProfileManager__SaveChangesAsync_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager.<SaveChangesAsync>d__23$$MoveNext
   void Rotatelab_UI_ProfileManager__SaveChangesAsync_d__23__MoveNext
   (Rotatelab_UI_ProfileManager__SaveChangesAsync_d__23_o __this, const MethodInfo* method); */

void Rotatelab_UI_ProfileManager__SaveChangesAsync_d__23__MoveNext_1115000(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  int *piStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  int *piStack_30;
  uint *puStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar5 = (char *)(_UNK_01125ca0 + 0x1125018);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125ca4 + 0x112502c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125ca8 + 0x1125038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cac + 0x1125044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cb0 + 0x1125050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cb4 + 0x112505c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cb8 + 0x1125068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cbc + 0x1125074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cc0 + 0x1125080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cc4 + 0x112508c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cc8 + 0x1125098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125ccc + 0x11250a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125cd0 + 0x11250b0));
    *pcVar5 = '\x01';
  }
  uStack_24 = *param_1;
  uVar6 = 0;
  uStack_28 = param_1[2];
  puStack_2c = (uint *)0x0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  uStack_38 = 0;
  if (uStack_24 == 0) {
    piVar9 = (int *)param_1[3];
    puVar11 = (uint *)param_1[4];
    *param_1 = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    uStack_24 = 0xffffffff;
    piStack_30 = piVar9;
    puStack_2c = puVar11;
LAB_011251c0:
    pcVar5 = (char *)(_UNK_01125d04 + 0x11251cc);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01125d08 + 0x11251e0));
      *pcVar5 = '\x01';
    }
    if (piVar9 != (int *)0x0) {
      iVar7 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01125d0c + 0x1125200)) {
            puVar10 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
            goto LAB_011252c4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar10 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01125d0c + 0x1125200),2);
LAB_011252c4:
      (*(code *)*puVar10)(piVar9,(int)(short)puVar11,puVar10[1]);
    }
    goto LAB_011258ec;
  }
  if (uStack_24 - 3 < 0xfffffffe) {
    if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(uStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(uStack_28 + 0x30) + 0x160);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_String__Trim_2a100f4(iVar7,0);
    iVar7 = System_String__IsNullOrWhiteSpace_2a0a85c(uVar6,0);
    if (iVar7 != 0) {
      iVar7 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                        (**(undefined4 **)(_UNK_01125cd4 + 0x1125150));
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_GenericDialog__Show_1111834
                (iVar7,**(undefined4 **)(_UNK_01125ce0 + 0x1125188),
                 **(undefined4 **)(_UNK_01125cdc + 0x112517c),
                 **(undefined4 **)(_UNK_01125cd8 + 0x1125170),0);
      goto LAB_011258ec;
    }
    puVar10 = *(undefined4 **)(_UNK_01125ce4 + 0x1125248);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(*(int *)(iVar7 + 0x20) + 0x10) == '\0') {
      iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync_114ce04
                (&piStack_50,iVar7,0,0);
      piVar4 = *(int **)(_UNK_01125ce8 + 0x1125314);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      thunk_FUN_00ec5080(&piStack_50,0);
      puVar1 = puStack_4c;
      piVar9 = piStack_50;
      pcVar5 = (char *)(_UNK_01125cec + 0x1125350);
      puStack_2c = puStack_4c;
      piStack_30 = piStack_50;
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01125cf0 + 0x1125370));
        *pcVar5 = '\x01';
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar5 = (char *)(_UNK_01125cf4 + 0x1125398);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01125cf8 + 0x11253ac));
        *pcVar5 = '\x01';
      }
      puVar11 = (uint *)(int)(short)puVar1;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar7 = *piVar9;
        uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_01125cfc + 0x11253d0)) {
              puVar10 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
              goto LAB_01125914;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar10 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01125cfc + 0x11253d0),0);
LAB_01125914:
        iVar7 = (*(code *)*puVar10)(piVar9,puVar11,puVar10[1]);
        if (iVar7 == 0) {
          param_1[4] = (uint)puVar1;
          *param_1 = 0;
          uStack_24 = 0;
          param_1[3] = (uint)piVar9;
          thunk_FUN_00ec5080(param_1 + 3,0);
          func_0x01133de0(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_01125d00 + 0x1125960));
          return;
        }
      }
      goto LAB_011251c0;
    }
    if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_UI_ProfileManager__get_Username_1113454();
    iVar7 = System_String__op_Equality_2a0975c(uVar6,uVar2,0);
    if (iVar7 != 0) {
      if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = *(undefined4 *)(uStack_28 + 0x2c);
      uVar12 = *(undefined4 *)(uStack_28 + 0x10);
      if (*(int *)(**(int **)(_UNK_01125d10 + 0x1125440) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar2,uVar12,0);
      if (iVar7 != 0) {
        if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_UI_ProfileManager__HideProfilePopup_1114468(uStack_28);
        goto LAB_011258ec;
      }
    }
  }
  puStack_48 = &uStack_28;
  puStack_4c = &uStack_24;
  piStack_50 = (int *)0x0;
  if (uStack_24 == 1) {
    uStack_34 = param_1[5];
    *param_1 = 0xffffffff;
    param_1[5] = 0;
    uStack_24 = 0xffffffff;
LAB_0112569c:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&uStack_34,0);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01125d24 + 0x11256b4));
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Hiro_NakamaSystem__RefreshAsync_29635dc(*(int *)(iVar7 + 0x20),0,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_34 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar7,0);
    iVar7 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&uStack_34,0);
    if (iVar7 == 0) {
      *param_1 = 2;
      uStack_24 = 2;
      param_1[5] = uStack_34;
      thunk_FUN_00ec5080(param_1 + 5,0);
      iVar7 = 8;
      func_0x01133f00(param_1 + 1,&uStack_34,param_1,**(undefined4 **)(_UNK_01125d28 + 0x11257bc));
    }
    else {
LAB_0112571c:
      System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&uStack_34,0);
      iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01125d2c + 0x1125734));
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Hiro_NakamaSystem__Save_29636f0(*(int *)(iVar7 + 0x20),0);
      if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = 0xf;
      *(undefined4 *)(uStack_28 + 0x10) = *(undefined4 *)(uStack_28 + 0x2c);
      thunk_FUN_00ec5080((undefined4 *)(uStack_28 + 0x10));
    }
  }
  else {
    if (uStack_24 == 2) {
      uStack_34 = param_1[5];
      *param_1 = 0xffffffff;
      param_1[5] = 0;
      uStack_24 = 0xffffffff;
      goto LAB_0112571c;
    }
    if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(uStack_28 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_interactable_39a3940(*(int *)(uStack_28 + 0x44),0,0);
    puVar10 = *(undefined4 **)(_UNK_01125d14 + 0x112552c);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(*(int *)(iVar7 + 0x20) + 0x20);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x20) + 0x24);
    if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(uStack_28 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar12 = UnityEngine_Object__get_name_36081bc(*(int *)(uStack_28 + 0x2c),0);
    uVar12 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_01125d18 + 0x11255bc),uVar12,0);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01125d1c + 0x11255e4)) {
          puVar10 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0x140);
          goto LAB_0112562c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar10 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01125d1c + 0x11255e4),0x10);
LAB_0112562c:
    iVar7 = (*(code *)*puVar10)(piVar9,uVar2,0,uVar6,uVar12,0,0,0,0,0,puVar10[1]);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_34 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar7,0);
    iVar7 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&uStack_34,0);
    if (iVar7 != 0) goto LAB_0112569c;
    *param_1 = 1;
    uStack_24 = 1;
    param_1[5] = uStack_34;
    thunk_FUN_00ec5080(param_1 + 5,0);
    iVar7 = 8;
    func_0x01133f00(param_1 + 1,&uStack_34,param_1,**(undefined4 **)(_UNK_01125d20 + 0x1125800));
  }
  puVar11 = puStack_48;
  if (0x7fffffff < *puStack_4c) {
    if (*puStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(*puStack_48 + 0x44);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_interactable_39a3940(iVar8,1,0);
    if (*puVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_ProfileManager__Refresh_1114308(*puVar11);
  }
  if (piStack_50 != (int *)0x0) {
    FUN_00ec3a6c();
  }
  if (iVar7 != 0xf) {
    if (iVar7 == 5) goto LAB_011258ec;
    if (iVar7 != 0) {
      return;
    }
  }
  piVar9 = *(int **)(_UNK_01125d48 + 0x11258a0);
  iVar7 = *piVar9;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar9;
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x5c) + 0xdc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar7,0);
  if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_ProfileManager__HideProfilePopup_1114468(uStack_28);
LAB_011258ec:
  *param_1 = 0xfffffffe;
  func_0x00fcef34(param_1 + 1,0);
  return;
}


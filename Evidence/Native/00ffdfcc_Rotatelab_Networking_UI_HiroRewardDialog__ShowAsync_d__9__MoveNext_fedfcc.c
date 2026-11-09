/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<ShowAsync>d__9$$MoveNext
void Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_d__9__MoveNext (Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_d__9_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00ffe7ec) */
/* WARNING: Removing unreachable block (ram,0x00ffe7d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<ShowAsync>d__9$$MoveNext
   void Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_d__9__MoveNext
   (Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_d__9_o __this, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_d__9__MoveNext_fedfcc(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_00ffec80 + 0xffdfe4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec84 + 0xffdff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec88 + 0xffe004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec8c + 0xffe010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec90 + 0xffe01c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec94 + 0xffe028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec98 + 0xffe034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffec9c + 0xffe040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffeca0 + 0xffe04c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffeca4 + 0xffe058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffeca8 + 0xffe064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffecac + 0xffe070));
    *pcVar8 = '\x01';
  }
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  iVar10 = param_1[3];
  pcVar8 = (char *)(_UNK_00ffecb0 + 0xffe0a0);
  if (*param_1 == 0) {
    piStack_30 = (int *)param_1[5];
    iStack_2c = param_1[6];
    *param_1 = -1;
    param_1[5] = 0;
    param_1[6] = 0;
LAB_00ffe0e8:
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffece8 + 0xffe100));
      *pcVar8 = '\x01';
    }
    piVar9 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar13 = *piStack_30;
      uVar4 = (uint)*(ushort *)(iVar13 + 0xb6);
      iVar3 = (int)(short)iStack_2c;
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_00ffecec + 0xffe124)) {
            puVar2 = (undefined4 *)(iVar13 + *piVar7 * 8 + 0xd0);
            goto LAB_00ffe300;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffecec + 0xffe124),2);
LAB_00ffe300:
      (*(code *)*puVar2)(piVar9,iVar3,puVar2[1]);
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (*param_1 == 1) {
      piStack_30 = (int *)param_1[5];
      iStack_2c = param_1[6];
      *param_1 = -1;
      param_1[5] = 0;
      param_1[6] = 0;
      goto LAB_00ffe938;
    }
    iVar13 = param_1[4];
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar10 + 0x28) = iVar13;
    thunk_FUN_00ec5080((int *)(iVar10 + 0x28),iVar13);
    piVar7 = (int *)param_1[4];
    piVar9 = *(int **)(iVar10 + 0x14);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *piVar7;
    piVar14 = *(int **)(_UNK_00ffecb4 + 0xffe1a8);
    uVar4 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar13 + *piVar5 * 8 + 200);
          goto LAB_00ffe1f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar7,*piVar14,1);
LAB_00ffe1f0:
    piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *piVar7;
    piVar5 = *(int **)(_UNK_00ffecb8 + 0xffe220);
    uVar4 = (uint)*(ushort *)(iVar13 + 0xb6);
    iVar3 = *piVar5;
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar13 + *piVar6 * 8 + 0xd8);
          goto LAB_00ffe268;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar3,3);
LAB_00ffe268:
    uVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    iVar13 = System_String__IsNullOrWhiteSpace_2a0a85c(uVar1,0);
    if (iVar13 == 0) {
      piVar7 = (int *)param_1[4];
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar14) {
            puVar2 = (undefined4 *)(iVar13 + *piVar6 * 8 + 200);
            goto LAB_00ffe33c;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar7,*piVar14,1);
LAB_00ffe33c:
      piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = *piVar7;
      iVar3 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar13 + *piVar5 * 8 + 0xd8);
            goto LAB_00ffe3ac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar3,3);
LAB_00ffe3ac:
      uVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    }
    else {
      uVar1 = **(undefined4 **)(_UNK_00ffecbc + 0xffe29c);
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0x2b0))(piVar9,uVar1,*(undefined4 *)(*piVar9 + 0x2b4));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = (int *)param_1[4];
    iVar13 = *(int *)(iVar10 + 0x24);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar14) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 200);
          goto LAB_00ffe458;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,*piVar14,1);
LAB_00ffe458:
    uVar1 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_UI_HiroRewardUIEntryContainer__Initialize_feed34(iVar13,uVar1);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *(int *)(iVar10 + 0x24);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar13 + 0x20) < 1) {
      bVar11 = false;
    }
    else {
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar11 = *(char *)(iVar13 + 0x24) == '\0';
    }
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = UnityEngine_Component__get_gameObject_35fe360(iVar13,0);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar13,bVar11,0);
    piVar9 = *(int **)(iVar10 + 0x10);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0x2b0))
              (piVar9,**(undefined4 **)(_UNK_00ffecc0 + 0xffe538),*(undefined4 *)(*piVar9 + 0x2b4));
    puVar2 = *(undefined4 **)(_UNK_00ffecc8 + 0xffe560);
    if (bVar11 != false) {
      puVar2 = *(undefined4 **)(_UNK_00ffecc4 + 0xffe558);
    }
    piVar9 = *(int **)(iVar10 + 0x20);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0x2b0))(piVar9,*puVar2,*(undefined4 *)(*piVar9 + 0x2b4));
    if (*(int *)(iVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar10 + 0x18),0);
    if (*(int *)(iVar10 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar13,*(char *)(*(int *)(iVar10 + 0x24) + 0x25) != '\0',0);
    if (*(int *)(iVar10 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(*(int *)(iVar10 + 0x24) + 0x25) != '\0') {
      Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_1128958(&piStack_40,0);
      piVar9 = *(int **)(_UNK_00ffeccc + 0xffe618);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      thunk_FUN_00ec5080(&piStack_40,0);
      pcVar12 = (char *)(_UNK_00ffecd0 + 0xffe64c);
      iStack_2c = iStack_3c;
      piStack_30 = piStack_40;
      if (*pcVar12 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00ffecd4 + 0xffe668));
        *pcVar12 = '\x01';
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar12 = (char *)(_UNK_00ffecd8 + 0xffe690);
      if (*pcVar12 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00ffecdc + 0xffe6a4));
        *pcVar12 = '\x01';
      }
      piVar9 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar13 = *piStack_30;
        uVar4 = (uint)*(ushort *)(iVar13 + 0xb6);
        iVar3 = (int)(short)iStack_2c;
        if (uVar4 != 0) {
          piVar7 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_00ffece0 + 0xffe6c8)) {
              puVar2 = (undefined4 *)(iVar13 + *piVar7 * 8 + 0xc0);
              goto LAB_00ffead0;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffece0 + 0xffe6c8),0);
LAB_00ffead0:
        iVar13 = (*(code *)*puVar2)(piVar9,iVar3,puVar2[1]);
        if (iVar13 == 0) {
          param_1[6] = iStack_2c;
          *param_1 = 0;
          param_1[5] = (int)piStack_30;
          thunk_FUN_00ec5080(param_1 + 5,0);
          func_0x01012b9c(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_00ffece4 + 0xffeb20));
          return;
        }
      }
      goto LAB_00ffe0e8;
    }
  }
  iVar13 = UnityEngine_Component__get_gameObject_35fe360(iVar10,0);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar13,1,0);
  puVar2 = *(undefined4 **)(_UNK_00ffecf0 + 0xffe744);
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (*(int *)(**(int **)(_UNK_00ffecf4 + 0xffe758) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar13 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar13 != 0) {
    iVar13 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar13,1,iVar10,0);
  }
  iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ffecf8 + 0xffe7b8));
  Cysharp_Threading_Tasks_UniTaskCompletionSource___ctor_321d248(iVar13,0);
  piVar9 = (int *)(iVar10 + 0x2c);
  *piVar9 = iVar13;
  thunk_FUN_00ec5080(piVar9,iVar13);
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource__get_Task_321d264(&piStack_40,*piVar9,0);
  piVar9 = *(int **)(_UNK_00ffecfc + 0xffe81c);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  thunk_FUN_00ec5080(&piStack_40,0);
  pcVar12 = (char *)(_UNK_00ffed00 + 0xffe850);
  iStack_2c = iStack_3c;
  piStack_30 = piStack_40;
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffed04 + 0xffe86c));
    *pcVar12 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar12 = (char *)(_UNK_00ffed08 + 0xffe894);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffed0c + 0xffe8a8));
    *pcVar12 = '\x01';
  }
  piVar9 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar10 = *piStack_30;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    iVar13 = (int)(short)iStack_2c;
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_00ffed10 + 0xffe8cc)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
          goto LAB_00ffe918;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffed10 + 0xffe8cc),0);
LAB_00ffe918:
    iVar10 = (*(code *)*puVar2)(piVar9,iVar13,puVar2[1]);
    if (iVar10 == 0) {
      param_1[6] = iStack_2c;
      *param_1 = 1;
      param_1[5] = (int)piStack_30;
      thunk_FUN_00ec5080(param_1 + 5,0);
      func_0x01012b9c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffed14 + 0xffeab0));
      return;
    }
  }
LAB_00ffe938:
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffed18 + 0xffe950));
    *pcVar8 = '\x01';
  }
  piVar9 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar10 = *piStack_30;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    iVar13 = (int)(short)iStack_2c;
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_00ffed1c + 0xffe974)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xd0);
          goto LAB_00ffe9c0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffed1c + 0xffe974),2);
LAB_00ffe9c0:
    (*(code *)*puVar2)(piVar9,iVar13,puVar2[1]);
  }
  iVar10 = _UNK_00ffed20;
  *param_1 = -2;
  if (*(char *)(iVar10 + 0xffe9ec) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffed24 + 0xffea00));
    *(char *)(iVar10 + 0xffe9ec) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_00ffed28 + 0xffea24)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xd0);
          goto LAB_00ffea6c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_00ffed28 + 0xffea24),2);
LAB_00ffea6c:
    (*(code *)*puVar2)(piVar9,puVar2[1]);
  }
  return;
}


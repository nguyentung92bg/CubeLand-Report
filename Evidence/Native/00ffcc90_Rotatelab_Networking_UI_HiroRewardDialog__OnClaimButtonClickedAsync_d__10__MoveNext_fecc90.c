/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<OnClaimButtonClickedAsync>d__10$$MoveNext
void Rotatelab_Networking_UI_HiroRewardDialog__OnClaimButtonClickedAsync_d__10__MoveNext (Rotatelab_Networking_UI_HiroRewardDialog__OnClaimButtonClickedAsync_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00ffd25c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<OnClaimButtonClickedAsync>d__10$$MoveNext
   void Rotatelab_Networking_UI_HiroRewardDialog__OnClaimButtonClickedAsync_d__10__MoveNext
   (Rotatelab_Networking_UI_HiroRewardDialog__OnClaimButtonClickedAsync_d__10_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__OnClaimButtonClickedAsync_d__10__MoveNext_fecc90
               (undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_00ffd84c + 0xffcca8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd850 + 0xffccbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd854 + 0xffccc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd858 + 0xffccd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd85c + 0xffcce0));
    *pcVar5 = '\x01';
  }
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  iVar9 = param_1[2];
  pcVar5 = (char *)(_UNK_00ffd860 + 0xffcd10);
  switch(*param_1) {
  case 0:
    piStack_30 = (int *)param_1[3];
    uStack_2c = param_1[4];
    *param_1 = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    break;
  case 1:
    piStack_30 = (int *)param_1[3];
    uStack_2c = param_1[4];
    *param_1 = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    goto LAB_00ffd138;
  case 2:
    piStack_30 = (int *)param_1[3];
    uStack_2c = param_1[4];
    *param_1 = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    goto LAB_00ffd3c8;
  case 3:
    piStack_30 = (int *)param_1[3];
    uStack_2c = param_1[4];
    *param_1 = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    goto LAB_00ffd5a0;
  default:
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_fea10c
              (&piStack_40,iVar9);
    piVar7 = *(int **)(_UNK_00ffd864 + 0xffcde0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_40,0);
    pcVar6 = (char *)(_UNK_00ffd868 + 0xffce14);
    uStack_2c = uStack_3c;
    piStack_30 = piStack_40;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd86c + 0xffce30));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00ffd870 + 0xffce58);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd874 + 0xffce6c));
      *pcVar6 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)uStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_00ffd878 + 0xffce90)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_00ffcedc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd878 + 0xffce90),0);
LAB_00ffcedc:
      iVar1 = (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = uStack_2c;
        *param_1 = 0;
        param_1[3] = piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0101295c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffd87c + 0xffd0fc))
        ;
        return;
      }
    }
  }
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd880 + 0xffcf10));
    *pcVar5 = '\x01';
  }
  piVar7 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar1 = *piStack_30;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar8 = (int)(short)uStack_2c;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_00ffd884 + 0xffcf34)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
          goto LAB_00ffcf80;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd884 + 0xffcf34),2);
LAB_00ffcf80:
    (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
  }
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar9 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*(int *)(iVar9 + 0x24) + 0x25) != '\0') {
    Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_1128958(&piStack_40,0);
    piVar7 = *(int **)(_UNK_00ffd888 + 0xffcfd4);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_40,0);
    pcVar6 = (char *)(_UNK_00ffd88c + 0xffd008);
    uStack_2c = uStack_3c;
    piStack_30 = piStack_40;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd890 + 0xffd024));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00ffd894 + 0xffd04c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd898 + 0xffd060));
      *pcVar6 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)uStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_00ffd89c + 0xffd084)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_00ffd11c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd89c + 0xffd084),0);
LAB_00ffd11c:
      iVar1 = (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = uStack_2c;
        *param_1 = 1;
        param_1[3] = piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0101295c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffd8a0 + 0xffd710))
        ;
        return;
      }
    }
LAB_00ffd138:
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8a4 + 0xffd150));
      *pcVar5 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)uStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_00ffd8a8 + 0xffd174)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
            goto LAB_00ffd1c0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd8a8 + 0xffd174),2);
LAB_00ffd1c0:
      (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  Rotatelab_Networking_UI_HiroRewardDialog__ClaimReward_fea29c(iVar9);
  puVar2 = *(undefined4 **)(_UNK_00ffd8ac + 0xffd1fc);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_1143a20(&piStack_40,iVar1,0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88(piStack_40,uStack_3c,0);
  if (*(int *)(iVar9 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*(int *)(iVar9 + 0x24) + 0x25) != '\0') {
    if (*(int *)(**(int **)(_UNK_00ffd8b0 + 0xffd288) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_1066b4c(&piStack_40,0);
    piVar7 = *(int **)(_UNK_00ffd8b4 + 0xffd2b0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_40,0);
    pcVar6 = (char *)(_UNK_00ffd8b8 + 0xffd2e4);
    uStack_2c = uStack_3c;
    piStack_30 = piStack_40;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8bc + 0xffd300));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00ffd8c0 + 0xffd328);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8c4 + 0xffd33c));
      *pcVar6 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)uStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_00ffd8c8 + 0xffd360)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_00ffd3ac;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd8c8 + 0xffd360),0);
LAB_00ffd3ac:
      iVar1 = (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = uStack_2c;
        *param_1 = 2;
        param_1[3] = piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0101295c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffd8cc + 0xffd6cc))
        ;
        return;
      }
    }
LAB_00ffd3c8:
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8d0 + 0xffd3e0));
      *pcVar5 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)uStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_00ffd8d4 + 0xffd404)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
            goto LAB_00ffd450;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd8d4 + 0xffd404),2);
LAB_00ffd450:
      (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_fea1d4
            (&piStack_40,iVar9);
  piVar7 = *(int **)(_UNK_00ffd8d8 + 0xffd488);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  thunk_FUN_00ec5080(&piStack_40,0);
  pcVar6 = (char *)(_UNK_00ffd8dc + 0xffd4bc);
  uStack_2c = uStack_3c;
  piStack_30 = piStack_40;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8e0 + 0xffd4d8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_00ffd8e4 + 0xffd500);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8e8 + 0xffd514));
    *pcVar6 = '\x01';
  }
  piVar7 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar9 = *piStack_30;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    iVar1 = (int)(short)uStack_2c;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_00ffd8ec + 0xffd538)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar4 * 8 + 0xc0);
          goto LAB_00ffd584;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd8ec + 0xffd538),0);
LAB_00ffd584:
    iVar9 = (*(code *)*puVar2)(piVar7,iVar1,puVar2[1]);
    if (iVar9 == 0) {
      param_1[4] = uStack_2c;
      *param_1 = 3;
      param_1[3] = piStack_30;
      thunk_FUN_00ec5080(param_1 + 3,0);
      func_0x0101295c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffd8f0 + 0xffd64c));
      return;
    }
  }
LAB_00ffd5a0:
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffd8f4 + 0xffd5b8));
    *pcVar5 = '\x01';
  }
  piVar7 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar9 = *piStack_30;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    iVar1 = (int)(short)uStack_2c;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_00ffd8f8 + 0xffd5dc)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar4 * 8 + 0xd0);
          goto LAB_00ffd66c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffd8f8 + 0xffd5dc),2);
LAB_00ffd66c:
    (*(code *)*puVar2)(piVar7,iVar1,puVar2[1]);
  }
  *param_1 = 0xfffffffe;
  func_0x00fcef34(param_1 + 1,0);
  return;
}


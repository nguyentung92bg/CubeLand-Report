/* IL2CPP: Rotatelab.Scripts.GameManager.<OnLevelProgressChangedExternallyAsync>d__10$$MoveNext
void Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_d__10__MoveNext (Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager.<OnLevelProgressChangedExternallyAsync>d__10$$MoveNext
   void Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_d__10__MoveNext
   (Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_d__10_o __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_d__10__MoveNext_1067494
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01077d68 + 0x10774ac);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d6c + 0x10774c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d70 + 0x10774cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d74 + 0x10774d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d78 + 0x10774e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d7c + 0x10774f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d80 + 0x10774fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d84 + 0x1077508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d88 + 0x1077514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077d8c + 0x1077520));
    *pcVar6 = '\x01';
  }
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  pcVar6 = (char *)(_UNK_01077d90 + 0x107754c);
  if (*param_1 == 0) {
    piStack_30 = (int *)param_1[3];
    iStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
LAB_010776d4:
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01077db0 + 0x10776ec));
      *pcVar6 = '\x01';
    }
    piVar5 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)iStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01077db4 + 0x1077710)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
            goto LAB_0107775c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01077db4 + 0x1077710),2);
LAB_0107775c:
      (*(code *)*puVar2)(piVar5,iVar8,puVar2[1]);
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01077db8 + 0x107777c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__RefreshCurrentLevel_1066138(iVar1);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01077dbc + 0x10777a4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_1128958(&piStack_40,0);
    piVar5 = *(int **)(_UNK_01077dc0 + 0x10777ec);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_40,0);
    pcVar7 = (char *)(_UNK_01077dc4 + 0x1077828);
    iStack_2c = iStack_3c;
    piStack_30 = piStack_40;
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01077dc8 + 0x1077848));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_01077dcc + 0x1077870);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01077dd0 + 0x1077884));
      *pcVar7 = '\x01';
    }
    piVar5 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar8 = (int)(short)iStack_2c;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01077dd4 + 0x10778a8)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_010778f4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01077dd4 + 0x10778a8),0);
LAB_010778f4:
      iVar1 = (*(code *)*puVar2)(piVar5,iVar8,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = iStack_2c;
        *param_1 = 1;
        param_1[3] = (int)piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0108078c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_01077dd8 + 0x1077c08)
                       );
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_1128958(&piStack_40,0);
      piVar5 = *(int **)(_UNK_01077d94 + 0x10775b0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      thunk_FUN_00ec5080(&piStack_40,0);
      pcVar7 = (char *)(_UNK_01077d98 + 0x10775ec);
      iStack_2c = iStack_3c;
      piStack_30 = piStack_40;
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01077d9c + 0x107760c));
        *pcVar7 = '\x01';
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar7 = (char *)(_UNK_01077da0 + 0x1077634);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01077da4 + 0x1077648));
        *pcVar7 = '\x01';
      }
      piVar5 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar1 = *piStack_30;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar8 = (int)(short)iStack_2c;
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_01077da8 + 0x107766c)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto LAB_010776b8;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01077da8 + 0x107766c),0);
LAB_010776b8:
        iVar1 = (*(code *)*puVar2)(piVar5,iVar8,puVar2[1]);
        if (iVar1 == 0) {
          param_1[4] = iStack_2c;
          *param_1 = 0;
          param_1[3] = (int)piStack_30;
          thunk_FUN_00ec5080(param_1 + 3,0);
          func_0x0108078c(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_01077dac + 0x1077c4c));
          return;
        }
      }
      goto LAB_010776d4;
    }
    piStack_30 = (int *)param_1[3];
    iStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077ddc + 0x1077928));
    *pcVar6 = '\x01';
  }
  piVar5 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar1 = *piStack_30;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar8 = (int)(short)iStack_2c;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01077de0 + 0x107794c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
          goto LAB_01077998;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01077de0 + 0x107794c),2);
LAB_01077998:
    (*(code *)*puVar2)(piVar5,iVar8,puVar2[1]);
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01077de4 + 0x10779b8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) != 1) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01077de8 + 0x10779f4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48();
    if (iVar1 != 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01077df0 + 0x1077a1c));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_PreLevelStartController__RefreshLevelProperties_112593c(iVar1,0);
      goto LAB_01077b04;
    }
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x58),0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = *(int **)(iVar1 + 0x58);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    lVar9 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
    (**(code **)(*piVar5 + 0xf8))
              (piVar5,(int)((ulonglong)lVar9 >> 0x20),(int)(lVar9 + 1),
               (int)((ulonglong)(lVar9 + 1) >> 0x20),*(undefined4 *)(*piVar5 + 0xfc));
  }
  piVar5 = *(int **)(_UNK_01077dec + 0x1077ad0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
LAB_01077b04:
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01077df4 + 0x1077b10));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_BoosterGenerator__RefreshAllBoosters_113d164(iVar1,0);
  iVar1 = _UNK_01077df8;
  *param_1 = -2;
  if (*(char *)(iVar1 + 0x1077b44) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077dfc + 0x1077b58));
    *(char *)(iVar1 + 0x1077b44) = '\x01';
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01077e00 + 0x1077b7c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
          goto LAB_01077bc4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_01077e00 + 0x1077b7c),2);
LAB_01077bc4:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
  }
  return;
}


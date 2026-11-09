/* IL2CPP: Rotatelab.UI.SettingPanelController.<OnDeleteAccountButtonClickedAsync>d__30$$MoveNext
void Rotatelab_UI_SettingPanelController__OnDeleteAccountButtonClickedAsync_d__30__MoveNext (Rotatelab_UI_SettingPanelController__OnDeleteAccountButtonClickedAsync_d__30_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController.<OnDeleteAccountButtonClickedAsync>d__30$$MoveNext
   void Rotatelab_UI_SettingPanelController__OnDeleteAccountButtonClickedAsync_d__30__MoveNext
   (Rotatelab_UI_SettingPanelController__OnDeleteAccountButtonClickedAsync_d__30_o __this, const
   MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__OnDeleteAccountButtonClickedAsync_d__30__MoveNext_112b630
               (int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_38;
  undefined1 uStack_31;
  int *piStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_0113bd48 + 0x113b648);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd4c + 0x113b65c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd50 + 0x113b668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd54 + 0x113b674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd58 + 0x113b680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd5c + 0x113b68c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd60 + 0x113b698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd64 + 0x113b6a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd68 + 0x113b6b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bd6c + 0x113b6bc));
    *pcVar7 = '\x01';
  }
  iVar9 = param_1[2];
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_31 = 0;
  uStack_38 = 0;
  if (*param_1 == 0) {
    piStack_30 = (int *)param_1[3];
    uStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
LAB_0113b8bc:
    piVar1 = piStack_30;
    if (piStack_30 == (int *)0x0) {
LAB_0113b948:
      uVar5 = uStack_2c & 0xff;
    }
    else {
      iVar3 = (int)uStack_2c._2_2_;
      iVar8 = *(int *)(**(int **)(_UNK_0113bd8c + 0x113b8d0) + 0x10);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768();
      }
      iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 0x14);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768(iVar8);
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_0113b95c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar1,iVar8,0);
LAB_0113b95c:
      uVar5 = (*(code *)*puVar4)(piVar1,iVar3,puVar4[1]);
    }
    if (uVar5 == 0) goto LAB_0113bc0c;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar9 + 0x30);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_DeleteAccountConfirmationPopup__ShowAsync_1129750(&piStack_48,iVar9);
    uVar5 = uStack_44;
    piVar1 = piStack_48;
    uStack_44 = 0;
    piStack_48 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0113bd90 + 0x113b9b8) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_48 = piVar1;
    uStack_44 = uVar5;
    thunk_FUN_00ec5080(&piStack_48,0);
    uStack_2c = uStack_44;
    piStack_30 = piStack_48;
    iVar9 = *(int *)(**(int **)(_UNK_0113bd94 + 0x113b9f4) + 0x10);
    if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = FUN_00efd768();
    }
    piVar1 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar8 = (int)uStack_2c._2_2_;
      iVar9 = *(int *)(*(int *)(*(int *)(iVar9 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = FUN_00efd768();
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 4);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = FUN_00efd768(iVar9);
      }
      iVar3 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar9) {
            puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 200);
            goto LAB_0113baf4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar1,iVar9,1);
LAB_0113baf4:
      iVar9 = (*(code *)*puVar4)(piVar1,iVar8,puVar4[1]);
      if (iVar9 == 0) {
        param_1[4] = uStack_2c;
        *param_1 = 1;
        param_1[3] = (int)piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x011508f8(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_0113bd98 + 0x113bc58)
                       );
        return;
      }
      goto LAB_0113bb14;
    }
LAB_0113bba0:
    uVar5 = uStack_2c & 0xff;
  }
  else {
    if (*param_1 != 1) {
      iVar8 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                        (**(undefined4 **)(_UNK_0113bd70 + 0x113b740));
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_1112050
                (&piStack_48,iVar8,**(undefined4 **)(_UNK_0113bd74 + 0x113b760),
                 **(undefined4 **)(_UNK_0113bd78 + 0x113b76c),
                 **(undefined4 **)(_UNK_0113bd7c + 0x113b778),0,0);
      uVar5 = uStack_44;
      piVar1 = piStack_48;
      uStack_44 = 0;
      piStack_48 = (int *)0x0;
      if ((*(byte *)(*(int *)(**(int **)(_UNK_0113bd80 + 0x113b7a4) + 0x10) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      piStack_48 = piVar1;
      uStack_44 = uVar5;
      thunk_FUN_00ec5080(&piStack_48,0);
      uStack_2c = uStack_44;
      piStack_30 = piStack_48;
      iVar8 = *(int *)(**(int **)(_UNK_0113bd84 + 0x113b7e0) + 0x10);
      if ((*(byte *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768();
      }
      piVar1 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar3 = (int)uStack_2c._2_2_;
        iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 0x60) + 0xc) + 0x10);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = FUN_00efd768();
        }
        iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 4);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = FUN_00efd768(iVar8);
        }
        iVar2 = *piVar1;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar8) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
              goto LAB_0113b89c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar1,iVar8,1);
LAB_0113b89c:
        iVar8 = (*(code *)*puVar4)(piVar1,iVar3,puVar4[1]);
        if (iVar8 == 0) {
          param_1[4] = uStack_2c;
          *param_1 = 0;
          param_1[3] = (int)piStack_30;
          thunk_FUN_00ec5080(param_1 + 3,0);
          func_0x011508f8(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_0113bd88 + 0x113bad4));
          return;
        }
        goto LAB_0113b8bc;
      }
      goto LAB_0113b948;
    }
    piStack_30 = (int *)param_1[3];
    uStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
LAB_0113bb14:
    piVar1 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_0113bba0;
    iVar8 = (int)uStack_2c._2_2_;
    iVar9 = *(int *)(**(int **)(_UNK_0113bd9c + 0x113bb28) + 0x10);
    if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = FUN_00efd768();
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 0x14);
    if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = FUN_00efd768(iVar9);
    }
    iVar3 = *piVar1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_0113bbb4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar1,iVar9,0);
LAB_0113bbb4:
    uVar5 = (*(code *)*puVar4)(piVar1,iVar8,puVar4[1]);
  }
  if (uVar5 != 0) {
    iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0113bda0 + 0x113bbdc));
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_31 = Rotatelab_Networking_HiroController__DeleteAccountAsync_114c19c(iVar9,0);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_31,0);
  }
LAB_0113bc0c:
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}


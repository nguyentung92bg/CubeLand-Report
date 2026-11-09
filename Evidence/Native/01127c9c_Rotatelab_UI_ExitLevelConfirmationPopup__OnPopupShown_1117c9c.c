/* IL2CPP: Rotatelab.UI.ExitLevelConfirmationPopup$$OnPopupShown
void Rotatelab_UI_ExitLevelConfirmationPopup__OnPopupShown (Rotatelab_UI_ExitLevelConfirmationPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ExitLevelConfirmationPopup$$OnPopupShown
   void Rotatelab_UI_ExitLevelConfirmationPopup__OnPopupShown
   (Rotatelab_UI_ExitLevelConfirmationPopup_o* __this, const MethodInfo* method); */

void Rotatelab_UI_ExitLevelConfirmationPopup__OnPopupShown_1117c9c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_r1;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_01127f70 + 0x1127cb4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127f74 + 0x1127cc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127f78 + 0x1127cd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127f7c + 0x1127ce0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127f80 + 0x1127cec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127f84 + 0x1127cf8));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  Rotatelab_UI_PopupController__OnPopupShown_1124dbc(param_1,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x1c),0,0xc53b8000,0);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_FailProgressLossPage__ShowFirstPage_1117fa8(*(int *)(param_1 + 0x28));
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  piVar8 = *(int **)(_UNK_01127f88 + 0x1127d8c);
  iVar5 = *piVar8;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  puVar6 = *(undefined4 **)(iVar5 + 0x5c);
  iVar9 = puVar6[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar10 = *puVar6;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01127f8c + 0x1127ddc));
    System_Action___ctor_2b10bac(iVar9,uVar10,**(undefined4 **)(_UNK_01127f90 + 0x1127dfc),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar9;
    thunk_FUN_00ec5080(piVar8,iVar9);
  }
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_48,&uStack_38,iVar9,0,0);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  pcVar7 = (char *)(_UNK_01127f94 + 0x1127e48);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127f98 + 0x1127e68));
    *pcVar7 = '\x01';
  }
  puVar6 = *(undefined4 **)(**(int **)(_UNK_01127f9c + 0x1127e88) + 0x5c);
  uVar11 = *puVar6;
  uVar12 = puVar6[1];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1c,0);
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = uStack_5c;
  uVar1 = uStack_60;
  if (*(int *)(**(int **)(_UNK_01127fa0 + 0x1127ea8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_60,uVar10,uVar11,uVar12,0x3ecccccd,uVar1,uVar2,uVar3,uVar4,uStack_50,1,0,0,0,0,
             0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  iVar5 = *(int *)(**(int **)(_UNK_01127fa4 + 0x1127f38) + 0x74);
  if (iVar5 == 0) {
    FUN_00ec3934();
    iVar5 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_60,iVar5,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  return;
}


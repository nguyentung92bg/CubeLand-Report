/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnPopupShown
void Rotatelab_Currency_UI_HeartPurchasePopup__OnPopupShown (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnPopupShown
   void Rotatelab_Currency_UI_HeartPurchasePopup__OnPopupShown
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__OnPopupShown_1086334(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  pcVar8 = (char *)(_UNK_01096660 + 0x109634c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096664 + 0x1096360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096668 + 0x109636c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109666c + 0x1096378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096670 + 0x1096384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096674 + 0x1096390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096678 + 0x109639c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  Rotatelab_UI_PopupController__OnPopupShown_1124dbc(param_1,0);
  Rotatelab_Currency_UI_HeartPurchasePopup__RefreshContent_10866a0(param_1);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x1c),0,0xc53b8000,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_48,&uStack_38,0x3dcccccd,0);
  piVar12 = *(int **)(_UNK_0109667c + 0x1096444);
  iVar5 = *piVar12;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar12;
  }
  puVar7 = *(undefined4 **)(iVar5 + 0x5c);
  iVar9 = puVar7[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar7 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar10 = *puVar7;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01096680 + 0x1096494));
    System_Action___ctor_2b10bac(iVar9,uVar10,**(undefined4 **)(_UNK_01096684 + 0x10964b4),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar9;
    thunk_FUN_00ec5080(piVar12,iVar9);
  }
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_48,&uStack_38,iVar9,0,0);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  pcVar8 = (char *)(_UNK_01096688 + 0x10964fc);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109668c + 0x109651c));
    *pcVar8 = '\x01';
  }
  puVar7 = *(undefined4 **)(**(int **)(_UNK_01096690 + 0x109653c) + 0x5c);
  uVar11 = *puVar7;
  uVar6 = puVar7[1];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1b,0);
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = uStack_5c;
  uVar1 = uStack_60;
  if (*(int *)(**(int **)(_UNK_01096694 + 0x1096564) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_60,uVar10,uVar11,uVar6,0x3e99999a,uVar1,uVar2,uVar3,uVar4,uStack_50,1,0,0,0,0,0
            );
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar12 = *(int **)(_UNK_01096698 + 0x10965f0);
  iVar5 = *piVar12;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar12;
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x114);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar5,0,**(undefined4 **)(_UNK_0109669c + 0x1096628));
  uVar10 = Rotatelab_Currency_UI_HeartPurchasePopup__UpdateTimerCoroutine_1086cf4(param_1);
  uVar10 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar10,0);
  *(undefined4 *)(param_1 + 100) = uVar10;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 100),uVar10);
  return;
}


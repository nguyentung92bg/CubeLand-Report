/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnBuyWithRewardedAdButtonClicked
void Rotatelab_Currency_UI_HeartPurchasePopup__OnBuyWithRewardedAdButtonClicked (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnBuyWithRewardedAdButtonClicked
   void Rotatelab_Currency_UI_HeartPurchasePopup__OnBuyWithRewardedAdButtonClicked
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Currency_UI_HeartPurchasePopup__OnBuyWithRewardedAdButtonClicked_1087ce0
          (undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 unaff_r6;
  
  pcVar6 = (char *)(_UNK_01097dc4 + 0x1097cf4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097dc8 + 0x1097d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097dcc + 0x1097d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097dd0 + 0x1097d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097dd4 + 0x1097d2c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01097dd8 + 0x1097d40));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01097ddc + 0x1097d54));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_01097de0 + 0x1097d70),0);
  piVar4 = *(int **)(_UNK_01097de4 + 0x1097d84);
  iVar3 = *piVar4;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_00fbb428 + 0xfbb358);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbb42c + 0xfbb36c),uVar2,uVar5,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),uVar5);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),uVar2);
  puVar7 = *(undefined4 **)(_UNK_00fbb430 + 0xfbb3a0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x4c) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 0;
    iVar3 = Rotatelab_Ads_RewardedAdFormat__IsAdReady_10f4734(*(int *)(iVar3 + 0x4c),0);
    if (iVar3 == 0) {
      RotateAdLogicManager___TryShowRewarded_g__AdNotReady_14_0_fab5c8(iVar1);
    }
    else {
      RotateAdLogicManager__ShowRewarded_fab434(iVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}


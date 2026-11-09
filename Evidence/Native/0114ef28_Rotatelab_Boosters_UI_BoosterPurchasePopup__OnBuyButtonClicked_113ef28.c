/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$OnBuyButtonClicked
void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnBuyButtonClicked (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, bool withRewardedAd, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$OnBuyButtonClicked
   void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnBuyButtonClicked
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, bool withRewardedAd, const MethodInfo*
   method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnBuyButtonClicked_113ef28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_0114f370 + 0x114ef44);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f374 + 0x114ef58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f378 + 0x114ef64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f37c + 0x114ef70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f380 + 0x114ef7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f384 + 0x114ef88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f388 + 0x114ef94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f38c + 0x114efa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f390 + 0x114efac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f394 + 0x114efb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f398 + 0x114efc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f39c + 0x114efd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f3a0 + 0x114efdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f3a4 + 0x114efe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f3a8 + 0x114eff4));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
    puVar7 = *(undefined4 **)(_UNK_0114f3bc + 0x114f0b8);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    if (iVar1 < *(int *)(param_1 + 0x58)) {
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x3c),0,0);
      puVar7 = *(undefined4 **)(_UNK_0114f3d0 + 0x114f11c);
      uVar2 = thunk_FUN_00f00cdc(*puVar7);
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0114f3d4 + 0x114f138),0);
      if (*(int *)(**(int **)(_UNK_0114f3d8 + 0x114f14c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2ce9f2c(&uStack_28,0x40000000,uVar2,0,0,0);
      piVar5 = *(int **)(_UNK_0114f3dc + 0x114f184);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar5;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x11c);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_Int32Enum__bool__bool___Raise_23a5cbc
                (iVar1,0,1,1,**(undefined4 **)(_UNK_0114f3e0 + 0x114f1c4));
      Rotatelab_Boosters_UI_BoosterPurchasePopup__Hide_113ed2c(param_1);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0114f3e4 + 0x114f1e4));
      uVar2 = thunk_FUN_00f00cdc(*puVar7);
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0114f3e8 + 0x114f20c),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Shop_ShopPanelController__Show_10c1d9c(iVar1,1,uVar2,0);
    }
    else {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar5 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
      iVar1 = (int)((ulonglong)uVar8 >> 0x20);
      uVar4 = *(uint *)(param_1 + 0x58);
      (**(code **)(*piVar5 + 0xf8))
                (piVar5,iVar1,(uint)uVar8 - uVar4,
                 iVar1 - (((int)uVar4 >> 0x1f) + (uint)((uint)uVar8 < uVar4)),
                 *(undefined4 *)(*piVar5 + 0xfc));
      piVar5 = *(int **)(_UNK_0114f3c0 + 0x114f2ac);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar5;
      }
      Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPurchaseCompleted_113f3ec
                (param_1,uVar2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8));
      piVar5 = *(int **)(_UNK_0114f3c4 + 0x114f2e4);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar5;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x58);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
      if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc);
      uStack_28 = **(undefined4 **)(_UNK_0114f3c8 + 0x114f320);
      uStack_24 = 0xffffffff;
      uVar3 = System_Enum__ToString_2bab8c0(&uStack_28,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_int__object___Raise_23a4108
                (iVar1,uVar2,uVar3,**(undefined4 **)(_UNK_0114f3cc + 0x114f360));
    }
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114f3ac + 0x114f010));
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114f3b0 + 0x114f024));
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0114f3b4 + 0x114f040),0);
    if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc);
    uStack_28 = **(undefined4 **)(_UNK_0114f3b8 + 0x114f068);
    uStack_24 = 0xffffffff;
    uVar3 = System_Enum__ToString_2bab8c0(&uStack_28,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    RotateAdLogicManager__TryShowRewarded_fab33c(iVar1,uVar2,uVar3,0);
  }
  return;
}


/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$<OnBuyButtonClicked>b__21_0
void Rotatelab_Boosters_UI_BoosterPurchasePopup___OnBuyButtonClicked_b__21_0 (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$<OnBuyButtonClicked>b__21_0
   void Rotatelab_Boosters_UI_BoosterPurchasePopup___OnBuyButtonClicked_b__21_0
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup___OnBuyButtonClicked_b__21_0_113f64c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0114f77c + 0x114f664);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f780 + 0x114f678));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f784 + 0x114f684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f788 + 0x114f690));
    *pcVar4 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f78c + 0x114f6a4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x34) + 0x14);
  if (*(int *)(**(int **)(_UNK_0114f790 + 0x114f6d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar6 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar3,0);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_20 = 0;
  iVar2 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive_fe72e8
                    (iVar2,uVar3,(int)uVar6,uVar3);
  if (iVar2 != 0) {
    iVar2 = Rotatelab_RotateConstants__get_TotalRewardedUseCount_1078e84(0);
    Rotatelab_RotateConstants__set_TotalRewardedUseCount_1078ee0(iVar2 + 1,0);
  }
  piVar5 = *(int **)(_UNK_0114f794 + 0x114f74c);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  uVar3 = **(undefined4 **)(iVar2 + 0x5c);
  pcVar4 = (char *)(_UNK_0114f5f8 + 0x114f40c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f5fc + 0x114f420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f600 + 0x114f42c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f604 + 0x114f438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f608 + 0x114f444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f60c + 0x114f450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f610 + 0x114f45c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f614 + 0x114f468));
    *pcVar4 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f618 + 0x114f47c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar2,10,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f61c + 0x114f4ac));
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar2,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc),1,0,0,0,0);
  piVar5 = *(int **)(_UNK_0114f620 + 0x114f504);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xb0);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum___Raise_23a2cdc
            (iVar2,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc),
             **(undefined4 **)(_UNK_0114f624 + 0x114f550));
  piVar5 = *(int **)(_UNK_0114f628 + 0x114f564);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x28);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_1c = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc);
  uStack_24 = **(undefined4 **)(_UNK_0114f62c + 0x114f5a0);
  uStack_20 = 0xffffffff;
  uVar1 = System_Enum__ToString_2bab8c0(&uStack_24,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object___Raise_23a4f8c
            (iVar2,uVar1,uVar3,**(undefined4 **)(_UNK_0114f630 + 0x114f5e0));
  Rotatelab_Boosters_UI_BoosterPurchasePopup__Hide_113ed2c(param_1);
  return;
}


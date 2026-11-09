/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$OnPurchaseCompleted
void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPurchaseCompleted (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, int32_t amount, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$OnPurchaseCompleted
   void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPurchaseCompleted
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, int32_t amount, System_String_o* source,
   const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPurchaseCompleted_113f3ec
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_0114f5f8 + 0x114f40c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f5fc + 0x114f420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f600 + 0x114f42c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f604 + 0x114f438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f608 + 0x114f444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f60c + 0x114f450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f610 + 0x114f45c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f614 + 0x114f468));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f618 + 0x114f47c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,10,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f61c + 0x114f4ac));
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar1,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc),param_2,param_2 >> 0x1f,0,0,0);
  piVar4 = *(int **)(_UNK_0114f620 + 0x114f504);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xb0);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum___Raise_23a2cdc
            (iVar1,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc),
             **(undefined4 **)(_UNK_0114f624 + 0x114f550));
  piVar4 = *(int **)(_UNK_0114f628 + 0x114f564);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x28);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_1c = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc);
  uStack_24 = **(undefined4 **)(_UNK_0114f62c + 0x114f5a0);
  uStack_20 = 0xffffffff;
  uVar2 = System_Enum__ToString_2bab8c0(&uStack_24,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object___Raise_23a4f8c
            (iVar1,uVar2,param_3,**(undefined4 **)(_UNK_0114f630 + 0x114f5e0));
  Rotatelab_Boosters_UI_BoosterPurchasePopup__Hide_113ed2c(param_1);
  return;
}


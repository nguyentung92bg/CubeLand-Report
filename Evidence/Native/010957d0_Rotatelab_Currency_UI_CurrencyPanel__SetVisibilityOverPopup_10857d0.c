/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$SetVisibilityOverPopup
void Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup (Rotatelab_Currency_UI_CurrencyPanel_o* __this, bool isVisible, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$SetVisibilityOverPopup
   void Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, bool isVisible, const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01095890 + 0x10957e8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095894 + 0x10957fc));
    *pcVar5 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = extraout_r3;
  }
  else {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01095898 + 0x1095828));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = UnityEngine_Transform__GetSiblingIndex_3616f78(iVar2,0);
    uVar4 = extraout_r3_00;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(iRam03626f10 + 0x3626e9c);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam03626f14 + 0x3626eb0),uVar3,0,uVar4,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    *pcVar5 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam03626f18 + 0x3626edc);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03626f1c + 0x3626eec);
      *(code **)(iRam03626f20 + 0x3626efc) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03626f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}


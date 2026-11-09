/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnPopupHidden
void Rotatelab_Currency_UI_HeartPurchasePopup__OnPopupHidden (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnPopupHidden
   void Rotatelab_Currency_UI_HeartPurchasePopup__OnPopupHidden
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__OnPopupHidden_1086d6c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01096e28 + 0x1096d80);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096e2c + 0x1096d94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096e30 + 0x1096da0));
    *pcVar2 = '\x01';
  }
  Rotatelab_UI_PopupController__OnPopupHidden_1124dc0(param_1,0);
  piVar3 = *(int **)(_UNK_01096e34 + 0x1096dc0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_01096e38 + 0x1096df8));
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01096e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


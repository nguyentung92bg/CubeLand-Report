/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<OnCurrencyObjectNeedToVisibleHandler>b__14_1
void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_1 (Rotatelab_Currency_UI_CurrencyPanel_o* __this, DG_Tweening_Sequence_o* sequence, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<OnCurrencyObjectNeedToVisibleHandler>b__14_1
   void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_1
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, DG_Tweening_Sequence_o* sequence, const
   MethodInfo* method); */

int Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_1_1085c08
              (int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar1,0,0x3e4ccccd,0);
  iVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_116cf94(param_2,uVar1,0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    DG_Tweening_Sequence__DoInsert_116959c(param_2,uVar1,*(undefined4 *)(param_2 + 0x60));
  }
  return param_2;
}


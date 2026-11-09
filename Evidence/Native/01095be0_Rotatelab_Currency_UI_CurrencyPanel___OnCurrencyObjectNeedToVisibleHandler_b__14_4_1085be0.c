/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<OnCurrencyObjectNeedToVisibleHandler>b__14_4
void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_4 (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<OnCurrencyObjectNeedToVisibleHandler>b__14_4
   void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_4
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_4_1085be0
               (int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_039b803c + 0x39b7fc0);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b8040 + 0x39b7fd4),0,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b8044 + 0x39b800c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b8048 + 0x39b801c);
    *(code **)(_UNK_039b804c + 0x39b802c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x039b8038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar3,0);
  return;
}


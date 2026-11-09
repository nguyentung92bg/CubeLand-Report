/* IL2CPP: Rotatelab.UI.CurrencyListenerText$$OnCurrencyChanged
void Rotatelab_UI_CurrencyListenerText__OnCurrencyChanged (Rotatelab_UI_CurrencyListenerText_o* __this, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CurrencyListenerText$$OnCurrencyChanged
   void Rotatelab_UI_CurrencyListenerText__OnCurrencyChanged (Rotatelab_UI_CurrencyListenerText_o*
   __this, int64_t amount, const MethodInfo* method); */

void Rotatelab_UI_CurrencyListenerText__OnCurrencyChanged_1115f1c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01126004 + 0x1125f38);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126008 + 0x1125f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112600c + 0x1125f58));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = FUN_00f88368(param_3,param_4);
    TMPro_TMP_Text__SetText_34ffc64
              (piVar3,**(undefined4 **)(_UNK_01126014 + 0x1125ff8),uVar1,0,0,0,0,0,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01126010 + 0x1125f7c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Utilities__AbbreviateNumber_107dbe8(param_3,param_4,2,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01125fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x2b0))(piVar3,uVar1,*(undefined4 *)(*piVar3 + 0x2b4));
  return;
}


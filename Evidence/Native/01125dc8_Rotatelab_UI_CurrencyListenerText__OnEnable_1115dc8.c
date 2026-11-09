/* IL2CPP: Rotatelab.UI.CurrencyListenerText$$OnEnable
void Rotatelab_UI_CurrencyListenerText__OnEnable (Rotatelab_UI_CurrencyListenerText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CurrencyListenerText$$OnEnable
   void Rotatelab_UI_CurrencyListenerText__OnEnable (Rotatelab_UI_CurrencyListenerText_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_CurrencyListenerText__OnEnable_1115dc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_01125ef8 + 0x1125de0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125efc + 0x1125df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125f00 + 0x1125e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125f04 + 0x1125e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01125f08 + 0x1125e18));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01125f0c + 0x1125e2c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                    (iVar1,*(undefined4 *)(param_1 + 0x14),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01125f10 + 0x1125e64));
  System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_01125f14 + 0x1125e80),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableValue_long___add_OnValueChanged_185d4e4
            (iVar1,uVar2,**(undefined4 **)(_UNK_01125f18 + 0x1125ea4));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                    (iVar1,*(undefined4 *)(param_1 + 0x14),0);
  uVar5 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar2,0);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  Rotatelab_UI_CurrencyListenerText__OnCurrencyChanged_1115f1c(param_1,uVar2,(int)uVar5,uVar2);
  return;
}


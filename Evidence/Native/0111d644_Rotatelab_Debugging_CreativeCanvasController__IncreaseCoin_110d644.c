/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$IncreaseCoin
void Rotatelab_Debugging_CreativeCanvasController__IncreaseCoin (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$IncreaseCoin
   void Rotatelab_Debugging_CreativeCanvasController__IncreaseCoin
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__IncreaseCoin_110d644(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_0111d710 + 0x111d65c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d714 + 0x111d670));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iStack_14 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111d718 + 0x111d688));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
  iStack_14 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  iStack_14 = iStack_14 + 1000;
  uVar2 = System_Int32__ToString_2b6b9ec(&iStack_14,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_InputField__set_text_34eb818(iVar4,uVar2,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Debugging_CreativeCanvasController__OnCoinsModified_110d71c
            (param_1,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x160));
  return;
}


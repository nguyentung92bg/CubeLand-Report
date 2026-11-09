/* IL2CPP: Rotatelab.Currency.CurrencyManager$$OnLevelSucceededHandler
void Rotatelab_Currency_CurrencyManager__OnLevelSucceededHandler (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$OnLevelSucceededHandler
   void Rotatelab_Currency_CurrencyManager__OnLevelSucceededHandler
   (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_CurrencyManager__OnLevelSucceededHandler_1083cec(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = (char *)(_UNK_01093db0 + 0x1093d04);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093db4 + 0x1093d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093db8 + 0x1093d24));
    *pcVar3 = '\x01';
  }
  piVar2 = (int *)(param_1 + 0x28);
  iVar5 = *piVar2;
  iVar6 = *(int *)(param_1 + 0x2c);
  if ((int)(uint)(iVar5 == 0) <= iVar6) {
    piVar4 = *(int **)(_UNK_01093dbc + 0x1093d4c);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar2;
      iVar6 = *(int *)(param_1 + 0x2c);
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum__long___Raise_23a4840
              (iVar1,0,iVar5,iVar6,**(undefined4 **)(_UNK_01093dc0 + 0x1093d90));
  }
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


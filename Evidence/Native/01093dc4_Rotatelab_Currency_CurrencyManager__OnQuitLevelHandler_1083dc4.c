/* IL2CPP: Rotatelab.Currency.CurrencyManager$$OnQuitLevelHandler
void Rotatelab_Currency_CurrencyManager__OnQuitLevelHandler (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Currency.CurrencyManager$$OnQuitLevelHandler
   void Rotatelab_Currency_CurrencyManager__OnQuitLevelHandler
   (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_CurrencyManager__OnQuitLevelHandler_1083dc4(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  
  puVar2 = (uint *)(param_1 + 0x28);
  if ((int)(uint)(*puVar2 == 0) <= *(int *)(param_1 + 0x2c)) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = *(int **)(iVar1 + 0x28);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    (**(code **)(*piVar3 + 0xf8))
              (piVar3,iVar1,(uint)uVar4 - *puVar2,
               iVar1 - (*(int *)(param_1 + 0x2c) + (uint)((uint)uVar4 < *puVar2)),
               *(undefined4 *)(*piVar3 + 0xfc));
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


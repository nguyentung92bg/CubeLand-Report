/* IL2CPP: Rotatelab.Currency.CurrencyManager$$OnTemporaryCoinsCollected
void Rotatelab_Currency_CurrencyManager__OnTemporaryCoinsCollected (Rotatelab_Currency_CurrencyManager_o* __this, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Currency.CurrencyManager$$OnTemporaryCoinsCollected
   void Rotatelab_Currency_CurrencyManager__OnTemporaryCoinsCollected
   (Rotatelab_Currency_CurrencyManager_o* __this, int64_t amount, const MethodInfo* method); */

void Rotatelab_Currency_CurrencyManager__OnTemporaryCoinsCollected_1083c68
               (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar3 + param_3;
  *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_4 + (uint)CARRY4(uVar3,param_3);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = *(int **)(iVar2 + 0x28);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  lVar5 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
  lVar1 = lVar5 + CONCAT44(param_4,param_3);
  (**(code **)(*piVar4 + 0xf8))
            (piVar4,(int)((ulonglong)lVar5 >> 0x20),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
             *(undefined4 *)(*piVar4 + 0xfc));
  return;
}


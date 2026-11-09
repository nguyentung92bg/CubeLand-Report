/* IL2CPP: Rotatelab.Currency.CurrencyManager$$get_Magnet
Rotatelab_ObservableBooster_o* Rotatelab_Currency_CurrencyManager__get_Magnet (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Currency.CurrencyManager$$get_Magnet
   Rotatelab_ObservableBooster_o* Rotatelab_Currency_CurrencyManager__get_Magnet
   (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Currency_CurrencyManager__get_Magnet_108333c(void)

{
  int iVar1;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x40);
}


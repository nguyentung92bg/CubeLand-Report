/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<TrySendPurchaseToSatoriAsync>b__52_0
bool Rotatelab_IAP_PurchasesListener___c___TrySendPurchaseToSatoriAsync_b__52_0 (Rotatelab_IAP_PurchasesListener___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<TrySendPurchaseToSatoriAsync>b__52_0
   bool Rotatelab_IAP_PurchasesListener___c___TrySendPurchaseToSatoriAsync_b__52_0
   (Rotatelab_IAP_PurchasesListener___c_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_IAP_PurchasesListener___c___TrySendPurchaseToSatoriAsync_b__52_0_109bffc(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010ac060 + 0x10ac00c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac064 + 0x10ac020));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ac068 + 0x10ac034));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x24) + 0x1c);
}


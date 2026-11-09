/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnDeferredPurchase
void Rotatelab_IAP_PurchasesListener__OnDeferredPurchase (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnDeferredPurchase
   void Rotatelab_IAP_PurchasesListener__OnDeferredPurchase (Rotatelab_IAP_PurchasesListener_o*
   __this, UnityEngine_Purchasing_Product_o* product, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnDeferredPurchase_109976c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_010a9864 + 0x10a9788);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9868 + 0x10a979c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a986c + 0x10a97a8));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = 0;
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 8) + 8);
  uVar1 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010a9870 + 0x10a97e0),uVar4,0);
  if (*(int *)(**(int **)(_UNK_010a9874 + 0x10a97fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar2 = System_String__op_Equality_2a0975c(uVar5,uVar4,0);
  if (iVar2 != 0) {
    Rotatelab_IAP_PurchasesListener__PurchaseFailed_1097858
              (param_1,param_2,*(undefined4 *)(param_1 + 0x2c),0,0,0);
  }
  return;
}


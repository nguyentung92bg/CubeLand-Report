/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<RetryInitializationAsync>b__19_0
UnityEngine_Purchasing_ProductDefinition_o* Rotatelab_IAP_PurchasesListener___c___RetryInitializationAsync_b__19_0 (Rotatelab_IAP_PurchasesListener___c_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<RetryInitializationAsync>b__19_0
   UnityEngine_Purchasing_ProductDefinition_o*
   Rotatelab_IAP_PurchasesListener___c___RetryInitializationAsync_b__19_0
   (Rotatelab_IAP_PurchasesListener___c_o* __this, System_String_o* id, const MethodInfo* method);
    */

undefined4
Rotatelab_IAP_PurchasesListener___c___RetryInitializationAsync_b__19_0_109be68
          (undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010abed0 + 0x10abe7c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abed4 + 0x10abe90));
    *pcVar3 = '\x01';
  }
  uVar1 = Rotatelab_IAP_PurchasesListener__GetProductType_10969e4(param_2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010abed8 + 0x10abeb0));
  UnityEngine_Purchasing_ProductDefinition___ctor_32adeac(uVar2,param_2,uVar1,0);
  return uVar2;
}


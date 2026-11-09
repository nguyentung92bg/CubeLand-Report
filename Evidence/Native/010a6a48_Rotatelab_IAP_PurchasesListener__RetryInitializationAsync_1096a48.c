/* IL2CPP: Rotatelab.IAP.PurchasesListener$$RetryInitializationAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_IAP_PurchasesListener__RetryInitializationAsync (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$RetryInitializationAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_IAP_PurchasesListener__RetryInitializationAsync
   (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010a6ad8 + 0x10a6a60);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6adc + 0x10a6a74));
    *pcVar1 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  thunk_FUN_00ec5080(&uStack_1c,0);
  uStack_18 = param_1;
  thunk_FUN_00ec5080(&uStack_18,param_1);
  uStack_20 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_PurchasesListener__RetryInitializationAsync_d__19__13ebe44
            (&uStack_1c,&uStack_20,**(undefined4 **)(_UNK_010a6ae0 + 0x10a6abc));
  return 0;
}


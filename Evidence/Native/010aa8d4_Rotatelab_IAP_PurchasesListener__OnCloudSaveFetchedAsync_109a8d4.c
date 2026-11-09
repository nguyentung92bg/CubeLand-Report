/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnCloudSaveFetchedAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync (Rotatelab_IAP_PurchasesListener_o* __this, bool isRemoteDataApplied, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnCloudSaveFetchedAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync
   (Rotatelab_IAP_PurchasesListener_o* __this, bool isRemoteDataApplied, const MethodInfo* method);
    */

undefined4
Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync_109a8d4
          (undefined4 param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_010aa974 + 0x10aa8f0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa978 + 0x10aa904));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4);
  uStack_24 = param_1;
  thunk_FUN_00ec5080(&uStack_24,param_1);
  uStack_30 = 0xffffffff;
  uStack_28 = CONCAT31(uStack_28._1_3_,param_2);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_PurchasesListener__OnCloudSaveFetchedAsync_d__45__13ebe10
            ((uint)&uStack_30 | 4,&uStack_30,**(undefined4 **)(_UNK_010aa97c + 0x10aa95c));
  return 0;
}


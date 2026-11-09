/* IL2CPP: Rotatelab.IAP.PurchasesListener$$TrySendPurchaseToSatoriAsync
Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync (Rotatelab_IAP_PurchasesListener_o* __this, double localizedPrice, System_String_o* isoCurrencyCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$TrySendPurchaseToSatoriAsync
   Cysharp_Threading_Tasks_UniTask_bool__o
   Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync (Rotatelab_IAP_PurchasesListener_o*
   __this, double localizedPrice, System_String_o* isoCurrencyCode, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_109b090
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  char *pcVar1;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar1 = (char *)(_UNK_010ab190 + 0x10ab0b4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab194 + 0x10ab0c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab198 + 0x10ab0d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab19c + 0x10ab0e0));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  lStack_40 = (ulonglong)uStack_2c << 0x20;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  thunk_FUN_00ec5080((uint)&uStack_50 | 4,0);
  uStack_38 = param_5;
  lStack_40 = CONCAT44(param_4,param_3);
  thunk_FUN_00ec5080(&uStack_38,param_5);
  uStack_50 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_010ab1a0 + 0x10ab148) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_d__52__MoveNext_109eef0(&uStack_50);
  func_0x0109f558(&uStack_58,(uint)&uStack_50 | 4,**(undefined4 **)(_UNK_010ab1a4 + 0x10ab174));
  *param_1 = uStack_58;
  param_1[1] = uStack_54;
  return;
}


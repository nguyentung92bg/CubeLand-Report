/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnBaseOfferShownHandler
void Rotatelab_IAP_PurchasesListener__OnBaseOfferShownHandler (Rotatelab_IAP_PurchasesListener_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnBaseOfferShownHandler
   void Rotatelab_IAP_PurchasesListener__OnBaseOfferShownHandler (Rotatelab_IAP_PurchasesListener_o*
   __this, bool isActive, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnBaseOfferShownHandler_109a7fc(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    pcVar2 = (char *)(_UNK_010a6fdc + 0x10a6eac);
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe0 + 0x10a6ec0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe4 + 0x10a6ecc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe8 + 0x10a6ed8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fec + 0x10a6ee4));
      *pcVar2 = '\x01';
    }
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    bVar4 = *(char *)(param_1 + 0x28) != '\0';
    iVar1 = 0;
    if (bVar4) {
      iVar1 = *(int *)(param_1 + 0x20);
    }
    uStack_20 = 0;
    if (bVar4 && iVar1 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_20,*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_010a6ff0 + 0x10a6f2c));
      puVar3 = *(undefined4 **)(_UNK_010a6ff4 + 0x10a6f4c);
      while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                               (&uStack_20,*puVar3), iVar1 != 0) {
        Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(param_1,uStack_14);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_20,**(undefined4 **)(_UNK_010a6ff8 + 0x10a6f78));
    }
    return;
  }
  Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48();
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&stack0xfffffff7,0);
  return;
}


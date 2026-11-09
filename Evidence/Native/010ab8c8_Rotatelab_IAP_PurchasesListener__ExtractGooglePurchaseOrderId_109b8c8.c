/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ExtractGooglePurchaseOrderId
System_String_o* Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseOrderId (System_String_o* receipt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ExtractGooglePurchaseOrderId
   System_String_o* Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseOrderId (System_String_o*
   receipt, const MethodInfo* method); */

undefined4 Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseOrderId_109b8c8(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010aba68 + 0x10ab8dc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aba6c + 0x10ab8f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aba70 + 0x10ab8fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aba74 + 0x10ab908));
    *pcVar2 = '\x01';
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (param_1,**(undefined4 **)(_UNK_010aba78 + 0x10ab91c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010aba7c + 0x10ab940));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010aba80 + 0x10ab964));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 8);
}


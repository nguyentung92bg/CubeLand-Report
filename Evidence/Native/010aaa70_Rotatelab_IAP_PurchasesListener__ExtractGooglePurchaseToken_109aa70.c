/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ExtractGooglePurchaseToken
System_String_o* Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseToken (System_String_o* receipt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ExtractGooglePurchaseToken
   System_String_o* Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseToken (System_String_o*
   receipt, const MethodInfo* method); */

undefined4 Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseToken_109aa70(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010aac0c + 0x10aaa84);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aac10 + 0x10aaa98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aac14 + 0x10aaaa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aac18 + 0x10aaab0));
    *pcVar2 = '\x01';
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (param_1,**(undefined4 **)(_UNK_010aac1c + 0x10aaac4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010aac20 + 0x10aaae8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010aac24 + 0x10aab0c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}


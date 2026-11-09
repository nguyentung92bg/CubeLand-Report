/* IL2CPP: Rotatelab.IAP.PurchasesListener$$IsInCatalog
bool Rotatelab_IAP_PurchasesListener__IsInCatalog (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$IsInCatalog
   bool Rotatelab_IAP_PurchasesListener__IsInCatalog (Rotatelab_IAP_PurchasesListener_o* __this,
   System_String_o* productId, const MethodInfo* method); */

bool Rotatelab_IAP_PurchasesListener__IsInCatalog_1099f28(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010a9f88 + 0x10a9f40);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9f8c + 0x10a9f54));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = System_Array__IndexOf_object__16445f0
                        (*(undefined4 *)(iVar1 + 8),param_2,0,*(int *)(iVar1 + 0xc),
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_010a9f90 +
                                                                                  0x10a9f7c) + 0x10)
                                                              + 0x60) + 100) + 0x10) + 0x60) + 0xa4)
                        );
      return iVar1 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


/* IL2CPP: Rotatelab.IAP.PurchasesListener$$HasUnfinishedPurchase
bool Rotatelab_IAP_PurchasesListener__HasUnfinishedPurchase (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$HasUnfinishedPurchase
   bool Rotatelab_IAP_PurchasesListener__HasUnfinishedPurchase (Rotatelab_IAP_PurchasesListener_o*
   __this, System_String_o* productId, const MethodInfo* method); */

uint Rotatelab_IAP_PurchasesListener__HasUnfinishedPurchase_1099f94(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010aa024 + 0x10a9fac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa028 + 0x10a9fc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa02c + 0x10a9fcc));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                    (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_010aa030 + 0x10a9ff0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Collections_Generic_Dictionary_object__object___FindEntry_2069b38
                    (iVar1,param_2,
                     *(undefined4 *)
                      (*(int *)(*(int *)(**(int **)(_UNK_010aa034 + 0x10aa018) + 0x10) + 0x60) +
                      0x78));
  return ~uVar2 >> 0x1f;
}


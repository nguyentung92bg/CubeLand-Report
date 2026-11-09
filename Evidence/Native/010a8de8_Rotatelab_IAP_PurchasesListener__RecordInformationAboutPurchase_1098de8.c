/* IL2CPP: Rotatelab.IAP.PurchasesListener$$RecordInformationAboutPurchase
void Rotatelab_IAP_PurchasesListener__RecordInformationAboutPurchase (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$RecordInformationAboutPurchase
   void Rotatelab_IAP_PurchasesListener__RecordInformationAboutPurchase
   (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* info, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__RecordInformationAboutPurchase_1098de8
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_010a8fa4 + 0x10a8e04);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fa8 + 0x10a8e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fac + 0x10a8e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fb0 + 0x10a8e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fb4 + 0x10a8e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fb8 + 0x10a8e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fbc + 0x10a8e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fc0 + 0x10a8e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8fc4 + 0x10a8e6c));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedList_object___get_Count_1a8a1b0
                    (*(int *)(param_1 + 0x38),**(undefined4 **)(_UNK_010a8fc8 + 0x10a8e9c));
  if (6 < iVar1) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedList_object___RemoveAt_1a8a414
              (*(int *)(param_1 + 0x38),0,0,**(undefined4 **)(_UNK_010a8fcc + 0x10a8ed0));
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_010a8fd0 + 0x10a8ee4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_UtcNow_2b4a27c(&uStack_18,0);
  if (*(int *)(**(int **)(_UNK_010a8fd4 + 0x10a8f14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  uVar2 = System_DateTime__ToString_2b4b634
                    (&uStack_18,**(undefined4 **)(_UNK_010a8fd8 + 0x10a8f40),uVar2,0);
  uVar2 = System_String__Concat_2a0bdec
                    (**(undefined4 **)(_UNK_010a8fdc + 0x10a8f5c),uVar2,
                     **(undefined4 **)(_UNK_010a8fe0 + 0x10a8f68),param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedList_object___Add_1a8a340
            (iVar1,uVar2,1,**(undefined4 **)(_UNK_010a8fe4 + 0x10a8f94));
  return;
}


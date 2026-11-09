/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnAdjustVerificationResultReturned
void Rotatelab_IAP_PurchasesListener__OnAdjustVerificationResultReturned (Rotatelab_IAP_PurchasesListener_o* __this, AdjustSdk_AdjustPurchaseVerificationResult_o* result, UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnAdjustVerificationResultReturned
   void Rotatelab_IAP_PurchasesListener__OnAdjustVerificationResultReturned
   (Rotatelab_IAP_PurchasesListener_o* __this, AdjustSdk_AdjustPurchaseVerificationResult_o* result,
   UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnAdjustVerificationResultReturned_109ac38
               (undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_010ab018 + 0x10aac5c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab01c + 0x10aac70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab020 + 0x10aac7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab024 + 0x10aac88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab028 + 0x10aac94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab02c + 0x10aaca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab030 + 0x10aacac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab034 + 0x10aacb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab038 + 0x10aacc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab03c + 0x10aacd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab040 + 0x10aacdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab044 + 0x10aace8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab048 + 0x10aacf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab04c + 0x10aad00));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = *(int **)(_UNK_010ab050 + 0x10aad20);
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                    (uVar9,**(undefined4 **)(_UNK_010ab054 + 0x10aad48),0);
  uVar8 = 0;
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = 0;
    iVar1 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                      (uVar9,**(undefined4 **)(_UNK_010ab058 + 0x10aad84),0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar8 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                        (uVar9,**(undefined4 **)(_UNK_010ab05c + 0x10aadb8),0);
      uVar8 = uVar8 ^ 1;
    }
  }
  uStack_28 = *(undefined4 *)(param_2 + 8);
  iVar1 = *(int *)(_UNK_010ab060 + 0x10aadd4);
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_28);
  uVar2 = System_String__Format_2a0c2b4
                    (**(undefined4 **)(_UNK_010ab064 + 0x10aadf8),uVar9,uVar2,
                     *(undefined4 *)(param_2 + 0xc),0);
  piVar6 = *(int **)(_UNK_010ab068 + 0x10aae10);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar2,0);
  if (uVar8 == 0) {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(param_4 + 0xc);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ab06c + 0x10aaee0));
    AdjustSdk_AdjustEvent___ctor_f9b4cc(iVar3,uVar2,0);
    piVar6 = *(int **)(_UNK_010ab070 + 0x10aaf04);
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar6;
    }
    piVar6 = *(int **)(_UNK_010ab074 + 0x10aaf24);
    uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x78);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934(*piVar6);
    }
    pcVar5 = (char *)(_UNK_010ab078 + 0x10aaf4c);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010ab07c + 0x10aaf60));
      *pcVar5 = '\x01';
    }
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar6;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    AdjustSdk_AdjustEvent__AddPartnerParameter_f9b58c(iVar3,uVar2,**(undefined4 **)(iVar4 + 0x5c),0)
    ;
    AdjustSdk_Adjust__TrackEvent_f89a80(iVar3,0);
    uStack_2c = *(undefined4 *)(param_2 + 8);
    uVar7 = *(undefined4 *)(param_4 + 8);
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_2c);
    uVar9 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_010ab080 + 0x10aafe8),uVar7,uVar2,uVar9,0);
    Rotatelab_IAP_PurchasesListener__RecordInformationAboutPurchase_1098de8(param_1,uVar9);
    Rotatelab_IAP_PurchasesListener__PurchaseComplete_109a988(param_1,param_3,param_4);
  }
  else {
    uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010ab084 + 0x10aae48),uVar9,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b238c(uVar2,0);
    uStack_30 = *(undefined4 *)(param_2 + 8);
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_30);
    uVar9 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010ab088 + 0x10aae9c),uVar2,uVar9,0);
    Rotatelab_IAP_PurchasesListener__PurchaseFailed_1097858
              (param_1,param_3,param_4,**(undefined4 **)(_UNK_010ab08c + 0x10aaeb0),uVar9,
               *(undefined4 *)(param_2 + 0xc));
  }
  return;
}


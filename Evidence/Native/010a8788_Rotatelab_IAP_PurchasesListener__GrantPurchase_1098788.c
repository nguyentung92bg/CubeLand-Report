/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GrantPurchase
int32_t Rotatelab_IAP_PurchasesListener__GrantPurchase (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010a8a68) */
/* WARNING: Removing unreachable block (ram,0x010a8a08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GrantPurchase
   int32_t Rotatelab_IAP_PurchasesListener__GrantPurchase (Rotatelab_IAP_PurchasesListener_o*
   __this, UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

undefined4
Rotatelab_IAP_PurchasesListener__GrantPurchase_1098788(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_010a8afc + 0x10a87a8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b00 + 0x10a87bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b04 + 0x10a87c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b08 + 0x10a87d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b0c + 0x10a87e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b10 + 0x10a87ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b14 + 0x10a87f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b18 + 0x10a8804));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8b1c + 0x10a8810));
    *pcVar4 = '\x01';
  }
  puVar10 = *(undefined4 **)(_UNK_010a8b20 + 0x10a8824);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar1 + 0x11) == '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(undefined4 *)(param_3 + 8);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = *(undefined4 *)(iVar2 + 0x20);
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
    uVar6 = *(undefined4 *)(iVar2 + 0x18);
    uVar7 = *(undefined4 *)(iVar2 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010a8b24 + 0x10a88ac) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar11 = System_Decimal__op_Explicit_2bda9c4(uVar6,uVar7,uVar9,uVar5,0);
    piVar8 = *(int **)(param_3 + 0x10);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = (**(code **)(*piVar8 + 0xe0))(piVar8,*(undefined4 *)(*piVar8 + 0xe4));
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    System_ValueTuple_object__double__object____ctor_1d6d940
              (&uStack_40,uVar3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar5,
               **(undefined4 **)(_UNK_010a8b28 + 0x10a8930));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedList_ValueTuple_object__double__object____Add_1a89b5c
              (iVar1,uStack_38,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,1,
               **(undefined4 **)(_UNK_010a8b2c + 0x10a8978));
    puVar10 = *(undefined4 **)(_UNK_010a8b30 + 0x10a89b0);
  }
  else if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(param_3 + 0x10);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0xe8))(piVar8,0,*(undefined4 *)(*piVar8 + 0xec));
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                    (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_010a8b34 + 0x10a89f4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_Dictionary_object__object___Remove_206ac28
                    (iVar1,*(undefined4 *)(param_3 + 8),**(undefined4 **)(_UNK_010a8b38 + 0x10a8a2c)
                    );
  if (iVar1 != 0) {
    piVar8 = *(int **)(param_1 + 0x40);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0xf0))(piVar8,*(undefined4 *)(*piVar8 + 0xf4));
  }
  uVar5 = *(undefined4 *)(param_3 + 8);
  uVar3 = Rotatelab_IAP_PurchasesListener__GetPurchaseOrderId_1098d04(param_2);
  uVar3 = System_String__Concat_2a0bdec
                    (**(undefined4 **)(_UNK_010a8b3c + 0x10a8a8c),uVar5,
                     **(undefined4 **)(_UNK_010a8b40 + 0x10a8a98),uVar3,0);
  Rotatelab_IAP_PurchasesListener__RecordInformationAboutPurchase_1098de8(param_1,uVar3);
  Rotatelab_IAP_PurchasesListener__LogAppleTransactionToFirebase_1098fe8(param_2);
  Rotatelab_IAP_PurchasesListener__VerifyPurchaseWithAdjust_109916c(param_1,param_2,param_3);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar1 != 0) {
    Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


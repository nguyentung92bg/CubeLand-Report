/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetPurchaseOrderId
System_String_o* Rotatelab_IAP_PurchasesListener__GetPurchaseOrderId (UnityEngine_Purchasing_Product_o* product, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetPurchaseOrderId
   System_String_o* Rotatelab_IAP_PurchasesListener__GetPurchaseOrderId
   (UnityEngine_Purchasing_Product_o* product, const MethodInfo* method); */

undefined4 Rotatelab_IAP_PurchasesListener__GetPurchaseOrderId_1098d04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar4;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010a8dd4 + 0x10a8d18);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8dd8 + 0x10a8d2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8ddc + 0x10a8d38));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010a8de0 + 0x10a8d4c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 != 0xb) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
    if (iVar1 == 8) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      return *(undefined4 *)(param_1 + 0x14);
    }
    return **(undefined4 **)(_UNK_010a8de4 + 0x10a8dd0);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Purchasing_Product__get_receipt_32976fc(param_1,0);
  pcVar5 = (char *)(_UNK_010aba68 + 0x10ab8dc);
  uVar3 = extraout_r2;
  uVar4 = extraout_r3;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aba6c + 0x10ab8f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aba70 + 0x10ab8fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aba74 + 0x10ab908));
    *pcVar5 = '\x01';
    uVar3 = extraout_r2_00;
    uVar4 = extraout_r3_00;
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (uVar2,**(undefined4 **)(_UNK_010aba78 + 0x10ab91c),uVar3,uVar4,unaff_r4,
                     unaff_r5,unaff_r11,unaff_lr);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010aba7c + 0x10ab940),
                     extraout_r2_01,extraout_r3_01,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                    (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010aba80 + 0x10ab964),
                     extraout_r2_02,extraout_r3_02,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 8);
}


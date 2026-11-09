/* IL2CPP: Rotatelab.IAP.PurchasesListener$$HandleRestoredPurchaseAsync
void Rotatelab_IAP_PurchasesListener__HandleRestoredPurchaseAsync (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$HandleRestoredPurchaseAsync
   void Rotatelab_IAP_PurchasesListener__HandleRestoredPurchaseAsync
   (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, const
   MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__HandleRestoredPurchaseAsync_1098b44
               (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_010a8cd8 + 0x10a8b58);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8cdc + 0x10a8b6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8ce0 + 0x10a8b78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8ce4 + 0x10a8b84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8ce8 + 0x10a8b90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8cec + 0x10a8b9c));
    *pcVar7 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_2 + 8) + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__Contains_2a104b8(iVar6,**(undefined4 **)(_UNK_010a8cf0 + 0x10a8be0),0);
  if (iVar1 == 0) {
    return;
  }
  piVar8 = *(int **)(_UNK_010a8cf4 + 0x10a8bfc);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  iVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar2,0);
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar1,1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a8cf8 + 0x10a8c6c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010a8cfc + 0x10a8ca0),iVar6,0);
  if (*(int *)(**(int **)(_UNK_010a8d00 + 0x10a8cb4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c1d64 + 0x35c1c58);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
    *pcVar7 = '\x01';
  }
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar6 = *piVar8;
  }
  piVar8 = *(int **)(*(int *)(iVar6 + 0x5c) + 4);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *piVar8;
  uVar4 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
        puVar3 = (undefined4 *)(iVar6 + *piVar5 * 8 + 0xd8);
        goto LAB_035c1d48;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)thunk_FUN_00efdb38(piVar8,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar8,3,uVar2,puVar3[1]);
  return;
}


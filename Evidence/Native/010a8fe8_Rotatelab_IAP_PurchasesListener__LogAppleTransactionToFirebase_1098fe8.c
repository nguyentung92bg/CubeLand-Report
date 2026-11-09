/* IL2CPP: Rotatelab.IAP.PurchasesListener$$LogAppleTransactionToFirebase
void Rotatelab_IAP_PurchasesListener__LogAppleTransactionToFirebase (UnityEngine_Purchasing_Product_o* product, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$LogAppleTransactionToFirebase
   void Rotatelab_IAP_PurchasesListener__LogAppleTransactionToFirebase
   (UnityEngine_Purchasing_Product_o* product, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__LogAppleTransactionToFirebase_1098fe8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 uStack_11;
  
  pcVar6 = (char *)(_UNK_010a9140 + 0x10a8ffc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9144 + 0x10a9010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9148 + 0x10a901c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a914c + 0x10a9028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9150 + 0x10a9034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9154 + 0x10a9040));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010a9158 + 0x10a9054) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 != 8) {
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(param_1 + 0x14),0);
  iVar3 = 0x14;
  if (iVar1 != 0) {
    iVar3 = 0x18;
  }
  uVar7 = *(undefined4 *)(param_1 + iVar3);
  iVar1 = System_String__IsNullOrEmpty_2a0a844(uVar7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_010a9168 + 0x10a9120) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_010711c8 + 0x1071168);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010711cc + 0x107117c),0);
      *pcVar6 = '\x01';
    }
    uStack_11 = 0;
    if (*(int *)(**(int **)(_UNK_010711d0 + 0x1071194) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_11 = Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_10611d4(uVar7);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_010a9160 + 0x10a90dc),
                     *(undefined4 *)(*(int *)(param_1 + 8) + 8),
                     **(undefined4 **)(_UNK_010a915c + 0x10a90d0),0);
  if (*(int *)(**(int **)(_UNK_010a9164 + 0x10a90f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar8;
  }
  piVar8 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar8;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar8,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar8,2,uVar7,puVar2[1]);
  return;
}


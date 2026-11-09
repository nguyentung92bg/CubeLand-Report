/* IL2CPP: Rotatelab.IAP.PurchasesListener$$Start
void Rotatelab_IAP_PurchasesListener__Start (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$Start
   void Rotatelab_IAP_PurchasesListener__Start (Rotatelab_IAP_PurchasesListener_o* __this, const
   MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__Start_109644c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_010a666c + 0x10a6460);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6670 + 0x10a6474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6674 + 0x10a6480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6678 + 0x10a648c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a667c + 0x10a6498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6680 + 0x10a64a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6684 + 0x10a64b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6688 + 0x10a64bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a668c + 0x10a64c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6690 + 0x10a64d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6694 + 0x10a64e0));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010a6698 + 0x10a64f4);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (**(char **)(iVar1 + 0x5c) == '\0') {
    return;
  }
  piVar7 = *(int **)(_UNK_010a669c + 0x10a6524);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xf4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a66a0 + 0x10a6548));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010a66a4 + 0x10a6568),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xf4) = uVar2;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x104);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a66a8 + 0x10a65a8));
  System_Action_bool____ctor_17aaff0(uVar2,param_1,**(undefined4 **)(_UNK_010a66ac + 0x10a65c8),0);
  uVar2 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar8,uVar2,**(undefined4 **)(_UNK_010a66b0 + 0x10a65e0));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x104) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a66b4 + 0x10a6608));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a66b8 + 0x10a661c));
  Rotatelab_Networking_CloudSaveManager_RemoteDataFetchedDelegate___ctor_1146c94
            (uVar2,param_1,**(undefined4 **)(_UNK_010a66bc + 0x10a6638),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__add_OnRemoteDataFetched_11418ec(iVar1,uVar2,0);
  pcVar6 = (char *)(_UNK_010a6998 + 0x10a66d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a699c + 0x10a66ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69a0 + 0x10a66f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69a4 + 0x10a6704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69a8 + 0x10a6710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69ac + 0x10a671c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69b0 + 0x10a6728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69b4 + 0x10a6734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69b8 + 0x10a6740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69bc + 0x10a674c));
    *pcVar6 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uVar2 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_32ad0a0(0);
  iVar1 = UnityEngine_Purchasing_ConfigurationBuilder__Instance_32a7aac(uVar2,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_40,*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_010a69c0 + 0x10a679c));
  uStack_30 = uStack_40;
  uStack_2c = puStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_40 = 0;
  puVar9 = *(undefined4 **)(_UNK_010a69c4 + 0x10a67bc);
  puStack_3c = &uStack_30;
  while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_30,*puVar9), uVar2 = uStack_24, iVar3 != 0) {
    uVar8 = Rotatelab_IAP_PurchasesListener__GetProductType_10969e4(uStack_24);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Purchasing_ConfigurationBuilder__AddProduct_32a7c50(iVar1,uVar2,uVar8,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_30,**(undefined4 **)(_UNK_010a69c8 + 0x10a680c));
  iVar3 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_32ad0a0(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Purchasing_StandardPurchasingModule__get_appStore_32ad1f8(iVar3,0);
  if (iVar3 == 1) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar7 = (int *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object__14435f8
                              (iVar1,**(undefined4 **)(_UNK_010a69d0 + 0x10a6858));
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a69d4 + 0x10a6870));
    System_Action_object____ctor_1f11414
              (uVar2,param_1,**(undefined4 **)(_UNK_010a69d8 + 0x10a688c),0);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010a69dc + 0x10a68b0)) {
          puVar9 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
          goto LAB_010a68f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_010a69dc + 0x10a68b0),0);
LAB_010a68f8:
    (*(code *)*puVar9)(piVar7,uVar2,puVar9[1]);
  }
  if (*(int *)(**(int **)(_UNK_010a69e0 + 0x10a691c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Purchasing_UnityPurchasing__Initialize_32ad2fc(param_1,iVar1,0);
  return;
}


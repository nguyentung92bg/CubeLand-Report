/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$BuildCells
void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__BuildCells (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$BuildCells
   void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__BuildCells
   (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* slot, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__BuildCells_10d5760(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_010e5b38 + 0x10e577c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b3c + 0x10e5790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b40 + 0x10e579c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b44 + 0x10e57a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b48 + 0x10e57b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b4c + 0x10e57c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b50 + 0x10e57cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b54 + 0x10e57d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b58 + 0x10e57e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b5c + 0x10e57f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b60 + 0x10e57fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b64 + 0x10e5808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5b68 + 0x10e5814));
    *pcVar5 = '\x01';
  }
  puStack_44 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_010e5b6c + 0x10e5854));
  uStack_38 = uStack_58;
  uStack_34 = puStack_54;
  uStack_30 = uStack_50;
  iStack_2c = iStack_4c;
  uStack_58 = 0;
  puVar6 = *(undefined4 **)(_UNK_010e5b70 + 0x10e587c);
  puStack_54 = &uStack_38;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_38,*puVar6), iVar1 != 0) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(iStack_2c,0);
    if (*(int *)(**(int **)(_UNK_010e5b74 + 0x10e58b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Destroy_3609820(uVar2,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_010e5b78 + 0x10e58e4));
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_2 + 0x18),**(undefined4 **)(_UNK_010e5b80 + 0x10e5950));
  uStack_48 = uStack_58;
  puStack_44 = puStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  uStack_58 = 0;
  puVar6 = *(undefined4 **)(_UNK_010e5b84 + 0x10e597c);
  piVar8 = *(int **)(_UNK_010e5b88 + 0x10e5984);
  puStack_54 = &uStack_48;
  while( true ) {
    iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_48,*puVar6)
    ;
    iVar1 = iStack_3c;
    if (iVar4 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_48,**(undefined4 **)(_UNK_010e5b94 + 0x10e5a74));
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_010e5b8c + 0x10e59a0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar10,uVar2,**(undefined4 **)(_UNK_010e5b90 + 0x10e59c8));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_DailyDelivery_DailyDeliverySingleReward__InitializeReward_10d5b9c(iVar4,iVar1);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(uint *)(iVar1 + 0xc);
    iVar7 = *piVar8;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar9 == 0) break;
    if (uVar11 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar11 + 1;
      piVar3 = (int *)(iVar9 + uVar11 * 4 + 0x10);
      *piVar3 = iVar4;
      thunk_FUN_00ec5080(piVar3,iVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,iVar4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


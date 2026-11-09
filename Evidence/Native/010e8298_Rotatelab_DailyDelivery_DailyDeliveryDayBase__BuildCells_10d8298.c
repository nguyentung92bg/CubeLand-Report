/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$BuildCells
void Rotatelab_DailyDelivery_DailyDeliveryDayBase__BuildCells (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* dayData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$BuildCells
   void Rotatelab_DailyDelivery_DailyDeliveryDayBase__BuildCells
   (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* dayData, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryDayBase__BuildCells_10d8298(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
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
  
  pcVar5 = (char *)(_UNK_010e8878 + 0x10e82b4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e887c + 0x10e82c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8880 + 0x10e82d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8884 + 0x10e82e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8888 + 0x10e82ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e888c + 0x10e82f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8890 + 0x10e8304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8894 + 0x10e8310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8898 + 0x10e831c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e889c + 0x10e8328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e88a0 + 0x10e8334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e88a4 + 0x10e8340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e88a8 + 0x10e834c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e88ac + 0x10e8358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e88b0 + 0x10e8364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e88b4 + 0x10e8370));
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
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_010e88b8 + 0x10e83b0));
  uStack_38 = uStack_58;
  uStack_34 = puStack_54;
  uStack_30 = uStack_50;
  iStack_2c = iStack_4c;
  uStack_58 = 0;
  puVar7 = *(undefined4 **)(_UNK_010e88bc + 0x10e83d8);
  piVar9 = *(int **)(_UNK_010e88c0 + 0x10e83e0);
  puStack_54 = &uStack_38;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_38,*puVar7), iVar1 != 0) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(iStack_2c,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Destroy_3609820(uVar2,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_010e88c4 + 0x10e8440));
  iVar1 = *(int *)(param_1 + 0x28);
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
  iVar1 = *(int *)(param_1 + 0x2c);
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
  if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_2 + 8),**(undefined4 **)(_UNK_010e88cc + 0x10e84e4));
  uStack_48 = uStack_58;
  puStack_44 = puStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  uStack_58 = 0;
  puStack_54 = &uStack_48;
  while( true ) {
    while( true ) {
      iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_48,**(undefined4 **)(_UNK_010e88e4 + 0x10e8510));
      iVar1 = iStack_3c;
      if (iVar4 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_48,**(undefined4 **)(_UNK_010e88e8 + 0x10e8794));
        return;
      }
      if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      iVar4 = *(int *)(*piVar9 + 0x74);
      if (*(int *)(iStack_3c + 8) == 1) break;
      uVar6 = *(undefined4 *)(param_1 + 0x20);
      if (iVar4 == 0) {
        FUN_00ec3934();
      }
      iVar4 = UnityEngine_Object__Instantiate_object__14d4dd0
                        (uVar6,uVar2,**(undefined4 **)(_UNK_010e88dc + 0x10e8628));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_DailyDelivery_DailyDeliverySingleReward__InitializeReward_10d5b9c
                (iVar4,*(undefined4 *)(iVar1 + 0xc));
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_transform_35fe190(iVar4,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar1 + 8);
      uVar10 = *(uint *)(iVar1 + 0xc);
      piVar3 = *(int **)(_UNK_010e88e0 + 0x10e86a0);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar10 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar10 + 1;
        puVar7 = (undefined4 *)(iVar4 + uVar10 * 4 + 0x10);
        *puVar7 = uVar2;
        thunk_FUN_00ec5080(puVar7,uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
      }
    }
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    if (iVar4 == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar6,uVar2,**(undefined4 **)(_UNK_010e88d0 + 0x10e8564));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_DailyDelivery_DailyDeliveryChest__InitializeReward_10d4d1c(iVar4,iVar1);
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_transform_35fe190(iVar4,0);
    if (iVar1 == 0) break;
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(uint *)(iVar1 + 0xc);
    piVar3 = *(int **)(_UNK_010e88d4 + 0x10e85d8);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar10 + 1;
      puVar7 = (undefined4 *)(iVar8 + uVar10 * 4 + 0x10);
      *puVar7 = uVar2;
      thunk_FUN_00ec5080(puVar7,uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(uint *)(iVar1 + 0xc);
    piVar3 = *(int **)(_UNK_010e88d8 + 0x10e871c);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar10 + 1;
      piVar3 = (int *)(iVar8 + uVar10 * 4 + 0x10);
      *piVar3 = iVar4;
      thunk_FUN_00ec5080(piVar3,iVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,iVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


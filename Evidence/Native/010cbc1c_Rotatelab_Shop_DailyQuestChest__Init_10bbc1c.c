/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$Init
void Rotatelab_Shop_DailyQuestChest__Init (Rotatelab_Shop_DailyQuestChest_o* __this, System_Collections_Generic_List_DailyQuestSo_DailyQuestSingleRewardData__o* singleRewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$Init
   void Rotatelab_Shop_DailyQuestChest__Init (Rotatelab_Shop_DailyQuestChest_o* __this,
   System_Collections_Generic_List_DailyQuestSo_DailyQuestSingleRewardData__o* singleRewards, const
   MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest__Init_10bbc1c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_010cbf78 + 0x10cbc38);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf7c + 0x10cbc4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf80 + 0x10cbc58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf84 + 0x10cbc64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf88 + 0x10cbc70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf8c + 0x10cbc7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf90 + 0x10cbc88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf94 + 0x10cbc94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf98 + 0x10cbca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbf9c + 0x10cbcac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbfa0 + 0x10cbcb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbfa4 + 0x10cbcc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbfa8 + 0x10cbcd0));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar5 = *(int **)(_UNK_010cbfac + 0x10cbcec);
  iVar7 = *(int *)(param_1 + 0x18);
  uStack_38 = 0;
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar10 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cbfb0 + 0x10cbd3c));
    System_Action_object____ctor_1f11414
              (iVar6,uVar10,**(undefined4 **)(_UNK_010cbfb4 + 0x10cbd5c),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar7,iVar6,**(undefined4 **)(_UNK_010cbfb8 + 0x10cbd94));
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar7) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar7,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_38,param_2,**(undefined4 **)(_UNK_010cbfbc + 0x10cbdf4));
  puVar3 = *(undefined4 **)(_UNK_010cbfc0 + 0x10cbe14);
  piVar5 = *(int **)(_UNK_010cbfc4 + 0x10cbe1c);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar3)
    ;
    uVar10 = uStack_2c;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010cbfd0 + 0x10cbf08));
      return;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar11 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_010cbfc8 + 0x10cbe38) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar8,uVar11,**(undefined4 **)(_UNK_010cbfcc + 0x10cbe5c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_DailyQuestReward__Init_10bdf0c(iVar1,uVar10);
    iVar7 = *(int *)(param_1 + 0x18);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = *(int *)(iVar7 + 8);
    uVar9 = *(uint *)(iVar7 + 0xc);
    iVar6 = *piVar5;
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar12 == 0) break;
    if (uVar9 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar9 + 1;
      piVar2 = (int *)(iVar12 + uVar9 * 4 + 0x10);
      *piVar2 = iVar1;
      thunk_FUN_00ec5080(piVar2,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar7,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


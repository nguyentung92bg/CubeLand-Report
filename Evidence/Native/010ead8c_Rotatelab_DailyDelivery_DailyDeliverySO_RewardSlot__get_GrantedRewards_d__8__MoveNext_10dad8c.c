/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_GrantedRewards>d__8$$MoveNext
bool Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__MoveNext (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_GrantedRewards>d__8$$MoveNext
   bool Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__MoveNext
   (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__MoveNext_10dad8c
          (int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  int *piStack_18;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_010eaf88 + 0x10eada8);
  iStack_14 = param_1;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eaf8c + 0x10eadbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eaf90 + 0x10eadc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eaf94 + 0x10eadd4));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  piStack_18 = &iStack_14;
  iStack_1c = 0;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      goto LAB_010eaf08;
    }
    if (iVar1 != 0) goto LAB_010eaf08;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 8) != 1) {
      *(undefined4 *)(iStack_14 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      thunk_FUN_00ec5080();
      uVar3 = 1;
      *(undefined4 *)(iStack_14 + 8) = 1;
      goto LAB_010eaf08;
    }
    if (*(int *)(iVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_40,*(int *)(iVar4 + 0x18),**(undefined4 **)(_UNK_010eaf98 + 0x10eae48));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    *(undefined4 *)(iStack_14 + 0x18) = uStack_40;
    *(undefined4 *)(iStack_14 + 0x1c) = uStack_3c;
    *(undefined4 *)(iStack_14 + 0x20) = uStack_38;
    *(undefined4 *)(iStack_14 + 0x24) = uStack_34;
    thunk_FUN_00ec5080((undefined4 *)(iStack_14 + 0x18),0);
    param_1 = iStack_14;
  }
  *(undefined4 *)(param_1 + 8) = 0xfffffffd;
  iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                    (param_1 + 0x18,**(undefined4 **)(_UNK_010eaf9c + 0x10eae90));
  if (iVar1 == 0) {
    Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8____m__Finally1_10dafa0
              ();
    *(undefined4 *)(iStack_14 + 0x18) = 0;
    *(undefined4 *)(iStack_14 + 0x1c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(iStack_14 + 0x20) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(iStack_14 + 0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  else {
    *(undefined4 *)(iStack_14 + 0xc) = *(undefined4 *)(iStack_14 + 0x24);
    thunk_FUN_00ec5080();
    uVar3 = 1;
    *(undefined4 *)(iStack_14 + 8) = 2;
  }
LAB_010eaf08:
  iVar1 = iStack_1c;
  if (iStack_1c != 0) {
    if (*(int *)(*piStack_18 + 8) == 2 || *(int *)(*piStack_18 + 8) == -3) {
      Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8____m__Finally1_10dafa0
                ();
    }
    FUN_00ec3a6c(iVar1);
  }
  return uVar3;
}


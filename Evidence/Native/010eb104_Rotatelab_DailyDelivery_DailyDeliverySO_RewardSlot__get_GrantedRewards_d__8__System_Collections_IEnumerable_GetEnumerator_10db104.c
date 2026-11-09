/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_GrantedRewards>d__8$$System.Collections.IEnumerable.GetEnumerator
System_Collections_IEnumerator_o* Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__System_Collections_IEnumerable_GetEnumerator (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_GrantedRewards>d__8$$System.Collections.IEnumerable.GetEnumerator
   System_Collections_IEnumerator_o*
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__System_Collections_IEnumerable_GetEnumerator
   (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8_o* __this, const
   MethodInfo* method); */

int Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__System_Collections_IEnumerable_GetEnumerator_10db104
              (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_010eb0f8 + 0x10eb064);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb0fc + 0x10eb078));
    *pcVar3 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar4 = *(int *)(param_1 + 0x10),
     iVar1 = System_Environment__get_CurrentManagedThreadId_2bbd104(0), iVar4 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010eb100 + 0x10eb0bc));
    System_Object___ctor_2bb93bc(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = System_Environment__get_CurrentManagedThreadId_2bbd104(0);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_00ec5080();
  }
  return iVar1;
}


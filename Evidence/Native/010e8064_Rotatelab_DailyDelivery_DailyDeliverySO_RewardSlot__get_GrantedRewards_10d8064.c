/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot$$get_GrantedRewards
System_Collections_Generic_IEnumerable_DailyDeliverySO_SingleReward__o* Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot$$get_GrantedRewards
   System_Collections_Generic_IEnumerable_DailyDeliverySO_SingleReward__o*
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards
   (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* __this, const MethodInfo* method); */

int Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_10d8064
              (undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010e80dc + 0x10e8078);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e80e0 + 0x10e808c));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e80e4 + 0x10e80a0));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_2bbd104(0);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  return iVar1;
}


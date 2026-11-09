/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_GrantedRewards>d__8$$System.IDisposable.Dispose
void Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__System_IDisposable_Dispose (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_GrantedRewards>d__8$$System.IDisposable.Dispose
   void 
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__System_IDisposable_Dispose
   (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8_o* __this, const
   MethodInfo* method); */

undefined8
Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_d__8__System_IDisposable_Dispose_10dad74
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2 || iVar1 == -3) {
    pcVar3 = (char *)(_UNK_010eaff0 + 0x10eafb4);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010eaff4 + 0x10eafc8));
      *pcVar3 = '\x01';
    }
    uVar2 = **(undefined4 **)(_UNK_010eaff8 + 0x10eafdc);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return CONCAT44(uVar2,param_1 + 0x18);
  }
  return CONCAT44(iVar1,param_1);
}


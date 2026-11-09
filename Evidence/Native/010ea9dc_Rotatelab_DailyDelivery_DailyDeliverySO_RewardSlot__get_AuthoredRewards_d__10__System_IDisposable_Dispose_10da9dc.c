/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_AuthoredRewards>d__10$$System.IDisposable.Dispose
void Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_AuthoredRewards_d__10__System_IDisposable_Dispose (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_AuthoredRewards_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.DailyDelivery.DailyDeliverySO.RewardSlot.<get_AuthoredRewards>d__10$$System.IDisposable.Dispose
   void 
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_AuthoredRewards_d__10__System_IDisposable_Dispose
   (Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_AuthoredRewards_d__10_o* __this, const
   MethodInfo* method); */

undefined8
Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_AuthoredRewards_d__10__System_IDisposable_Dispose_10da9dc
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2 || iVar1 == -3) {
    pcVar3 = (char *)(_UNK_010eac5c + 0x10eac20);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010eac60 + 0x10eac34));
      *pcVar3 = '\x01';
    }
    uVar2 = **(undefined4 **)(_UNK_010eac64 + 0x10eac48);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return CONCAT44(uVar2,param_1 + 0x18);
  }
  return CONCAT44(iVar1,param_1);
}


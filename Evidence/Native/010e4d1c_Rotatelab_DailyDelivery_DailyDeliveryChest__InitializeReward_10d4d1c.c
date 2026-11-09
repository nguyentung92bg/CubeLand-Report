/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$InitializeReward
void Rotatelab_DailyDelivery_DailyDeliveryChest__InitializeReward (Rotatelab_DailyDelivery_DailyDeliveryChest_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* rewardSlot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$InitializeReward
   void Rotatelab_DailyDelivery_DailyDeliveryChest__InitializeReward
   (Rotatelab_DailyDelivery_DailyDeliveryChest_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot_o* rewardSlot, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChest__InitializeReward_10d4d1c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_24;
  
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar3 = (int *)(param_1 + 0x18);
  *piVar3 = param_2;
  thunk_FUN_00ec5080(piVar3);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(*piVar3 + 0x10),0);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_24 = *(undefined4 *)(*piVar3 + 0x14);
  thunk_FUN_00ec5080(&uStack_24);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_spriteState_39bff3c
            (*(int *)(param_1 + 0x14),0,uVar1,uVar2,uStack_24,0);
  return;
}


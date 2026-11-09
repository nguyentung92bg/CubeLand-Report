/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySingleReward$$InitializeReward
void Rotatelab_DailyDelivery_DailyDeliverySingleReward__InitializeReward (Rotatelab_DailyDelivery_DailyDeliverySingleReward_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_SingleReward_o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySingleReward$$InitializeReward
   void Rotatelab_DailyDelivery_DailyDeliverySingleReward__InitializeReward
   (Rotatelab_DailyDelivery_DailyDeliverySingleReward_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_SingleReward_o* reward, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliverySingleReward__InitializeReward_10d5b9c
               (int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10),0);
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010e5c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x2b0))
            (piVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*piVar1 + 0x2b4));
  return;
}


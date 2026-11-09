/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$SetDateForCreative
void Rotatelab_DailyDelivery_DailyDeliveryProgress__SetDateForCreative (System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$SetDateForCreative
   void Rotatelab_DailyDelivery_DailyDeliveryProgress__SetDateForCreative (System_DateTime_o date,
   const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryProgress__SetDateForCreative_10d966c
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x88) = param_1;
  *(undefined4 *)(iVar1 + 0x8c) = param_2;
  return;
}


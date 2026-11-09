/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$Evaluate
Rotatelab_DailyDelivery_DailyDeliveryState_o Rotatelab_DailyDelivery_DailyDeliveryProgress__Evaluate (Rotatelab_DailyDelivery_DailyDeliverySO_o* dailyDeliverySo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$Evaluate
   Rotatelab_DailyDelivery_DailyDeliveryState_o
   Rotatelab_DailyDelivery_DailyDeliveryProgress__Evaluate
   (Rotatelab_DailyDelivery_DailyDeliverySO_o* dailyDeliverySo, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryProgress__Evaluate_10d61b4
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_010e62bc + 0x10e61d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e62c0 + 0x10e61e4));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x88);
  uVar6 = *(undefined4 *)(iVar1 + 0x8c);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x80);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x84);
  uVar7 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if ((int)uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = 0xc;
  if ((*(uint *)((int)uVar7 + 0x80) & 1) == 0) {
    iVar1 = 0x10;
  }
  if (*(int *)(param_2 + iVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_DailyDelivery_DailyDeliveryProgress__Resolve_10d94d0
            (&uStack_30,(int)((ulonglong)uVar7 >> 0x20),uVar5,uVar6,uVar4,uVar3,
             *(undefined4 *)(*(int *)(param_2 + iVar1) + 0xc));
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}


/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$Resolve
Rotatelab_DailyDelivery_DailyDeliveryState_o Rotatelab_DailyDelivery_DailyDeliveryProgress__Resolve (System_DateTime_o lastClaim, int32_t cycleNumber, int32_t claimedDayCount, int32_t cycleDayCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$Resolve
   Rotatelab_DailyDelivery_DailyDeliveryState_o
   Rotatelab_DailyDelivery_DailyDeliveryProgress__Resolve (System_DateTime_o lastClaim, int32_t
   cycleNumber, int32_t claimedDayCount, int32_t cycleDayCount, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryProgress__Resolve_10d94d0
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_010e9640 + 0x10e94f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9644 + 0x10e9504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9648 + 0x10e9510));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010e964c + 0x10e9524);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_DateTime__op_Equality_2b4c0e8(param_3,param_4,0,0,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_30,0);
    if (*(int *)(**(int **)(_UNK_010e9650 + 0x10e9598) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = 0;
    iVar1 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(uStack_30,uStack_2c,0);
    iVar2 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(param_3,param_4,0);
    if (iVar1 - iVar2 < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_010e9620;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = (uint)(param_7 <= param_6 || 6 < (uint)(iVar1 - iVar2));
    param_5 = uVar3 + param_5;
    if (uVar3 != 0) {
      param_6 = 0;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_6 = 0;
  }
  uVar6 = 1;
LAB_010e9620:
  *(undefined1 *)(param_1 + 2) = uVar6;
  *param_1 = param_5;
  param_1[1] = param_6;
  return;
}


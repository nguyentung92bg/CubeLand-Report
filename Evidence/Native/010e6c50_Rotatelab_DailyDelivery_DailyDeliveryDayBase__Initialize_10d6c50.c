/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$Initialize
void Rotatelab_DailyDelivery_DailyDeliveryDayBase__Initialize (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* dayData, int32_t dayNumber, int32_t dayState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$Initialize
   void Rotatelab_DailyDelivery_DailyDeliveryDayBase__Initialize
   (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* dayData, int32_t dayNumber, int32_t dayState,
   const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryDayBase__Initialize_10d6c50
               (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010e6d30 + 0x10e6c70);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6d34 + 0x10e6c88));
    *pcVar2 = '\x01';
  }
  param_1[0xc] = param_2;
  thunk_FUN_00ec5080(param_1 + 0xc,param_2);
  piVar3 = (int *)param_1[5];
  uStack_1c = param_3;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010e6d38 + 0x10e6cb8) + 0x24),&uStack_1c);
  uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010e6d3c + 0x10e6cd4),uVar1,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0x2b0))(piVar3,uVar1,*(undefined4 *)(*piVar3 + 0x2b4));
  Rotatelab_DailyDelivery_DailyDeliveryDayBase__BuildCells_10d8298(param_1,param_2);
  (**(code **)(*param_1 + 0xe0))(param_1,param_4,*(undefined4 *)(*param_1 + 0xe4));
  return;
}


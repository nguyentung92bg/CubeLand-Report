/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$ValidateCycleDayCount
TriInspector_TriValidationResult_o Rotatelab_DailyDelivery_DailyDeliverySO__ValidateCycleDayCount (System_Collections_Generic_List_DailyDeliverySO_DayData__o* cycleDays, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$ValidateCycleDayCount
   TriInspector_TriValidationResult_o Rotatelab_DailyDelivery_DailyDeliverySO__ValidateCycleDayCount
   (System_Collections_Generic_List_DailyDeliverySO_DayData__o* cycleDays, const MethodInfo*
   method); */

void Rotatelab_DailyDelivery_DailyDeliverySO__ValidateCycleDayCount_10d9a48
               (undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_010e9b18 + 0x10e9a64);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9b1c + 0x10e9a78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9b20 + 0x10e9a84));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0xc) == 7) {
    TriInspector_TriValidationResult__get_Valid_3212cc8(&uStack_28,0);
  }
  else {
    uStack_14 = 7;
    uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010e9b24 + 0x10e9ac8) + 0x24),&uStack_14);
    uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010e9b28 + 0x10e9ae8),uVar1,0);
    TriInspector_TriValidationResult__Error_3212d44(&uStack_28,uVar1,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_20;
  *(undefined4 *)(param_1 + 2) = uStack_18;
  return;
}


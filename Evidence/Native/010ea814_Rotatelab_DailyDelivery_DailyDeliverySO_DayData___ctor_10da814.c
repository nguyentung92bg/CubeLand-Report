/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.DayData$$.ctor
void Rotatelab_DailyDelivery_DailyDeliverySO_DayData___ctor (Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.DayData$$.ctor
   void Rotatelab_DailyDelivery_DailyDeliverySO_DayData___ctor
   (Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* __this, const MethodInfo* method); */

int Rotatelab_DailyDelivery_DailyDeliverySO_DayData___ctor_10da814(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010ea898 + 0x10ea828);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea89c + 0x10ea83c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea8a0 + 0x10ea848));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ea8a4 + 0x10ea85c));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_010ea8a8 + 0x10ea870));
  *(undefined4 *)(param_1 + 8) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),uVar1);
  return param_1;
}


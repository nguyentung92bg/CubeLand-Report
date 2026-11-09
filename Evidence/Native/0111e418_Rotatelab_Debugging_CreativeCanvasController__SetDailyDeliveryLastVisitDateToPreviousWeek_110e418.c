/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetDailyDeliveryLastVisitDateToPreviousWeek
void Rotatelab_Debugging_CreativeCanvasController__SetDailyDeliveryLastVisitDateToPreviousWeek (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetDailyDeliveryLastVisitDateToPreviousWeek
   void Rotatelab_Debugging_CreativeCanvasController__SetDailyDeliveryLastVisitDateToPreviousWeek
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__SetDailyDeliveryLastVisitDateToPreviousWeek_110e418
               (void)

{
  char *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_0111e4e0 + 0x111e42c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e4e4 + 0x111e440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e4e8 + 0x111e44c));
    *pcVar1 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(**(int **)(_UNK_0111e4ec + 0x111e464) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  System_DateTime__AddDays_2b48944(&uStack_20,&uStack_18,0,0xc01c0000,0);
  Rotatelab_DailyDelivery_DailyDeliveryProgress__SetDateForCreative_10d966c(uStack_20,uStack_1c,0);
  if (*(int *)(**(int **)(_UNK_0111e4f0 + 0x111e4c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__Quit_35a70e0(0);
  return;
}


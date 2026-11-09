/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetDailyDeliveryLastVisitDateToPreviousDay
void Rotatelab_Debugging_CreativeCanvasController__SetDailyDeliveryLastVisitDateToPreviousDay (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetDailyDeliveryLastVisitDateToPreviousDay
   void Rotatelab_Debugging_CreativeCanvasController__SetDailyDeliveryLastVisitDateToPreviousDay
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__SetDailyDeliveryLastVisitDateToPreviousDay_110e33c
               (void)

{
  char *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_0111e404 + 0x111e350);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e408 + 0x111e364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e40c + 0x111e370));
    *pcVar1 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(**(int **)(_UNK_0111e410 + 0x111e388) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  System_DateTime__AddDays_2b48944(&uStack_20,&uStack_18,0,0xbff00000,0);
  Rotatelab_DailyDelivery_DailyDeliveryProgress__SetDateForCreative_10d966c(uStack_20,uStack_1c,0);
  if (*(int *)(**(int **)(_UNK_0111e414 + 0x111e3e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__Quit_35a70e0(0);
  return;
}


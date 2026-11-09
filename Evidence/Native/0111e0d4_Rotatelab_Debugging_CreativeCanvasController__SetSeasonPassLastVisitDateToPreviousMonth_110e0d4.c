/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetSeasonPassLastVisitDateToPreviousMonth
void Rotatelab_Debugging_CreativeCanvasController__SetSeasonPassLastVisitDateToPreviousMonth (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetSeasonPassLastVisitDateToPreviousMonth
   void Rotatelab_Debugging_CreativeCanvasController__SetSeasonPassLastVisitDateToPreviousMonth
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__SetSeasonPassLastVisitDateToPreviousMonth_110e0d4
               (void)

{
  int iVar1;
  undefined4 extraout_r1;
  char *pcVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0111e1f8 + 0x111e0e8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e1fc + 0x111e0fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e200 + 0x111e108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e204 + 0x111e114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e208 + 0x111e120));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111e20c + 0x111e138));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(_UNK_0111e210 + 0x111e160) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  System_DateTime__AddMonths_2b48bac(&uStack_20,&uStack_18,0xffffffff,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
            (iVar1,extraout_r1,uStack_20,uStack_1c,**(undefined4 **)(_UNK_0111e214 + 0x111e1c0));
  if (*(int *)(**(int **)(_UNK_0111e218 + 0x111e1d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__Quit_35a70e0(0);
  return;
}


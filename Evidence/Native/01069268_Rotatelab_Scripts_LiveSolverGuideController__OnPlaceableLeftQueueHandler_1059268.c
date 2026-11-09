/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnPlaceableLeftQueueHandler
void Rotatelab_Scripts_LiveSolverGuideController__OnPlaceableLeftQueueHandler (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnPlaceableLeftQueueHandler
   void Rotatelab_Scripts_LiveSolverGuideController__OnPlaceableLeftQueueHandler
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this,
   Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnPlaceableLeftQueueHandler_1059268
               (int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterHighlight__Clear_ff6414(*(int *)(param_1 + 0x30),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(param_2,0);
  Rotatelab_Scripts_LiveSolverGuideController__AdvancePin_10592d4(param_1,uVar1);
  Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve_105905c(param_1);
  uVar1 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


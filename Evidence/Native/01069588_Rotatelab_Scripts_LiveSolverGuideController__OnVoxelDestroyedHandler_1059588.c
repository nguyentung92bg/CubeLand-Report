/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnVoxelDestroyedHandler
void Rotatelab_Scripts_LiveSolverGuideController__OnVoxelDestroyedHandler (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_Scripts_BaseTargetableController_o* targetable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnVoxelDestroyedHandler
   void Rotatelab_Scripts_LiveSolverGuideController__OnVoxelDestroyedHandler
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this,
   Rotatelab_Scripts_BaseTargetableController_o* targetable, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnVoxelDestroyedHandler_1059588(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve_105905c(param_1);
  uVar1 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnBulletsConsumedHandler
void Rotatelab_Scripts_LiveSolverGuideController__OnBulletsConsumedHandler (Rotatelab_Scripts_LiveSolverGuideController_o* __this, int32_t colorType, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnBulletsConsumedHandler
   void Rotatelab_Scripts_LiveSolverGuideController__OnBulletsConsumedHandler
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, int32_t colorType, int32_t amount, const
   MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnBulletsConsumedHandler_10595bc(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  uVar1 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


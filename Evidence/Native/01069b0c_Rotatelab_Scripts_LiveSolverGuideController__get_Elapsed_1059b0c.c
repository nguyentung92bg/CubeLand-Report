/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$get_Elapsed
float Rotatelab_Scripts_LiveSolverGuideController__get_Elapsed (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$get_Elapsed
   float Rotatelab_Scripts_LiveSolverGuideController__get_Elapsed
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

float Rotatelab_Scripts_LiveSolverGuideController__get_Elapsed_1059b0c(int param_1)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  return fVar1 - *(float *)(param_1 + 0x50);
}


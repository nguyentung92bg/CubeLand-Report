/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSecondsRealtime$$Initialize
void Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime__Initialize (Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSecondsRealtime$$Initialize
   void Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime__Initialize
   (Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime_o* __this, float seconds, const
   MethodInfo* method); */

void Rotatelab_BetterWaitForSeconds_WaitForSecondsRealtime__Initialize_107c880
               (int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(float *)(param_1 + 8) = fVar1 + param_2;
  return;
}


/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSeconds$$Initialize
void Rotatelab_BetterWaitForSeconds_WaitForSeconds__Initialize (Rotatelab_BetterWaitForSeconds_WaitForSeconds_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.BetterWaitForSeconds.WaitForSeconds$$Initialize
   void Rotatelab_BetterWaitForSeconds_WaitForSeconds__Initialize
   (Rotatelab_BetterWaitForSeconds_WaitForSeconds_o* __this, float seconds, const MethodInfo*
   method); */

void Rotatelab_BetterWaitForSeconds_WaitForSeconds__Initialize_107c700(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
  *(float *)(param_1 + 8) = fVar1 + param_2;
  return;
}


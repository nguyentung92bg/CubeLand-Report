/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$RestartCooldownTimer
void Rotatelab_Ads_InterstitialAdFormat__RestartCooldownTimer (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$RestartCooldownTimer
   void Rotatelab_Ads_InterstitialAdFormat__RestartCooldownTimer
   (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__RestartCooldownTimer_10f041c(int param_1)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(float *)(param_1 + 0x44) = fVar1 + *(float *)(param_1 + 0x40);
  return;
}


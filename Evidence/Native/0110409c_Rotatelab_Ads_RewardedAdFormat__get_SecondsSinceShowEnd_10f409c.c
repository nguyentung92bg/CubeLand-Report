/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$get_SecondsSinceShowEnd
float Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShowEnd (Rotatelab_Ads_RewardedAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$get_SecondsSinceShowEnd
   float Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShowEnd (Rotatelab_Ads_RewardedAdFormat_o*
   __this, const MethodInfo* method); */

float Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShowEnd_10f409c(int param_1)

{
  float fVar1;
  
  if (0.0 <= *(float *)(param_1 + 0x5c)) {
    fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    fVar1 = fVar1 - *(float *)(param_1 + 0x5c);
  }
  else {
    fVar1 = -1.0;
  }
  return fVar1;
}


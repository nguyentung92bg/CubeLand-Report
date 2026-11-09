/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$get_SecondsSinceShow
float Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShow (Rotatelab_Ads_RewardedAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$get_SecondsSinceShow
   float Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShow (Rotatelab_Ads_RewardedAdFormat_o*
   __this, const MethodInfo* method); */

float Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShow_10f405c(int param_1)

{
  float fVar1;
  
  if (0.0 <= *(float *)(param_1 + 0x58)) {
    fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    fVar1 = fVar1 - *(float *)(param_1 + 0x58);
  }
  else {
    fVar1 = -1.0;
  }
  return fVar1;
}


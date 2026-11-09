/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$OnAdDisplayFailed
void Rotatelab_Ads_RewardedAdFormat__OnAdDisplayFailed (Rotatelab_Ads_RewardedAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_ErrorInfo_o* errorInfo, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$OnAdDisplayFailed
   void Rotatelab_Ads_RewardedAdFormat__OnAdDisplayFailed (Rotatelab_Ads_RewardedAdFormat_o* __this,
   System_String_o* adUnitId, MaxSdkBase_ErrorInfo_o* errorInfo, MaxSdkBase_AdInfo_o* adInfo, const
   MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__OnAdDisplayFailed_10f48bc
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  param_1[0x17] = iVar1;
  if (param_1[0x15] != 0) {
    Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished_10f1828(param_1[0x15],param_2);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  iVar1 = param_1[0xd];
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01104928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_4,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}


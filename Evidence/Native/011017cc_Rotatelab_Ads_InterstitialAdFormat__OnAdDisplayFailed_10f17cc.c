/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdDisplayFailed
void Rotatelab_Ads_InterstitialAdFormat__OnAdDisplayFailed (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_ErrorInfo_o* errorInfo, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdDisplayFailed
   void Rotatelab_Ads_InterstitialAdFormat__OnAdDisplayFailed (Rotatelab_Ads_InterstitialAdFormat_o*
   __this, System_String_o* adUnitId, MaxSdkBase_ErrorInfo_o* errorInfo, MaxSdkBase_AdInfo_o*
   adInfo, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__OnAdDisplayFailed_10f17cc
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1[0x13] != 0) {
    Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished_10f1828();
  }
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  iVar1 = param_1[0xd];
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01101820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_4,param_3,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


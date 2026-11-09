/* IL2CPP: Rotatelab.Ads.AdFormat$$NotifyAdLoaded
void Rotatelab_Ads_AdFormat__NotifyAdLoaded (Rotatelab_Ads_AdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.AdFormat$$NotifyAdLoaded
   void Rotatelab_Ads_AdFormat__NotifyAdLoaded (Rotatelab_Ads_AdFormat_o* __this, System_String_o*
   adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__NotifyAdLoaded_10ee080
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010fe098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}


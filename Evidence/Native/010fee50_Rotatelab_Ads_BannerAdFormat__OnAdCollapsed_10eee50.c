/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$OnAdCollapsed
void Rotatelab_Ads_BannerAdFormat__OnAdCollapsed (Rotatelab_Ads_BannerAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$OnAdCollapsed
   void Rotatelab_Ads_BannerAdFormat__OnAdCollapsed (Rotatelab_Ads_BannerAdFormat_o* __this,
   System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat__OnAdCollapsed_10eee50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = 0;
    thunk_FUN_00ec5080();
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010fee8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}


/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$OnAdExpanded
void Rotatelab_Ads_BannerAdFormat__OnAdExpanded (Rotatelab_Ads_BannerAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$OnAdExpanded
   void Rotatelab_Ads_BannerAdFormat__OnAdExpanded (Rotatelab_Ads_BannerAdFormat_o* __this,
   System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat__OnAdExpanded_10eee90(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x1c);
  if (*piVar1 != param_3) {
    *piVar1 = param_3;
    thunk_FUN_00ec5080(piVar1,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010feecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  return;
}


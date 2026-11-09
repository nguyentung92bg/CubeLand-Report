/* IL2CPP: Rotatelab.Ads.AdFormat$$OnExpiredAdReloaded
void Rotatelab_Ads_AdFormat__OnExpiredAdReloaded (Rotatelab_Ads_AdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* newAdInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.AdFormat$$OnExpiredAdReloaded
   void Rotatelab_Ads_AdFormat__OnExpiredAdReloaded (Rotatelab_Ads_AdFormat_o* __this,
   System_String_o* adUnitId, MaxSdkBase_AdInfo_o* newAdInfo, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__OnExpiredAdReloaded_10ee0a4
               (int *param_1,undefined4 param_2,int param_3)

{
  param_1[6] = param_3;
  thunk_FUN_00ec5080(param_1 + 6,param_3);
                    /* WARNING: Could not recover jumptable at 0x010fe0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1,param_2,param_3,*(undefined4 *)(*param_1 + 0x11c));
  return;
}


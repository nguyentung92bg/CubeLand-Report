/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdDisplayed
void Rotatelab_Ads_InterstitialAdFormat__OnAdDisplayed (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdDisplayed
   void Rotatelab_Ads_InterstitialAdFormat__OnAdDisplayed (Rotatelab_Ads_InterstitialAdFormat_o*
   __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__OnAdDisplayed_10f1868
               (int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x1c);
  if (*piVar1 != param_3) {
    *piVar1 = param_3;
    thunk_FUN_00ec5080(piVar1,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))
              (*(undefined4 *)(iVar2 + 0x20),param_2,param_3,*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}


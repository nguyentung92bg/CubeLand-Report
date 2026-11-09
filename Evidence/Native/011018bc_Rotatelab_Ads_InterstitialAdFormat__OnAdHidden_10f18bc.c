/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdHidden
void Rotatelab_Ads_InterstitialAdFormat__OnAdHidden (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdHidden
   void Rotatelab_Ads_InterstitialAdFormat__OnAdHidden (Rotatelab_Ads_InterstitialAdFormat_o*
   __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__OnAdHidden_10f18bc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1[7] != 0) {
    param_1[7] = 0;
    thunk_FUN_00ec5080();
  }
  uVar3 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  iVar1 = param_1[0x13];
  uVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar1 != 0) {
    uVar2 = param_2;
  }
  param_1[0x11] = (int)((float)uVar3 + (float)param_1[0x10]);
  if (iVar1 != 0) {
    Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished_10f1828(iVar1,uVar2);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01101938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


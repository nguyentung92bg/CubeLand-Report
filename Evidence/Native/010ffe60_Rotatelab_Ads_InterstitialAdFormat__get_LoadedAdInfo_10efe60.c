/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$get_LoadedAdInfo
MaxSdkBase_AdInfo_o* Rotatelab_Ads_InterstitialAdFormat__get_LoadedAdInfo (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$get_LoadedAdInfo
   MaxSdkBase_AdInfo_o* Rotatelab_Ads_InterstitialAdFormat__get_LoadedAdInfo
   (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_InterstitialAdFormat__get_LoadedAdInfo_10efe60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
  }
  else {
    iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4();
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x1c);
  }
  return *puVar2;
}


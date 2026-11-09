/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$IsAnyReady
bool Rotatelab_Ads_NeftaDualTrackLoader__IsAnyReady (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$IsAnyReady
   bool Rotatelab_Ads_NeftaDualTrackLoader__IsAnyReady (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__IsAnyReady_10f114c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__get_IsShowing_10efee0();
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4(param_1);
  return iVar1 != 0;
}


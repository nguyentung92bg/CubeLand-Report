/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$PeekBestAdInfo
MaxSdkBase_AdInfo_o* Rotatelab_Ads_NeftaDualTrackLoader__PeekBestAdInfo (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$PeekBestAdInfo
   MaxSdkBase_AdInfo_o* Rotatelab_Ads_NeftaDualTrackLoader__PeekBestAdInfo
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_NeftaDualTrackLoader__PeekBestAdInfo_10efe9c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  }
  return uVar2;
}


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$TakeAdUnitToShow
System_String_o* Rotatelab_Ads_NeftaDualTrackLoader__TakeAdUnitToShow (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$TakeAdUnitToShow
   System_String_o* Rotatelab_Ads_NeftaDualTrackLoader__TakeAdUnitToShow
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_NeftaDualTrackLoader__TakeAdUnitToShow_10f0d3c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 0x14) = 3;
  }
  return uVar2;
}


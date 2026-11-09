/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdLoaded
void Rotatelab_Ads_InterstitialAdFormat__OnAdLoaded (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$OnAdLoaded
   void Rotatelab_Ads_InterstitialAdFormat__OnAdLoaded (Rotatelab_Ads_InterstitialAdFormat_o*
   __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__OnAdLoaded_10f1224
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_011012e8 + 0x1101244);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011012ec + 0x1101258));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  uStack_1d = 0;
  Rotatelab_Ads_AdFormat__OnAdLoaded_10edfa0(param_1,param_2,param_3);
  if ((*(int *)(param_1 + 0x4c) == 0) ||
     (iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrackRole_10f12f4
                        (*(int *)(param_1 + 0x4c),param_2,&uStack_1c,&uStack_1d), iVar1 == 0)) {
    uStack_1d = 0;
    uStack_1c = **(undefined4 **)(_UNK_011012f0 + 0x11012ac);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_3,uStack_1c,uStack_1d,
               *(undefined4 *)(iVar1 + 0x14));
  }
  return;
}


/* IL2CPP: Rotatelab.Ads.AdManager$$ForwardImpressionToNefta
void Rotatelab_Ads_AdManager__ForwardImpressionToNefta (System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$ForwardImpressionToNefta
   void Rotatelab_Ads_AdManager__ForwardImpressionToNefta (System_String_o* adUnitId,
   MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_AdManager__ForwardImpressionToNefta_10f62a0
               (undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_011063c8 + 0x11062b8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011063cc + 0x11062cc));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011063d0 + 0x11062e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationImpression_2c30c6c(param_1,param_2,0);
  return;
}


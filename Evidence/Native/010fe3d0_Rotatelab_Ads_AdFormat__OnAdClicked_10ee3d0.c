/* IL2CPP: Rotatelab.Ads.AdFormat$$OnAdClicked
void Rotatelab_Ads_AdFormat__OnAdClicked (Rotatelab_Ads_AdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$OnAdClicked
   void Rotatelab_Ads_AdFormat__OnAdClicked (Rotatelab_Ads_AdFormat_o* __this, System_String_o*
   adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__OnAdClicked_10ee3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fe470 + 0x10fe3ec);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe474 + 0x10fe400));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Ads_AdFormat__get_IsReportedToNefta_10eddcc(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_010fe478 + 0x10fe424) + 0x74) == 0) {
      FUN_00ec3934();
    }
    NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationClick_2c312d0(param_2,param_3,0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010fe468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


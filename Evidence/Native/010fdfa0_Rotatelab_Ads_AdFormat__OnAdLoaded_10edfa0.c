/* IL2CPP: Rotatelab.Ads.AdFormat$$OnAdLoaded
void Rotatelab_Ads_AdFormat__OnAdLoaded (Rotatelab_Ads_AdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$OnAdLoaded
   void Rotatelab_Ads_AdFormat__OnAdLoaded (Rotatelab_Ads_AdFormat_o* __this, System_String_o*
   adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__OnAdLoaded_10edfa0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  
  pcVar4 = (char *)(_UNK_010fe074 + 0x10fdfbc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe078 + 0x10fdfd0));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_Ads_AdFormat__get_IsReportedToNefta_10eddcc(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_010fe07c + 0x10fdff4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationRequestLoaded_2c2f4ac(param_3,0);
  }
  param_1[6] = param_3;
  thunk_FUN_00ec5080(param_1 + 6,param_3);
  pcVar5 = *(code **)(*param_1 + 0x110);
  uVar3 = *(undefined4 *)(*param_1 + 0x114);
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = (*pcVar5)(param_1,param_2,param_3,uVar3);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = param_1[2];
  }
  if (iVar2 != 0 && iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010fe070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


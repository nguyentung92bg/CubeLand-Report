/* IL2CPP: Rotatelab.Ads.AdFormat$$OnAdLoadFailed
void Rotatelab_Ads_AdFormat__OnAdLoadFailed (Rotatelab_Ads_AdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_ErrorInfo_o* errorInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$OnAdLoadFailed
   void Rotatelab_Ads_AdFormat__OnAdLoadFailed (Rotatelab_Ads_AdFormat_o* __this, System_String_o*
   adUnitId, MaxSdkBase_ErrorInfo_o* errorInfo, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__OnAdLoadFailed_10ee0e4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fe1b8 + 0x10fe100);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe1bc + 0x10fe114));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Ads_AdFormat__get_IsReportedToNefta_10eddcc(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_010fe1c0 + 0x10fe138) + 0x74) == 0) {
      FUN_00ec3934();
    }
    NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationRequestFailed_2c30a10
              (param_2,param_3,0);
  }
  param_1[8] = param_1[8] + 1;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  param_1[9] = *(int *)(param_3 + 8);
  (**(code **)(*param_1 + 0x128))(param_1,param_2,*(undefined4 *)(*param_1 + 300));
  iVar1 = param_1[3];
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010fe1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_3,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


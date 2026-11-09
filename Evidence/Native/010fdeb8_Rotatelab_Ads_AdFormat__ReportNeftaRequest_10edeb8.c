/* IL2CPP: Rotatelab.Ads.AdFormat$$ReportNeftaRequest
void Rotatelab_Ads_AdFormat__ReportNeftaRequest (Rotatelab_Ads_AdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$ReportNeftaRequest
   void Rotatelab_Ads_AdFormat__ReportNeftaRequest (Rotatelab_Ads_AdFormat_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_AdFormat__ReportNeftaRequest_10edeb8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010fdf8c + 0x10fded0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fdf90 + 0x10fdee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fdf94 + 0x10fdef0));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = Rotatelab_Ads_AdFormat__get_IsReportedToNefta_10eddcc(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe8))(&uStack_20,param_1,*(undefined4 *)(*param_1 + 0xec));
    uVar2 = System_Nullable_Int32Enum___get_Value_17db2b4
                      (&uStack_20,**(undefined4 **)(_UNK_010fdf98 + 0x10fdf3c));
    iVar1 = param_1[5];
    if (*(int *)(**(int **)(_UNK_010fdf9c + 0x10fdf54) + 0x74) == 0) {
      FUN_00ec3934();
    }
    NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationRequest_2c2c5fc
              (uVar2,iVar1,0,0xbff00000,0);
  }
  return;
}


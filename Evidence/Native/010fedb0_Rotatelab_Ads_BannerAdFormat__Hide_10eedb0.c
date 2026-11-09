/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$Hide
void Rotatelab_Ads_BannerAdFormat__Hide (Rotatelab_Ads_BannerAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$Hide
   void Rotatelab_Ads_BannerAdFormat__Hide (Rotatelab_Ads_BannerAdFormat_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat__Hide_10eedb0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_010fee44 + 0x10fedc4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fee48 + 0x10fedd8));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    piVar1 = *(int **)(_UNK_010fee4c + 0x10fedfc);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    MaxSdkAndroid__HideBanner_29b0690(uVar4,0);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010fee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  return;
}


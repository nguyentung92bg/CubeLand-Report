/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$Show
void Rotatelab_Ads_BannerAdFormat__Show (Rotatelab_Ads_BannerAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$Show
   void Rotatelab_Ads_BannerAdFormat__Show (Rotatelab_Ads_BannerAdFormat_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat__Show_10eed10(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_010feda4 + 0x10fed24);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feda8 + 0x10fed38));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  piVar1 = *(int **)(_UNK_010fedac + 0x10fed5c);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  MaxSdkAndroid__ShowBanner_29b0540(uVar4,0);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010fed9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}


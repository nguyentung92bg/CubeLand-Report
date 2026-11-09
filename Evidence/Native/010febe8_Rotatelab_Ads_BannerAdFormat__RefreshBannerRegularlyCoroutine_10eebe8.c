/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$RefreshBannerRegularlyCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine (Rotatelab_Ads_BannerAdFormat_o* __this, float interval, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$RefreshBannerRegularlyCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine
   (Rotatelab_Ads_BannerAdFormat_o* __this, float interval, const MethodInfo* method); */

int Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_10eebe8
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fec64 + 0x10fec04);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fec68 + 0x10fec18));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fec6c + 0x10fec2c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}


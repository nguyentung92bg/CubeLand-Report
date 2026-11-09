/* IL2CPP: Rotatelab.Ads.BannerAdFormat.<RefreshBannerRegularlyCoroutine>d__17$$MoveNext
bool Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_d__17__MoveNext (Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_d__17_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerAdFormat.<RefreshBannerRegularlyCoroutine>d__17$$MoveNext
   bool Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_d__17__MoveNext
   (Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_d__17_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_d__17__MoveNext_10ef740(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_010ff834 + 0x10ff754);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff838 + 0x10ff768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff83c + 0x10ff774));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
    if (*(int *)(**(int **)(_UNK_010ff844 + 0x10ff7f8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    MaxSdkAndroid__LoadBanner_29b0150(uVar2,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    puVar1 = *(undefined4 **)(_UNK_010ff840 + 0x10ff7a4);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = thunk_FUN_00f00cdc(*puVar1);
    UnityEngine_WaitForSeconds___ctor_360c704(uVar2,uVar4,0);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}


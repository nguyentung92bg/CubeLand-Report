/* IL2CPP: Rotatelab.Ads.BannerAdFormat.<>c__DisplayClass16_4$$<.ctor>b__9
void Rotatelab_Ads_BannerAdFormat___c__DisplayClass16_4____ctor_b__9 (Rotatelab_Ads_BannerAdFormat___c__DisplayClass16_4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.BannerAdFormat.<>c__DisplayClass16_4$$<.ctor>b__9
   void Rotatelab_Ads_BannerAdFormat___c__DisplayClass16_4____ctor_b__9
   (Rotatelab_Ads_BannerAdFormat___c__DisplayClass16_4_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat___c__DisplayClass16_4____ctor_b__9_10ef718(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)(iVar3 + 0x1c);
  if (*piVar1 != iVar2) {
    *piVar1 = iVar2;
    thunk_FUN_00ec5080(piVar1,iVar2);
  }
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010feecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  return;
}


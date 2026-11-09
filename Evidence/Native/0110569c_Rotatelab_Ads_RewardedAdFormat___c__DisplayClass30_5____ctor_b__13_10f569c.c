/* IL2CPP: Rotatelab.Ads.RewardedAdFormat.<>c__DisplayClass30_5$$<.ctor>b__13
void Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_5____ctor_b__13 (Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.RewardedAdFormat.<>c__DisplayClass30_5$$<.ctor>b__13
   void Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_5____ctor_b__13
   (Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_5_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_5____ctor_b__13_10f569c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar3[7] != 0) {
    piVar3[7] = 0;
    thunk_FUN_00ec5080();
  }
  iVar1 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  piVar3[0x17] = iVar1;
  if (piVar3[0x15] != 0) {
    Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished_10f1828(piVar3[0x15],uVar2);
  }
  (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
  iVar1 = piVar3[0xe];
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011049f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}


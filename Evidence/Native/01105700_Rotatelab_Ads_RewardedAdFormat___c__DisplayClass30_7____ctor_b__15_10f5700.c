/* IL2CPP: Rotatelab.Ads.RewardedAdFormat.<>c__DisplayClass30_7$$<.ctor>b__15
void Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_7____ctor_b__15 (Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_7_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.RewardedAdFormat.<>c__DisplayClass30_7$$<.ctor>b__15
   void Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_7____ctor_b__15
   (Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_7_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat___c__DisplayClass30_7____ctor_b__15_10f5700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3[6] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 6,iVar2);
                    /* WARNING: Could not recover jumptable at 0x01105744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x118))(piVar3,uVar1,iVar2,*(undefined4 *)(*piVar3 + 0x11c));
  return;
}


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat.<>c__DisplayClass22_3$$<.ctor>b__10
void Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_3____ctor_b__10 (Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat.<>c__DisplayClass22_3$$<.ctor>b__10
   void Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_3____ctor_b__10
   (Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_3_o* __this, const MethodInfo* method);
    */

void Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_3____ctor_b__10_10f2284(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)(iVar4 + 0x1c);
  if (*piVar1 != iVar3) {
    *piVar1 = iVar3;
    thunk_FUN_00ec5080(piVar1,iVar3);
  }
  iVar4 = *(int *)(iVar4 + 0x30);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar4 + 0xc))
              (*(undefined4 *)(iVar4 + 0x20),uVar2,iVar3,*(undefined4 *)(iVar4 + 0x14));
    return;
  }
  return;
}


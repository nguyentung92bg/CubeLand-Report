/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat.<>c__DisplayClass22_5$$<.ctor>b__12
void Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_5____ctor_b__12 (Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat.<>c__DisplayClass22_5$$<.ctor>b__12
   void Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_5____ctor_b__12
   (Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_5_o* __this, const MethodInfo* method);
    */

void Rotatelab_Ads_InterstitialAdFormat___c__DisplayClass22_5____ctor_b__12_10f22e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = *(int **)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar4[7] != 0) {
    piVar4[7] = 0;
    thunk_FUN_00ec5080();
  }
  uVar5 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  iVar1 = piVar4[0x13];
  uVar2 = (int)((ulonglong)uVar5 >> 0x20);
  if (iVar1 != 0) {
    uVar2 = uVar3;
  }
  piVar4[0x11] = (int)((float)uVar5 + (float)piVar4[0x10]);
  if (iVar1 != 0) {
    Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished_10f1828(iVar1,uVar2);
  }
  (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
  iVar1 = piVar4[0xe];
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01101938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


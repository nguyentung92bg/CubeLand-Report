/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat.<ShowAfterCooldownCoroutine>d__31$$MoveNext
bool Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_d__31__MoveNext (Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat.<ShowAfterCooldownCoroutine>d__31$$MoveNext
   bool Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_d__31__MoveNext
   (Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_d__31_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_d__31__MoveNext_10f235c
               (int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < 2) {
    piVar2 = *(int **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Ads_InterstitialAdFormat__IsAdReady_10f0d60(piVar2,0);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar3 < 2;
}

